// Fill out your copyright notice in the Description page of Project Settings.


#include "AiSenseConfig_LongRangeSight.h"



UAiSenseConfig_LongRangeSight::UAiSenseConfig_LongRangeSight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DebugColor = FColor::Blue;
	Implementation = GetSenseImplementation();
}

TSubclassOf<UAISense> UAiSenseConfig_LongRangeSight::GetSenseImplementation() const
{
	return *Implementation;
}