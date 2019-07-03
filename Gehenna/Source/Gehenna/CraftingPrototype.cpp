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

float UCraftingPrototype::checkRecipePerc(FMyRecipe recipe, TArray<FMyCraftingItemInfo> items)
{
	int32 totalA = 0;
	int32 totalB = 0;
	int32 totalC = 0;
	int32 totalD = 0;

	for (size_t i = 0; i < items.Num(); i++)
	{
		if (items[i].ATrait)
			totalA++;

		if (items[i].BTrait)
			totalB++;

		if (items[i].CTrait)
			totalC++;

		if (items[i].DTrait)	//ADD THIS LATER FOR ESSENCE.
			totalD++;
	}

	int32 totalRequired = recipe.Doll + recipe.Sap 
		+ recipe.Herb + recipe.Aura;

	int32 totalValid = getValidAmount(totalA, recipe.Doll) + getValidAmount(totalB, recipe.Sap)
		+ getValidAmount(totalC, recipe.Herb) + getValidAmount(totalC, recipe.Aura); // ADD D PROPERTY LATER

	return ((float)totalValid) / ((float)totalRequired);
}

int32 UCraftingPrototype::getValidAmount(int32 amount, int32 required)
{
	if (required <= 0)
	{
		return 0;
	}
	else if (amount >= required)
	{
		return required;
	}


	return amount;
}

void UCraftingPrototype::AddToCraftingInventory(FMyCraftingItemInfo Item)
{
	int temp = SearchCraftingInventoryById(Item.ItemID);

	if (temp != -1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item is not added to crafting materials, it's already there, incresed num."));
	}
	else
	{
		CraftingMaterials.Add(Item);
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("Item added to crafting materials"));
	}

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
	if (SearchCraftingInventoryByProperty(a) != -1)	// if we find an item with -A- property
	{
		if (SearchCraftingInventoryByProperty(b) != -1)	// and if we find an item with -B- property
		{
			int tempA = SearchCraftingInventoryByProperty(a);
			
			if (RemoveFromInventory(Inventory[tempA].ItemID)) {
				CraftingMaterials.RemoveAt(tempA);
			}


			int tempB = SearchCraftingInventoryByProperty(b);
			if (RemoveFromInventory(Inventory[tempB].ItemID))
			{
				CraftingMaterials.RemoveAt(tempB);
			}
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Crafting!!!"));

			return true;
		}
	}
	return false;
}

bool UCraftingPrototype::Craft3_Implementation(int32 a, int32 b, int32 c = 0) {
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("Trying to craft w 3 materials!!!"));
	TArray<FMyItemInfo> tempArray = Inventory;
	TArray<FMyCraftingItemInfo> tempCraftArray = CraftingMaterials;
	bool couldCraft = false;

	if (SearchCraftingInventoryByProperty(a) != -1)	// If we find an item w 'a' property
	{
		int tempA = SearchCraftingInventoryByProperty(a);
		if(RemoveFromInventory(Inventory[tempA].ItemID))	// remove it from the arrays
			CraftingMaterials.RemoveAt(tempA);

		if (SearchCraftingInventoryByProperty(b) != -1)	// If we find an item w 'b' property
		{
			int tempB = SearchCraftingInventoryByProperty(b);
			if(RemoveFromInventory(Inventory[tempB].ItemID))	// remove it from the arrays
				CraftingMaterials.RemoveAt(tempB);

				if (c != 0 && SearchCraftingInventoryByProperty(c) != -1)	// If we find an item w 'c' property
				{
					int tempC = SearchCraftingInventoryByProperty(c);
					if(RemoveFromInventory(Inventory[tempC].ItemID))	// remove it from the arrays
						CraftingMaterials.RemoveAt(tempC);

					couldCraft = true;
				}
				else if (c == 0)
				{
					couldCraft = true;
				}

		}

	}

	if (!couldCraft)	// if not crafted set the arrays to their previous states
	{
		Inventory = tempArray;
		CraftingMaterials = tempCraftArray;
		return false;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Crafted!!!"));
	return true;
}

bool UCraftingPrototype::Craft3byID_Implementation(int32 a, int32 b, int32 c = -1) {
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("Trying to craft w 3 materials by ID!!!"));
	TArray<FMyItemInfo> tempArray = Inventory;
	TArray<FMyCraftingItemInfo> tempCraftArray = CraftingMaterials;
	bool couldCraft = false;

	if (SearchCraftingInventoryById(a) != -1)
	{
		int tempA = SearchCraftingInventoryById(a);
		if (RemoveFromInventory(tempA))
			CraftingMaterials.RemoveAt(tempA);

		if (SearchCraftingInventoryById(b) != -1)
		{
			int tempB = SearchCraftingInventoryById(b);
			if (RemoveFromInventory(tempB))
				CraftingMaterials.RemoveAt(tempB);

			if (c != -1 && SearchCraftingInventoryById(c) != -1)
			{
				int tempC = SearchCraftingInventoryById(c);
				if (RemoveFromInventory(tempC))
					CraftingMaterials.RemoveAt(tempC);

				couldCraft = true;
			}
			else if (c == -1)
			{
				couldCraft = true;
			}
		}

	}

	if (!couldCraft)	// if not crafted set the arrays to their previous states
	{
		Inventory = tempArray;
		CraftingMaterials = tempCraftArray;
		return false;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Crafted!!!"));
	return true;
}



//void UCraftingPrototype::setCraftingMaterials(TArray<FMyCraftingItemInfo> mats)
//{
//	CraftingMaterials = mats;
//}
