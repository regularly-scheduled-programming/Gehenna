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

	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

protected:
	float ViewYawSpeed = 100.0f;
	float ViewPitchSpeed = 100.0f;

	FVector2D CameraInput;
};
