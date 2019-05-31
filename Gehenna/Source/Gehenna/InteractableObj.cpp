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
		if (InputInterval > 0.0f)
			m_inputTimer += DeltaTime;

		float x = GetInputAxisValue(TEXT("MoveRight/Left"));
		float y = GetInputAxisValue(TEXT("MoveForward/Backwards"));
		m_CurrentInput = GetStickDirection(x, y);

		if (m_CurrentInput != m_PreviousInput)
		{
			m_PreviousInput = m_CurrentInput;
			if (m_CurrentInput != EInputDir::VE_Center)
			{
				if (m_PreviousInput == EInputDir::VE_Center)
				{
					ReceiveInput(GetStickDirection(x, y, SuccessInputArray[m_currentInputIndex]));
				}
				else
				{
					ReceiveInput(GetStickDirection(x, y));
				}
			}
		}

		if (!FailImpossible && m_inputTimer > InputInterval)
		{
			//Timed and fail-possible interaction
			StopInteraction(false);
		}
	}
}

void AInteractableObj::ReceiveInput(EInputDir input)
{
	if (m_interactable && m_currentInputIndex < SuccessInputArray.Num())
	{
		if (SuccessInputArray[m_currentInputIndex] != EInputDir::VE_Circle_CW && SuccessInputArray[m_currentInputIndex] != EInputDir::VE_Circle_CCW)
		{
			if (SuccessInputArray[m_currentInputIndex] == input)
			{
				//Correct input advance to next input
				m_inputTimer = 0.0f;
				m_currentInputIndex++;
			}
			else
			{
				if (!FailImpossible)
				{
					if (HoldToInteract)
					{
						//Reset interaction sequence to start from beginning
						m_inputTimer = 0.0f;
						m_circleSequence = 0;
						m_currentInputIndex = 0;
						DebugLine("Reset sequence");
						return;
					}
					else
					{
						StopInteraction(false);
					}
				}
			}
		}
		else
		{
			if (m_circleSequence == 0)
			{
				m_circleStart = input;
				m_inputTimer = 0.0f;
				m_circleSequence++;
			}
			else
			{
				int nextDirIndex;
				if (SuccessInputArray[m_currentInputIndex] == EInputDir::VE_Circle_CW)
				{
					nextDirIndex = (static_cast<int>(m_circleStart) + m_circleSequence) % NUM_OF_DIR;
				}
				else
				{
					nextDirIndex = (static_cast<int>(m_circleStart) - m_circleSequence);
					if (nextDirIndex < 0)
						nextDirIndex += NUM_OF_DIR;
				}
				if (nextDirIndex == 0)
					nextDirIndex = NUM_OF_DIR;
				EInputDir nextDir = static_cast<EInputDir>(nextDirIndex);
				if (nextDir == input)
				{
					m_inputTimer = 0.0f;
					m_circleSequence++;
					if (m_circleSequence == NUM_OF_DIR + 1)
					{
						m_circleSequence = 0;
						m_currentInputIndex++;
					}
				}
				else
				{
					if (!FailImpossible)
					{
						if (HoldToInteract)
						{
							//Reset interaction sequence to start from beginning
							m_inputTimer = 0.0f;
							m_circleSequence = 0;
							m_currentInputIndex = 0;
							DebugLine("Reset sequence, circle input error");
							return;
						}
						else
						{
							StopInteraction(false);
						}
					}
				}
			}
		}
	}

	if (m_interactable && m_currentInputIndex == SuccessInputArray.Num())
	{
		StopInteraction(true);
	}
}

void AInteractableObj::StartInteraction()
{
	m_interactable = true;
	m_inputTimer = 0.0f;
	m_currentInputIndex = 0;
	m_PreviousInput = EInputDir::VE_Center;
	m_circleSequence = 0;

	DebugLine("Start Interaction", FColor::Cyan);
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

void AInteractableObj::ReleaseInteractionBtn()
{
	if (HoldToInteract && m_interactable)
	{
		DebugLine("Release Interaction", FColor::Yellow);
		StopInteraction(false);
	}
}

void AInteractableObj::OnInteractionComplete_Implementation()
{
	DebugLine("Interaction Complete", FColor::Green);
}

void AInteractableObj::OnInteractionFailed_Implementation()
{
	DebugLine("Interaction Failed", FColor::Red);
}

EInputDir AInteractableObj::GetStickDirection(float x, float y, EInputDir favoredDir)
{
	FVector2D dir = FVector2D(x, y);
	dir.Normalize(0.5625f);
	if (dir.IsNearlyZero())
	{
		return EInputDir::VE_Center;
	}
	else
	{
		float dotProduct = dir.X;
		float angleRad = FMath::Acos(dotProduct);
		float angleDeg = FMath::RadiansToDegrees(angleRad);
		if (dir.Y >= 0.0f)
		{
			if (angleDeg <= 22.5f + (favoredDir == EInputDir::VE_Right) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_UpRight) ? 7.5f : 0.0f)
				return EInputDir::VE_Right;
			else if (angleDeg <= 67.5f + (favoredDir == EInputDir::VE_UpRight) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_Up) ? 7.5f : 0.0f)
				return EInputDir::VE_UpRight;
			else if (angleDeg <= 112.5f + (favoredDir == EInputDir::VE_Up) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_UpLeft) ? 7.5f : 0.0f)
				return EInputDir::VE_Up;
			else if (angleDeg <= 157.5f + (favoredDir == EInputDir::VE_UpLeft) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_Left) ? 7.5f : 0.0f)
				return EInputDir::VE_UpLeft;
			else
				return EInputDir::VE_Left;
		}
		else
		{
			if (angleDeg <= 22.5f + (favoredDir == EInputDir::VE_Right) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_DownRight) ? 7.5f : 0.0f)
				return EInputDir::VE_Right;
			else if (angleDeg <= 67.5f + (favoredDir == EInputDir::VE_DownRight) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_Down) ? 7.5f : 0.0f)
				return EInputDir::VE_DownRight;
			else if (angleDeg <= 112.5f + (favoredDir == EInputDir::VE_Down) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_DownLeft) ? 7.5f : 0.0f)
				return EInputDir::VE_Down;
			else if (angleDeg <= 157.5f + (favoredDir == EInputDir::VE_DownLeft) ? 7.5f : 0.0f + (favoredDir == EInputDir::VE_Left) ? 7.5f : 0.0f)
				return EInputDir::VE_DownLeft;
			else
				return EInputDir::VE_Left;
		}
	}
}

void AInteractableObj::DebugLine(FString msg, FColor color)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, color, msg);
}

