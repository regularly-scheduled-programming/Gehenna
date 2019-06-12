// Fill out your copyright notice in the Description page of Project Settings.


#include "BAI_HasInputAction.h"

UBAI_HasInputAction::UBAI_HasInputAction(const FObjectInitializer& ObjectInitializer)
{

}

bool UBAI_HasInputAction::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIOwner = OwnerComp.GetAIOwner();
	ABaby* Baby = Cast<ABaby>(AIOwner->GetPawn());
	if (Baby)
	{
		return Baby->actedUponState == compareAction;
	}
	return false;
}