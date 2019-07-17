// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig.h"
#include "PiersBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GEHENNA_API UPiersBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable)
	static void SetHalfAngle(UAIPerceptionComponent * Target,  float angle);

};
