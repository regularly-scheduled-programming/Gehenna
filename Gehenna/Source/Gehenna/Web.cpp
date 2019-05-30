// Fill out your copyright notice in the Description page of Project Settings.


#include "Web.h"

// Sets default values
AWeb::AWeb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeb::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	lifeTime -= DeltaTime;

	if (lifeTime <= 0)
	{
		Destroy();
	}
}

