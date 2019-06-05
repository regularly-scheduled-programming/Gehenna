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

void UCraftingPrototype::AddToCraftingInventory(FMyCraftingItemInfo Item)
{
	CraftingMaterials.Add(Item);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item added to crafting materials"));
}

void UCraftingPrototype::RemoveFromCraftingInventory(int32 ItemID)
{
	int i = SearchCraftingInventoryById(ItemID);

	if (i != -1)	// IF FOUND
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item:  ") + Inventory[i].ItemName + TEXT(" removed. from crafting inv"));
		CraftingMaterials.RemoveAt(i);
		UpdateInventory();	// maybe we don't need it?
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Can't find and remove item from craft inv."));
	}

}

int32 UCraftingPrototype::SearchCraftingInventoryById(int32 idNum)
{
	for (size_t i = 0; i < CraftingMaterials.Num(); i++)
	{
		if (CraftingMaterials[i].ItemID == idNum)
		{
			return i;
		}
	}

	return -1;
}

int32 UCraftingPrototype::SearchCraftingInventoryByProperty(int32 propertyNum)
{	// WONT WORK WITH MULTIPLE PROPERTIES AT THE SAME ITEM FOR NOW
	switch (propertyNum)
	{
	case 1:
		for (size_t i = 0; i < CraftingMaterials.Num(); i++)
		{
			if (CraftingMaterials[i].ATrait) {
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Found at:  ") + FString::FromInt(i));
				return i;
			}
		}
		break;
	case 2:
		for (size_t i = 0; i < CraftingMaterials.Num(); i++)
		{
			if (CraftingMaterials[i].BTrait) {
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Found at:  ") + FString::FromInt(i));
				return i;
			}
		}
		break;
	case 3:
		for (size_t i = 0; i < CraftingMaterials.Num(); i++)
		{
			if (CraftingMaterials[i].CTrait) {
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Found at:  ") + FString::FromInt(i));
				return i;
			}
		}
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("SOMETHING IS WRONG WITH SEARCH BY PROPERTY FUNCTION!!!"));
		break;
	}

	return -1;
}

bool UCraftingPrototype::Craft_Implementation(int32 a, int32 b)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("Trying to craft!!!"));
	//if (SearchCraftingInventoryById(a) != -1)
	if (SearchCraftingInventoryByProperty(a) != -1)
	{
		if (SearchCraftingInventoryByProperty(b) != -1)
		{
			int tempA = SearchCraftingInventoryByProperty(a);
			CraftingMaterials.RemoveAt(tempA);
			Inventory.RemoveAt(tempA);

			int tempB = SearchCraftingInventoryByProperty(b);
			CraftingMaterials.RemoveAt(tempB);
			Inventory.RemoveAt(tempB);
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Crafting!!!"));

			return true;
		}
	}
	return false;
}

//void UCraftingPrototype::setCraftingMaterials(TArray<FMyCraftingItemInfo> mats)
//{
//	CraftingMaterials = mats;
//}
