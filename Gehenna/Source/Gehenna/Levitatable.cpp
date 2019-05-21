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


void ALevitatable::getMagicked()
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

	isLevitated = !isLevitated;
	shouldMove = true;
}


// Called when the game starts or when spawned
void ALevitatable::BeginPlay()
{
	Super::BeginPlay();
	
	originalPos = this->GetActorLocation();
}

void ALevitatable::getLevitated()
{
	targetPos = FVector(originalPos.X, originalPos.Y, originalPos.Z + levitationAmount);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString::Printf(TEXT("I'm gonna get levitated by %f"), levitationAmount ));
}

void ALevitatable::getUnLevitated()
{
	targetPos = originalPos;
}



// Called every frame
void ALevitatable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

