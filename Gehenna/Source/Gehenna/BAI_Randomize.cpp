// Fill out your copyright notice in the Description page of Project Settings.


#include "BAI_Randomize.h"

UBAI_Randomize::UBAI_Randomize(const FObjectInitializer& ObjectInitializer)
{

}

bool UBAI_Randomize::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (successPercentage <= FMath::RandHelper(100) + 1)
	{
		return true;
	}
	return false;
}