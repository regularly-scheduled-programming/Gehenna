// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObj.h"

// Sets default values
AInteractableObj::AInteractableObj()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableObj::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableObj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_interactable)
	{
		m_inputTimer += DeltaTime;
		if (!FailImpossible && m_inputTimer > InputInterval)
		{
			StopInteraction(false);
		}
	}
}

void AInteractableObj::ReceiveInput(EInputDir input)
{
	if (m_interactable && m_currentInputIndex < SuccessInputArray.Num())
	{
		if (SuccessInputArray[m_currentInputIndex] == input)
		{
			m_inputTimer = 0.0f;
			m_currentInputIndex++;
			if (m_currentInputIndex == SuccessInputArray.Num())
			{
				StopInteraction(true);
			}
		}
		else if (m_currentInputIndex > 0 && SuccessInputArray[m_currentInputIndex - 1] == input)
		{
			//Repeated calls ignore
		}
		else if (!FailImpossible)
		{
			StopInteraction(false);
		}
	}
}

void AInteractableObj::StartInteraction()
{
	m_interactable = true;
	m_inputTimer = 0.0f;
	m_currentInputIndex = 0;

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Start Interaction"));
}

bool AInteractableObj::StopInteraction(bool success)
{
	m_interactable = false;
	if (success)
	{
		OnInteractionComplete();
	}
	else
	{
		OnInteractionFailed();
	}
	return success;
}

void AInteractableObj::OnInteractionComplete()
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Interaction Complete"));
}

void AInteractableObj::OnInteractionFailed()
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Interaction Failed"));
}

