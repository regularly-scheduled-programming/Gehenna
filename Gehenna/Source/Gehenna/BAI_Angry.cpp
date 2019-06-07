// Fill out your copyright notice in the Description page of Project Settings.


#include "BAI_Angry.h"


UBAI_Angry::UBAI_Angry(const FObjectInitializer& ObjectInitializer)
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBAI_Angry::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIOwner = OwnerComp.GetAIOwner();
	Pawn = AIOwner->GetPawn();
	BabyAction = Cast<IBabyActions>(Pawn);
	timer = 0.0f;

	if (BabyAction)
	{
		if (cryPercentage <= FMath::RandHelper(100) + 1)
		{
			BabyAction->Execute_CryTelegraph(Pawn);
			state = EBabyAngryStates::VE_CryTelegraph;
		}
		else
		{
			BabyAction->Execute_SilenceIdle(Pawn);
			state = EBabyAngryStates::VE_Idle;
		}
		return EBTNodeResult::InProgress;
	}
	else
	{
		FString msg = "BabyAction interface needs to be added to ";
		Pawn->GetClass()->AppendName(msg);
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, msg);
		return EBTNodeResult::Failed;
	}
}

void UBAI_Angry::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	timer += DeltaSeconds;
	switch (state)
	{
	default:
	case EBabyAngryStates::VE_Idle:
		if (timer > idleTime)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
	case EBabyAngryStates::VE_CryTelegraph:
		if (timer > cryTelegraphTime)
		{
			BabyAction->Execute_Cry(Pawn);
			timer = 0.0f;
			state = EBabyAngryStates::VE_Cry;
		}
		break;
	case EBabyAngryStates::VE_Cry:
		if (timer > cryTime)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
	}
}