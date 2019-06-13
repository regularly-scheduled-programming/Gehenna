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
		int32 requiredAprop = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 requiredBprop = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 requiredCprop = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crafting")
		int32 requiredDprop = 0;


};