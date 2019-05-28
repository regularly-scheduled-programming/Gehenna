#pragma once
#include "CoreMinimal.h"
#include "WORLD_PROP_KEYS.h"
#include "WorkingMemoryFact.generated.h"

USTRUCT(BlueprintType)
struct GEHENNA_API FWorkingMemoryFact
{
	GENERATED_BODY()

		//Always make USTRUCT variables into UPROPERTY()
		//    any non-UPROPERTY() struct vars are not replicated
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "facts")

		WorkingMemoryFactType Type;
		
		// So to simplify your life for later debugging, always use UPROPERTY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "facts")
		float Confidence;
		
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "facts")
		FVector position;
		
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "facts")
		AActor  * myTarget;
}; 