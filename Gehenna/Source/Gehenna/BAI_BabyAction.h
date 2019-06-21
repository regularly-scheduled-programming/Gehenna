// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Baby.h"
#include "AIController.h"
#include "BabyActions.h"
#include "BAI_BabyAction.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EBabyActions : uint8
{
	VE_Silence UMETA(DisplayName = "Silence / Idle"),
	VE_Grumpy UMETA(DisplayName = "Grumpy / Idle"),
	VE_Noise UMETA(DisplayName = "Noise / Idle"),
	VE_Cool UMETA(DisplayName = "Cool / Idle"),
	VE_Laugh UMETA(DisplayName = "Laugh"),
	VE_Cry UMETA(DisplayName = "Cry Sequence"),
	VE_Sleep UMETA(DisplayName = "Sleep"),
	VE_Barf UMETA(DisplayName = "Barf Sequence"),
};


UCLASS()
class GEHENNA_API UBAI_BabyAction : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBAI_BabyAction(const FObjectInitializer& ObjectInitializer);

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);

private:
	//Interrupt current action, node is failed
	void ActionInProgress(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
	//Finish current action, node is successful
	void ActionComplete(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		EBabyActions babyAction = EBabyActions::VE_Silence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float actionDuration = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		float telegraphDuration = 3.0f;

private:
	AAIController* AIOwner;
	ABaby* Baby;
	IBabyActions* BabyAction;
	float timer = 0.0f;
	bool telegraphAction = false;
};
