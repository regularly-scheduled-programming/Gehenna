// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PawnPlayerController.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainPlayerTest.generated.h"

class UCameraComponent;

UCLASS()
class GEHENNA_API AMainPlayerTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayerTest();

	void PreUpdateCamera(float DeltaTime);
	float CameraProcessPitch(float Input);
	float CameraProcessYaw(float Input);

	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	FVector2D MovementInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
	float Pitch = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
	bool TurnRight = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
	bool TurnLeft = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Input variables
	FRotator RotationInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	FRotator CameraLocalRotation;

	float RecoilOffset = 0.0f;
	float CameraTreshold = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	USpringArmComponent* OurCameraSpringArm;
	UCameraComponent* OurCamera;
	UStaticMeshComponent* CharacterMeshComponent;
	APawnPlayerController* MyController;

};
