// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WORLD_PROP_KEYS.h"
#include "RivenBaseClass.h"

#include "Action.generated.h"
/**
 * 
 */
UCLASS(Blueprintable)
class GEHENNA_API UAction : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "condition", meta = (ToolTip = "list of condition"))
		TMap<WORLD_PROP_KEY, bool> PreConditions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "condition", meta = (ToolTip = "list of postcondition"))
		TMap<WORLD_PROP_KEY, bool> PostConditions;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Condition")
		bool ContextPreConditions();
	UPROPERTY(BlueprintReadWrite, Category = "GOAP", meta = (ToolTip = "baseCost"))
	int Cost;

	int GetCost();
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ARivenBaseClass * Agent;
	UFUNCTION( BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void BeginAction();
};
