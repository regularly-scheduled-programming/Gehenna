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

	happiness = FMath::Min<int>(happiness, HappinessCap());

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

bool ABaby::HeldTight_Implementation()
{
	if (isHeld)
	{
		DebugLine("Held Tight");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::Entertained_Implementation()
{
	if (isHeld)
	{
		DebugLine("Entertained");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::Shushed_Implementation()
{
	if (isHeld)
	{
		DebugLine("Shushed");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::Fed_Implementation()
{
	if (isHeld)
	{
		DebugLine("Fed");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::Calmed_Implementation()
{
	if (isHeld)
	{
		DebugLine("Calmed");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::SungLullaby_Implementation()
{
	if (isHeld)
	{
		DebugLine("Sung Lullaby");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

bool ABaby::ShownAffection_Implementation()
{
	if (isHeld)
	{
		DebugLine("Shown Affection");
	}
	else
	{
		DebugLine("Baby not held");
	}
	return true;
}

void ABaby::DebugLine(FString msg, FColor color)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, color, msg);
}
