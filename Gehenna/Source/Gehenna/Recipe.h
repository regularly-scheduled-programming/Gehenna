#pragma once
#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Recipe.generated.h"

USTRUCT(BlueprintType)
struct GEHENNA_API FMyRecipe : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 Doll = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 Sap = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 Herb = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 Aura = 0;


};