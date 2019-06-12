// Fill out your copyright notice in the Description page of Project Settings.


#include "BAI_IsState.h"

UBAI_IsState::UBAI_IsState(const FObjectInitializer& ObjectInitializer)
{
	
}

bool UBAI_IsState::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIOwner = OwnerComp.GetAIOwner();
	ABaby* Baby = Cast<ABaby>(AIOwner->GetPawn());
	if (Baby)
	{
		return Baby->state == compareState;
	}
	return false;
}