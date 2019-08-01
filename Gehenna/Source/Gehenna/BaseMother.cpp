// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMother.h"
#include "Engine.h"

// Sets default values
ABaseMother::ABaseMother()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseMother::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseMother::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseMother::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool ABaseMother::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor) const
{
	static const FName NAME_AILineOfSight = FName(TEXT("TestPawnLineOfSight"));

	FHitResult HitResult;

	auto sockets = GetMesh()->GetAllSocketNames();
	
	for (int i = 0; i < sockets.Num(); i++)
	{

		FVector socketLocation = GetMesh()->GetSocketLocation(sockets[i]);

		const bool bHitSocket = GetWorld()->LineTraceSingleByObjectType(HitResult, ObserverLocation, socketLocation
			, 
			FCollisionObjectQueryParams(TraceObjectTypes)
			
			
			// << Changed this line
			, FCollisionQueryParams(NAME_AILineOfSight, true, IgnoreActor));

		NumberOfLoSChecksPerformed++;


		if (bHitSocket == false || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(this))) {
			OutSeenLocation = socketLocation;
			OutSightStrength = 1;

			return true;
		}
	}
	//const bool bHit = GetWorld()->LineTraceSingleByObjectType(HitResult, ObserverLocation, GetActorLocation()
	//	, FCollisionObjectQueryParams(TraceObjectTypes)
	//	// << Changed this line
	//	, FCollisionQueryParams(NAME_AILineOfSight, true, IgnoreActor));
	const bool bHit = this->PierMotherTrace(HitResult, ObserverLocation, GetActorLocation(), IgnoreActor);
	NumberOfLoSChecksPerformed++;

	if (bHit == false || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(this)))
	{
		OutSeenLocation = GetActorLocation();
		OutSightStrength = 1;

		return true;
	}

	OutSightStrength = 0;
	return false;
}


