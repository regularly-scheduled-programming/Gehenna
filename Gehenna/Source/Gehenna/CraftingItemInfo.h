#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CraftingItemInfo.generated.h"

USTRUCT(BlueprintType)
struct GEHENNA_API FMyCraftingItemInfo
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp")
			int32 ItemID = 0;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool ATrait = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool BTrait = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftingPickUp")
			bool CTrait = false;
		
};