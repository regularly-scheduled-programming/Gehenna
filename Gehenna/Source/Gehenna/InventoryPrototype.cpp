// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryPrototype.h"
#include "Engine.h"

// Sets default values for this component's properties
UInventoryPrototype::UInventoryPrototype()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryPrototype::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryPrototype::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UInventoryPrototype::PickUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Picked Up Item"));
	bIsPickingUp = true;
}

void UInventoryPrototype::EndPickUp()
{
	bIsPickingUp = false;
}

void UInventoryPrototype::ShowItems()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Show Inventory"));
	for (auto& Item : Inventory)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString::Printf( TEXT("Item: %s "), *Item));
	}
}

