// Fill out your copyright notice in the Description page of Project Settings.


#include "MagickCircle.h"

// Sets default values
AMagickCircle::AMagickCircle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//intPoss = GetComponentsByClass<UMagickCircleInteractPoint>();
	//intPos = getcompo
}

// Called when the game starts or when spawned
void AMagickCircle::BeginPlay()
{
	Super::BeginPlay();
	
	//interPoints = GetComponentsByClass(UPrimitiveComponent::StaticClass());
	//GetComponents<UMagickCircleInteractPoint>(interPoints);
}

// Called every frame
void AMagickCircle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

