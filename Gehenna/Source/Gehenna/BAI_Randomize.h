// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BAI_Randomize.generated.h"

/**
 * 
 */
UCLASS()
class GEHENNA_API UBAI_Randomize : public UBTDecorator
{
	GENERATED_BODY()

public:

	UBAI_Randomize(const FObjectInitializer& ObjectInitializer);

public:

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		int successPercentage = 50;
	
};
