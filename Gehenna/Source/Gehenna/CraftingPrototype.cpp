// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingPrototype.h"
#include "Engine.h"

void UCraftingPrototype::UpdateCraftingInventory()
{
	//for (auto& Item : Inventory)
	//{
	//	/*GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString::Printf(TEXT("Item: %s "), Item->ItemName));*/
	//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") +  Item->ItemName);
	//}
	OnUpdateCraftingInventory.Broadcast(Inventory);

	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("crafting inventory updated"));
}