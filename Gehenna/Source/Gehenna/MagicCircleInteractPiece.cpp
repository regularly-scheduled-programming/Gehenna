// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCircleInteractPiece.h"

// Sets default values
AMagicCircleInteractPiece::AMagicCircleInteractPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMagicCircleInteractPiece::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AMagicCircleInteractPiece::checkActive()
{
	return isActive;
}

bool AMagicCircleInteractPiece::checkStatus()
{
	if (isPositive)
	{
		return isActive;
	}
	
	return !isActive;

}

void AMagicCircleInteractPiece::setMaster_Implementation(AMagickCircle * master)
{
	myMaster = master;
}

void AMagicCircleInteractPiece::setConnection_Implementation(bool connection)
{
	isPositive = connection;
}

// Called every frame
void AMagicCircleInteractPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

