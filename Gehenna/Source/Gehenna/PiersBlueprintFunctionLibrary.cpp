// Fill out your copyright notice in the Description page of Project Settings.


#include "PiersBlueprintFunctionLibrary.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISenseConfig_Sight.h"
void UPiersBlueprintFunctionLibrary::SetHalfAngle(UAIPerceptionComponent * Target, float angle)
{
	//FString yo;
//	FAISenseID test(InName, SenseID);
	
	//TSubclassOf<UAISense> test2 =  Target->GetDominantSense();
	//FAISenseID senseID = UAISense::GetSenseID(test2);
	FAISenseID senseID = UAISense::GetSenseID<UAISense_Sight>();

	UAISenseConfig_Sight* sense2 = Cast<UAISenseConfig_Sight>(Target->GetSenseConfig(senseID));
	
	sense2->PeripheralVisionAngleDegrees = angle;
	//sense2->SightRadius = 100;
	//Target->ReloadConfig();
	//Target
	Target->ConfigureSense(*sense2);
}
