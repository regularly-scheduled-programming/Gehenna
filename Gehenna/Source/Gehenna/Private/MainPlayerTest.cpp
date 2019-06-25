// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerTest.h"

// Sets default values
AMainPlayerTest::AMainPlayerTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainPlayerTest::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine)
	{
		//Put up a debug message for five seconds. The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using True FPSCharacter."));
	}
}

// Called every frame
void AMainPlayerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PreUpdateCamera(DeltaTime);
}

// Called to bind functionality to input
void AMainPlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	auto pWorld = GetWorld();
	if (pWorld)
	{
		APawnPlayerController* MyController = Cast<APawnPlayerController>(pWorld->GetFirstPlayerController());
		if (MyController)
		{
			//Hook up every-frame handling for our four axes
			PlayerInputComponent->BindAxis("MoveForward/Backwards", MyController, &APawnPlayerController::MoveForward);
			PlayerInputComponent->BindAxis("MoveRight/Left", MyController, &APawnPlayerController::MoveRight);
			PlayerInputComponent->BindAxis("LookUp/Down", MyController, &APawnPlayerController::PitchCamera);
			PlayerInputComponent->BindAxis("LookLeft/Right", MyController, &APawnPlayerController::YawCamera);
		}
	}

}

void AMainPlayerTest::PreUpdateCamera(float DeltaTime)
{
	FRotator ControllerRotation = GetControlRotation();
	FRotator NewRotation = ControllerRotation;

	// Get current controller rotation and process it to match the Character
	NewRotation.Yaw = CameraProcessYaw(ControllerRotation.Yaw);
	NewRotation.Pitch = CameraProcessPitch(ControllerRotation.Pitch + RecoilOffset);
	NewRotation.Normalize();

	// Clamp new rotation
	NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch, -90.0f + CameraTreshold, 90.0f - CameraTreshold);
	NewRotation.Yaw = FMath::Clamp(NewRotation.Yaw, -91.0f, 91.0f);

	//Update loca variable, will be retrived by AnimBlueprint
	CameraLocalRotation = NewRotation;
}

float AMainPlayerTest::CameraProcessPitch(float Input)
{
	//Recenter value
	if (Input > 269.99f)
	{
		Input -= 270.0f;
		Input = 90.0f - Input;
		Input *= -1.0f;
	}

	return Input;
}

float AMainPlayerTest::CameraProcessYaw(float Input)
{
	//Get direction vector from Controller and Character
	FVector Direction1 = GetActorRotation().Vector();
	FVector Direction2 = FRotator(0.0f, Input, 0.0f).Vector();

	//Compute the Angle difference between the two dirrection
	float Angle = FMath::Acos(FVector::DotProduct(Direction1, Direction2));
	Angle = FMath::RadiansToDegrees(Angle);

	//Find on which side is the angle difference (left or right)
	FRotator Temp = GetActorRotation() - FRotator(0.0f, 90.0f, 0.0f);
	FVector Direction3 = Temp.Vector();

	float Dot = FVector::DotProduct(Direction3, Direction2);

	//Invert angle to switch side
	if (Dot > 0.0f)
	{
		Angle *= -1;
	}

	return Angle;
}


