// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BabyActions.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBabyActions : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class GEHENNA_API IBabyActions
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool SilenceIdle();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool CoolIdle();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Laugh();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Sleep();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool CryTelegraph();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Cry();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool BarfTelegraph();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Barf();

};
