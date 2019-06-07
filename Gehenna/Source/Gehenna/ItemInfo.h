
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemInfo.generated.h"

USTRUCT(BlueprintType)
struct GEHENNA_API FMyItemInfo
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp")
		FString ItemName = FString(TEXT(""));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp")
		int32 ItemID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp")
		UTexture2D* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp")
		int32 Quantity = 1;
};