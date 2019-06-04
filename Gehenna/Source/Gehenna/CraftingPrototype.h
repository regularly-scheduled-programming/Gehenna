// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryPrototype.h"
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
	UFUNCTION(BlueprintCallable, Category = "ShowItems")
		void UpdateCraftingInventory();

	UPROPERTY(BlueprintAssignable, Category = "ShowItems")
		FUpdateCraftingInventoryDelegate OnUpdateCraftingInventory;
};
