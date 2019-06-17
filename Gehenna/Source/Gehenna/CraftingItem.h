// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemPrototype.h"
#include "CraftingItemInfo.h"
#include "CraftingItem.generated.h"


/**
 * 
 */
UCLASS()
class GEHENNA_API ACraftingItem : public AItemPrototype
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FMyCraftingItemInfo myCraftingInfo;
};
