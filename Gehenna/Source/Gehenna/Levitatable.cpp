// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Levitatable.h"
#include "Engine.h"

// Sets default values
ALevitatable::ALevitatable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void ALevitatable::getMagicked()	// Deprecated
{
	
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("I'm a levitatable. I just got magicked!"));

	if (isLevitated)
	{
		getUnLevitated();
	}
	else
	{
		getLevitated();
	}

	/*isLevitated = !isLevitated;
	shouldMove = true;*/	// Moved inside functions for the new implementation
}


// Called when the game starts or when spawned
void ALevitatable::BeginPlay()
{
	Super::BeginPlay();
	
	originalPos = this->GetActorLocation();
	targetPos = originalPos;
	levitatedPos = FVector(originalPos.X, originalPos.Y, originalPos.Z + levitationAmount);

	upSpeed = levitationAmount / upMoveTime;
	downSpeed = levitationAmount / downMoveTime;
}

void ALevitatable::getLevitated()
{
	//targetPos = levitatedPos;
	shouldMoveUp = true;
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString::Printf(TEXT("I'm gonna get levitated by %f"), levitationAmount ));

	isLevitated = true;
	shouldMove = true;
}

void ALevitatable::getUnLevitated()
{
	//targetPos = originalPos;
	shouldMoveUp = false;

	isLevitated = false;
	shouldMove = true;
}



// Called every frame
void ALevitatable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (shouldMove)
	{
		if (shouldMoveUp)
		{
			targetPos.Z = GetActorLocation().Z + (upSpeed * DeltaTime);
			if (targetPos.Z >= levitatedPos.Z)
			{
				shouldMove = false;
			}
		}
		else
		{
			targetPos.Z = GetActorLocation().Z - (downSpeed * DeltaTime);
			if (targetPos.Z <= originalPos.Z)
			{
				shouldMove = false;
			}
		}
	}


}
