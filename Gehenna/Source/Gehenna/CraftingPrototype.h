// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryPrototype.h"
#include "CraftingItemInfo.h"
#include "CraftingPrototype.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateCraftingInventoryDelegate, const TArray<FMyItemInfo>&, CraftingInventoryItems);

/**
 * 
 */
UCLASS()
class GEHENNA_API UCraftingPrototype : public UInventoryPrototype
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUp")
		bool Craft(int32 a, int32 b);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUp")
		bool Craft3(int32 a, int32 b, int32 c);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUp")
		bool Craft3byID(int32 a, int32 b, int32 c);

	UFUNCTION(BlueprintCallable, Category = "ShowItems")
		void UpdateCraftingInventory();

	UPROPERTY(BlueprintAssignable, Category = "ShowItems")
		FUpdateCraftingInventoryDelegate OnUpdateCraftingInventory;

	//UFUNCTION(BlueprintCallable, Category = "Crafting")
	//	void setCraftingMaterials(TArray<FMyCraftingItemInfo> mats);

	UFUNCTION(BlueprintCallable, Category = "PickUp")
		void AddToCraftingInventory(FMyCraftingItemInfo Item);

	UFUNCTION(BlueprintCallable, Category = "PickUp")
		void RemoveFromCraftingInventory(int32 ItemID);

	UFUNCTION(BlueprintCallable, Category = "PickUp", meta = (ToolTip = "returns -1 if NOT found"))
		int32 SearchCraftingInventoryById(int32 idNum);

	UFUNCTION(BlueprintCallable, Category = "PickUp", meta = (ToolTip = "returns -1 if NOT found"))
		int32 SearchCraftingInventoryByProperty(int32 propertyNum);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMyCraftingItemInfo> CraftingMaterials;
};
