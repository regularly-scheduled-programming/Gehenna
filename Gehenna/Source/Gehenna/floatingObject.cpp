// Fill out your copyright notice in the Description page of Project Settings.


#include "floatingObject.h"

// Sets default values
AfloatingObject::AfloatingObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AfloatingObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AfloatingObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//int dir = 1;
	//if (shouldMove)
	//{
	//	if (targetWaterLevelValue < GetActorLocation().Z)
	//	{
	//		dir = -1;
	//	}

	//	

	//}

}

