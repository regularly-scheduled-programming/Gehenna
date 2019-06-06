// Fill out your copyright notice in the Description page of Project Settings.


#include "Baby.h"

// Sets default values
ABaby::ABaby()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaby::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaby::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaby::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

int ABaby::HappinessCap_Implementation(int fullness, int energy)
{
	return 100;
}

void ABaby::StatChanges(float DeltaTime)
{
	timer += DeltaTime;
	if (timer >= 1.0f)
	{
		happiness -= happinessDecreaseRate;
		fullness -= fullnessDecreaseRate;
		energy -= energyDecreaseRate;
		timer = 0.0f;
	}

	happiness = FMath::Min<int>(happiness, HappinessCap(fullness, energy));

	if (happiness < 30)
		state = EBabyStates::VE_Angry;
	else if (happiness > 70)
		state = EBabyStates::VE_Happy;
	else
		state = EBabyStates::VE_Neutral;
}

void ABaby::HoldBaby()
{
	isHeld = true;
}

void ABaby::ReleaseBaby()
{
	isHeld = false;
}

void ABaby::PerformBabyAction(EBabyAction action)
{

}

