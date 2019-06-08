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

int ABaby::HappinessCap_Implementation()
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

	//Set min max values
	happiness = FMath::Min<int>(happiness, HappinessCap());
	fullness = FMath::Max<int>(fullness, 0);
	energy = FMath::Max<int>(energy, 0);

	if (happiness < angryNeutralPoint)
		state = EBabyStates::VE_Angry;
	else if (happiness > neutralHappyPoint)
		state = EBabyStates::VE_Happy;
	else
		state = EBabyStates::VE_Neutral;
}

bool ABaby::SilenceIdle_Implementation()
{
	return true;
}

bool ABaby::CoolIdle_Implementation()
{
	return true;
}

bool ABaby::Laugh_Implementation()
{
	return true;
}

bool ABaby::Sleep_Implementation()
{
	return true;
}

bool ABaby::CryTelegraph_Implementation()
{
	return true;
}

bool ABaby::Cry_Implementation()
{
	return true;
}

bool ABaby::BarfTelegraph_Implementation()
{
	return true;
}

bool ABaby::Barf_Implementation()
{
	return true;
}

bool ABaby::ResetToDefault_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_None;
	DebugLine("No Input Action");
	return true;
}

bool ABaby::HeldTight_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_HeldTight;
	DebugLine("Held Tight");
	return true;
}

bool ABaby::Entertained_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_Entertained;
	DebugLine("Entertained");
	return true;
}

bool ABaby::Shushed_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_Shushed;
	DebugLine("Shushed");
	return true;
}

bool ABaby::Fed_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_Fed;
	DebugLine("Fed");
	return true;
}

bool ABaby::Calmed_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_Calmed;
	DebugLine("Calmed");
	return true;
}

bool ABaby::SungLullaby_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_SungLullaby;
	DebugLine("Sung Lullaby");
	return true;
}

bool ABaby::ShownAffection_Implementation()
{
	actedUponState = EBabyActedUponStates::VE_ShownAffection;
	DebugLine("Shown Affection");
	return true;
}

void ABaby::DebugLine(FString msg, FColor color)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, color, msg);
}
