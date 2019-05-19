// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WORLD_PROP_KEYS.h"

#include "Goal.generated.h"
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class GEHENNA_API UGoal : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MyFloat;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<WORLD_PROP_KEY, bool> GoalWorldState;
	
};
