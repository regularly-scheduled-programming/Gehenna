#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CraftingItemInfo.generated.h"

USTRUCT(BlueprintType)
struct GEHENNA_API FMyCraftingItemInfo
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool ATrait;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool BTrait;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool CTrait;
		
};