// Fill out your copyright notice in the Description page of Project Settings.


#include "BAI_BabyAction.h"

UBAI_BabyAction::UBAI_BabyAction(const FObjectInitializer& ObjectInitializer)
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBAI_BabyAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIOwner = OwnerComp.GetAIOwner();
	Baby = Cast<ABaby>(AIOwner->GetPawn());
	BabyAction = Cast<IBabyActions>(Baby);
	timer = 0.0f;
	telegraphAction = false;

	if (BabyAction)
	{
		switch (babyAction)
		{
		default:
		case EBabyActions::VE_Silence:
			BabyAction->Execute_SilenceIdle(Baby);
			break;
		case EBabyActions::VE_Grumpy:
			BabyAction->Execute_GrumpyIdle(Baby);
			break;
		case EBabyActions::VE_Noise:
			BabyAction->Execute_NoiseIdle(Baby);
			break;
		case EBabyActions::VE_Cool:
			BabyAction->Execute_CoolIdle(Baby);
			break;
		case EBabyActions::VE_Laugh:
			BabyAction->Execute_Laugh(Baby);
			break;
		case EBabyActions::VE_Cry:
			BabyAction->Execute_CryTelegraph(Baby);
			telegraphAction = true;
			break;
		case EBabyActions::VE_Sleep:
			BabyAction->Execute_Sleep(Baby);
			break;
		case EBabyActions::VE_Barf:
			BabyAction->Execute_BarfTelegraph(Baby);
			telegraphAction = true;
			break;
		}
		return EBTNodeResult::InProgress;
	}
	else
	{
		FString msg = "BabyAction interface needs to be added to ";
		Baby->GetClass()->AppendName(msg);
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, msg);
		return EBTNodeResult::Failed;
	}
}

void UBAI_BabyAction::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	timer += DeltaSeconds;
	if (timer >= actionDuration || (telegraphAction && timer >= telegraphDuration))
	{
		ActionComplete(OwnerComp, NodeMemory, DeltaSeconds);
	}
	else
	{
		ActionInProgress(OwnerComp, NodeMemory, DeltaSeconds);
	}
}

void UBAI_BabyAction::ActionInProgress(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	switch (babyAction)
	{
	default:
	case EBabyActions::VE_Silence:
		break;
	case EBabyActions::VE_Grumpy:
		if (Baby->actedUponState == EBabyActedUponStates::VE_Shushed)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
		break;
	case EBabyActions::VE_Noise:
		if (Baby->actedUponState == EBabyActedUponStates::VE_Shushed)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
		break;
	case EBabyActions::VE_Cool:
		if (Baby->actedUponState == EBabyActedUponStates::VE_Shushed)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
	case EBabyActions::VE_Laugh:
		break;
	case EBabyActions::VE_Cry:
		if (telegraphAction)
		{
			if (Baby->actedUponState == EBabyActedUponStates::VE_ShownAffection)
			{
				FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
			}
		}
		break;
	case EBabyActions::VE_Sleep:
		break;
	case EBabyActions::VE_Barf:
		if (telegraphAction)
		{
			if (Baby->actedUponState == EBabyActedUponStates::VE_None)
			{
				FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
			}
		}
		break;
	}
}

void UBAI_BabyAction::ActionComplete(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	switch (babyAction)
	{
	default:
	case EBabyActions::VE_Silence:
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Grumpy:
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Noise:
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Cool:
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Laugh:
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Cry:
		if (telegraphAction)
		{
			telegraphAction = false;
			timer = 0.0f;
			Baby->Execute_Cry(Baby);
		}
		else
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
	case EBabyActions::VE_Sleep:
		Baby->ActionStatChange(EBabyStats::VE_Energy, Baby->sleepChangeAmount, false);
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		break;
	case EBabyActions::VE_Barf:
		if (telegraphAction)
		{
			telegraphAction = false;
			timer = 0.0f;
			Baby->Execute_Barf(Baby);
			Baby->ActionStatChange(EBabyStats::VE_Happiness, Baby->barfChangeAmount, true);
		}
		else
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		break;
	}
}