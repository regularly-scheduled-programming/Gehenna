// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnPlayerController.h"

void APawnPlayerController::UpdateRotation(float DeltaTime)
{
	float Time = DeltaTime * (1 / GetActorTimeDilation());
	FRotator DeltaRot(0, 0, 0);

	DeltaRot.Yaw = CameraInput.X * (ViewYawSpeed * Time);
	DeltaRot.Pitch = CameraInput.Y * (ViewPitchSpeed * Time);
	DeltaRot.Roll = 0.0f;

	RotationInput = DeltaRot;

	Super::UpdateRotation(DeltaTime);
}

void APawnPlayerController::PitchCamera(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void APawnPlayerController::YawCamera(float AxisValue)
{
	CameraInput.X = AxisValue;
}
