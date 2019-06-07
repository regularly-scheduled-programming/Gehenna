// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "BabyActions.h"
#include "BAI_Angry.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EBabyAngryStates : uint8
{
	VE_Idle UMETA(DisplayName = "Idle"),
	VE_CryTelegraph UMETA(DisplayName = "CryTelegraph"),
	VE_Cry UMETA(DisplayName = "Cry"),
};

UCLASS()
class GEHENNA_API UBAI_Angry : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBAI_Angry(const FObjectInitializer& ObjectInitializer);

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		int cryPercentage = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float idleTime = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float cryTelegraphTime = 3.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float cryTime = 5.0f;

private:
	AAIController* AIOwner;
	APawn* Pawn;
	IBabyActions* BabyAction;
	float timer = 0.0f;
	EBabyAngryStates state;
};
