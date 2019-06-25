// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PawnPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GEHENNA_API APawnPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void UpdateRotation(float DeltaTime) override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

protected:
	float ViewYawSpeed = 50.0f;
	float ViewPitchSpeed = 50.0f;

	FVector2D MovementInput;
	FVector2D CameraInput;
};
