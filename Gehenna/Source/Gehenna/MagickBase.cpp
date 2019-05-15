// Fill out your copyright notice in the Description page of Project Settings.


#include "MagickBase.h"

// Sets default values for this component's properties
UMagickBase::UMagickBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	isMagickUiOn = false;
	// ...
}


// Called when the game starts
void UMagickBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UMagickBase::turnRadialOn_Implementation() {

}

void UMagickBase::turnRadialOff_Implementation() {

}

void UMagickBase::setIsMagickUiOn(bool set){
	isMagickUiOn = set;
}

// Called every frame
void UMagickBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

