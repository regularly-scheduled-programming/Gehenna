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

void APawnPlayerController::MoveForward(float AxisValue)
{
	MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
	//// Find out which way is "forward" and record that the player wants to move that way.
	//FVector Direction = FRotationMatrix(GetControlRotation()).GetScaledAxis(EAxis::X);
	//AddMovementInput(Direction, MovementInput.X);
}

void APawnPlayerController::MoveRight(float AxisValue)
{
	MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
	//// Find out which way is "right" and record that the player wants to move that way.
	//FVector Direction = FRotationMatrix(GetControlRotation()).GetScaledAxis(EAxis::Y);
	//AddMovementInput(Direction, MovementInput.Y);
}

void APawnPlayerController::PitchCamera(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void APawnPlayerController::YawCamera(float AxisValue)
{
	CameraInput.X = AxisValue;
}
