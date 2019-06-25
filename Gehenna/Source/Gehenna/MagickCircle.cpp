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

void AMagickCircle::activate_Implementation()
{
	for (size_t i = 0; i < myCompMeshes.Num(); i++)
	{
		myCompMeshes[i]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		myCompMeshes[i]->SetHiddenInGame(false, false);
		//myCompMeshes[i]->SetActorHiddenInGame(false);
		//myCompMeshes[i]->ToggleVisibility();
		//myCompMeshes[i]->SetActorEnableCollision(true);
	}
	isActive = true;
}

void AMagickCircle::deactivate_Implementation()
{
	for (size_t i = 0; i < myCompMeshes.Num(); i++)
	{
		myCompMeshes[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		myCompMeshes[i]->SetHiddenInGame(true, false);
	}
	isActive = false;
}

// Called every frame
void AMagickCircle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

