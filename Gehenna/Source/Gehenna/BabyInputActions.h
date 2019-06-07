// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BabyInputActions.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBabyInputActions : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class GEHENNA_API IBabyInputActions
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool HeldTight();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Entertained();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Shushed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Fed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Calmed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool SungLullaby();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool ShownAffection();
};
