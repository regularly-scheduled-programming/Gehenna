// Fill out your copyright notice in the Description page of Project Settings.
#include "AiSense_LongRangeSight.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "AiSenseConfig_LongRangeSight.h"
#include "Perception/AIPerceptionComponent.h"

UAiSense_LongRangeSight::UAiSense_LongRangeSight()
{
	//Bind the required functions
	OnNewListenerDelegate.BindUObject(this, &UAiSense_LongRangeSight::OnNewListenerImpl);
	OnListenerRemovedDelegate.BindUObject(this, &UAiSense_LongRangeSight::OnListenerRemovedImpl);
}

float UAiSense_LongRangeSight::Update()
{
	AIPerception::FListenerMap& ListenersMap = *GetListeners();

	//For each listener who has this sense we're going to perform a sweep to determine nearby aqua actors
	for (auto& Elem : ListenersMap)
	{
		//Get the listener
		FPerceptionListener Listener = Elem.Value;
		const AActor* ListenerBodyActor = Listener.GetBodyActor();

		for (int32 DigestedPropertyIndex = 0; DigestedPropertyIndex < DigestedProperties.Num(); DigestedPropertyIndex++)
		{
			float openAngleHalf = FMath::DegreesToRadians(DigestedProperties[DigestedPropertyIndex].VisionOpenAngle) / 2.0f;
			float maxWidthDistance = DigestedProperties[DigestedPropertyIndex].VisionDistance * DigestedProperties[DigestedPropertyIndex].VisionMaxWidthDistPercentage;
			float widthHalf = FMath::Tan(openAngleHalf) * maxWidthDistance;
			FVector boxExtent = FVector(DigestedProperties[DigestedPropertyIndex].VisionDistance / 2.0f, widthHalf, DigestedProperties[DigestedPropertyIndex].VisionHeight / 2.0f);
			float closeAngleHalf = FMath::DegreesToRadians(DigestedProperties[DigestedPropertyIndex].VisionCloseAngle) / 2.0f;
			float closeTriHeight = widthHalf / FMath::Tan(closeAngleHalf);
			float endEdgeHalf = widthHalf * (closeTriHeight - DigestedProperties[DigestedPropertyIndex].VisionDistance + maxWidthDistance) / closeTriHeight;
			//Create the sphere for this sense and perform the sweep to determine nearby actors
			FCollisionShape CollisionBox = FCollisionShape::MakeBox(boxExtent);
			TArray<FHitResult> HitResults;
			GetWorld()->SweepMultiByChannel(HitResults, ListenerBodyActor->GetActorLocation(), ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * DigestedProperties[DigestedPropertyIndex].VisionDistance, ListenerBodyActor->GetActorQuat(), ECollisionChannel::ECC_WorldDynamic, CollisionBox);
			
			FVector p1 = ListenerBodyActor->GetActorLocation();
			FVector p2 = ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * maxWidthDistance + ListenerBodyActor->GetActorRightVector() * widthHalf;
			FVector p3 = ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * maxWidthDistance - ListenerBodyActor->GetActorRightVector() * widthHalf;
			FVector p4 = ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * DigestedProperties[DigestedPropertyIndex].VisionDistance + ListenerBodyActor->GetActorRightVector() * endEdgeHalf;
			FVector p5 = ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * DigestedProperties[DigestedPropertyIndex].VisionDistance - ListenerBodyActor->GetActorRightVector() * endEdgeHalf;;

			//Draw debug sphere if we have activated it via the config
			if (DigestedProperties[DigestedPropertyIndex].bDisplayDebugShape)
			{
				//Draw box
				DrawDebugBox(GetWorld(), ListenerBodyActor->GetActorLocation() + ListenerBodyActor->GetActorForwardVector() * DigestedProperties[DigestedPropertyIndex].VisionDistance / 2.0f, CollisionBox.GetExtent(), FColor::Red, false, 30.f, 1, 2.f);
				//Draw pentagon
				DrawDebugLine(GetWorld(), p1, p2, FColor::Blue, false, 30.f, 1, 2.f);
				DrawDebugLine(GetWorld(), p1, p3, FColor::Blue, false, 30.f, 1, 2.f);
				DrawDebugLine(GetWorld(), p2, p4, FColor::Blue, false, 30.f, 1, 2.f);
				DrawDebugLine(GetWorld(), p3, p5, FColor::Blue, false, 30.f, 1, 2.f);
				DrawDebugLine(GetWorld(), p4, p5, FColor::Blue, false, 30.f, 1, 2.f);
			}

			//Check hit results for aqua actors
			for (int32 i = 0; i < HitResults.Num(); i++)
			{
				FHitResult hit = HitResults[i];
				FVector2D startLocation2D = FVector2D(ListenerBodyActor->GetActorLocation());
				FVector2D actorForward2D = FVector2D(ListenerBodyActor->GetActorForwardVector()).GetSafeNormal();
				FVector2D hitLocation2D = FVector2D(hit.Location);
				FVector2D hitVector2D = hitLocation2D - startLocation2D;
				float dotProd = FVector2D::DotProduct(actorForward2D, hitVector2D);
				float angle = FMath::RadiansToDegrees(FMath::Acos(dotProd / (actorForward2D.Size() * hitVector2D.Size())));

				bool bWithinPentagon = false;
				
				//Determine if actors hit by collision box, is within the specified pentagon shape
				if (angle <= openAngleHalf)
				{
					FVector2D hitVecForwardCom = actorForward2D * dotProd;
					FVector2D hitVecRightCom = hitVector2D - hitVecForwardCom;
					float forwardDist = hitVecForwardCom.Size();
					float sideDist = hitVecRightCom.Size();
					if (forwardDist <= maxWidthDistance)
					{
						bWithinPentagon = true;
					}
					else
					{
						float maxCloseTriSideDist = widthHalf * (closeTriHeight - forwardDist + maxWidthDistance) / closeTriHeight;
						if (sideDist <= maxCloseTriSideDist)
						{
							bWithinPentagon = true;
						}
					}
				}

				//Register all actors within the pentagon shape collision volume
				if (bWithinPentagon)
				{
					Elem.Value.RegisterStimulus(hit.GetActor(), FAIStimulus(*this, 5.f, hit.GetActor()->GetActorLocation(), ListenerBodyActor->GetActorLocation()));
					GLog->Log("registered stimulus!");
				}
			}
		}
	}
	//Time until next update; in this case we're forcing the update to happen in each frame
	return 0.f;
}

void UAiSense_LongRangeSight::OnNewListenerImpl(const FPerceptionListener& NewListener)
{
	//Since we have at least one AI actor with this sense this function will fire when the game starts
	GLog->Log("hello new listener!");
	check(NewListener.Listener.IsValid());
	//Get the config
	UAISenseConfig* Config = NewListener.Listener->GetSenseConfig(GetSenseID());
	const UAiSenseConfig_LongRangeSight* SenseConfig = Cast<const UAiSenseConfig_LongRangeSight>(Config);
	check(SenseConfig);
	//Consume properties from the sense config
	FDigestedCustomSightProperties PropertyDigest(*SenseConfig);
	DigestedProperties.Add(PropertyDigest);
	RequestImmediateUpdate();
}

void UAiSense_LongRangeSight::OnListenerRemovedImpl(const FPerceptionListener& UpdatedListener)
{
	//In our case, executes when we stop playing
	GLog->Log("on listener removed!");
}

UAiSense_LongRangeSight::FDigestedCustomSightProperties::FDigestedCustomSightProperties()
{
	//Init.
	VisionOpenAngle = 30.0f;
	VisionCloseAngle = 45.0f;
	VisionDistance = 15.0f;
	VisionMaxWidthDistPercentage = 0.7f;
	VisionHeight = 2.0f;
	bDisplayDebugShape = false;
}

UAiSense_LongRangeSight::FDigestedCustomSightProperties::FDigestedCustomSightProperties(const UAiSenseConfig_LongRangeSight& SenseConfig)
{
	//Copy constructor
	VisionOpenAngle = SenseConfig.VisionOpenAngle;
	VisionCloseAngle = SenseConfig.VisionCloseAngle;
	VisionDistance = SenseConfig.VisionDistance;
	VisionMaxWidthDistPercentage = SenseConfig.VisionMaxWidthDistPercentage;
	VisionHeight = SenseConfig.VisionHeight;
	bDisplayDebugShape = SenseConfig.bDisplayDebugShape;
}