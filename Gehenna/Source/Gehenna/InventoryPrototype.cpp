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

void UInventoryPrototype::AddToInventory(FMyItemInfo Item)
{
	int temp = SearchInventoryById(Item.ItemID);
	if (temp != -1)
	{
		Inventory[temp].Quantity++;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Another copy of item:  ") + Item.ItemName);
	}
	else
	{
		Inventory.Add(Item);
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") + Item.ItemName);
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::Printf(TEXT("You Picked Up Item %s"), Item.ItemName));
}

bool UInventoryPrototype::RemoveFromInventory(int32 ItemID)
{
	//Inventory.Remove(Item);
	int i = SearchInventoryById(ItemID);

	if (i != -1)	// IF FOUND
	{
		if (Inventory[i].Quantity > 1)
		{
			Inventory[i].Quantity--;
			UpdateInventory();
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") + Inventory[i].ItemName + TEXT(" removed."));
			Inventory.RemoveAt(i);
			UpdateInventory();
			return true;
		}
		
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Can't find and remove item from inv."));
	}

	return false;
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") + Item.ItemName + TEXT(" removed."));
}

int32 UInventoryPrototype::SearchInventoryById(int32 idNum)
{
	for (size_t i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i].ItemID == idNum)
		{
			return i;
		}
	}

	return -1;
}


void UInventoryPrototype::PickUp()
{

	bIsPickingUp = true;
}

void UInventoryPrototype::EndPickUp()
{
	bIsPickingUp = false;
}

void UInventoryPrototype::UpdateInventory()
{
	//for (auto& Item : Inventory)
	//{
	//	/*GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString::Printf(TEXT("Item: %s "), Item->ItemName));*/
	//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") +  Item->ItemName);
	//}
	OnUpdateInventory.Broadcast(Inventory);

	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("inventory updated"));
}

