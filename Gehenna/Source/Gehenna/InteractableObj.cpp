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

	InputComponent->BindAxis(TEXT("MoveRight/Left"));
	InputComponent->BindAxis(TEXT("MoveForward/Backwards"));
	
}

// Called every frame
void AInteractableObj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_interactable)
	{
		m_inputTimer += DeltaTime;

		float x = GetInputAxisValue(TEXT("MoveRight/Left"));
		float y = GetInputAxisValue(TEXT("MoveForward/Backwards"));
		m_CurrentInput = GetStickDirection(x, y);
		if (m_CurrentInput != m_PreviousInput)
		{
			m_PreviousInput = m_CurrentInput;
			if (m_CurrentInput != EInputDir::VE_Center)
				ReceiveInput(GetStickDirection(x, y));
		}

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
		if (SuccessInputArray[m_currentInputIndex] != EInputDir::VE_Circle_Any)
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
			else
			{
				StopInteraction(false);
			}
		}
		else
		{
			if (m_circleSequence == 0)
			{
				m_circleStart = input;
			}
			else if (m_circleSequence == NUM_OF_DIR)
			{
				if (m_circleStart == input)
				{
					m_currentInputIndex++;
					if (m_currentInputIndex == SuccessInputArray.Num())
					{
						StopInteraction(true);
					}
				}
				else
				{
					StopInteraction(false);
				}
			}
			else
			{
				int nextDirIndex = (static_cast<int>(m_circleStart) + m_circleSequence) % NUM_OF_DIR;
				if (nextDirIndex == 0)
					nextDirIndex = NUM_OF_DIR;
				EInputDir nextDir = static_cast<EInputDir>(nextDirIndex);
				if (nextDir != input)
				{
					StopInteraction(false);
				}
			}
			m_inputTimer = 0.0f;
			m_circleSequence++;
		}
	}
}

void AInteractableObj::StartInteraction()
{
	m_interactable = true;
	m_inputTimer = 0.0f;
	m_currentInputIndex = 0;
	m_PreviousInput = EInputDir::VE_Center;
	m_circleSequence = 0;

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

EInputDir AInteractableObj::GetStickDirection(float x, float y)
{
	if (x > 0.75f)
		return EInputDir::VE_Right;
	if (x < -0.75f)
		return EInputDir::VE_Left;
	if (y > 0.75f)
		return EInputDir::VE_Up;
	if (y < -0.75f)
		return EInputDir::VE_Down;
	return EInputDir::VE_Center;
}

