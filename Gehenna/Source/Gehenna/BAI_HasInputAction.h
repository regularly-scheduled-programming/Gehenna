// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Baby.h"
#include "AIController.h"
#include "BAI_HasInputAction.generated.h"

/**
 * 
 */
UCLASS()
class GEHENNA_API UBAI_HasInputAction : public UBTDecorator
{
	GENERATED_BODY()
	
public:

	UBAI_HasInputAction(const FObjectInitializer& ObjectInitializer);

public:

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		EBabyActedUponStates compareAction = EBabyActedUponStates::VE_None;
};
