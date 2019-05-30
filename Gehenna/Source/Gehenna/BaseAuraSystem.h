// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseAuraSystem.generated.h"


UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class GEHENNA_API UBaseAuraSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	//AuraTransactionFunctions
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AuraTransaction")
		void ReceiveAura();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AuraTransaction")
		void SpendAura();


	//Aura
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	float CurrentAura;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	float MaxAuraHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	float MaxOverallAura;




	//AuraState
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraState")
	float CautionZoneAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraState")
	float DangerZoneAmount;

	//AuraTransaction

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraTransactions")
	float AuraAbsortionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraTransactions")
	float AuraAbsortionAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraTransactions")
	float AuraAdded;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AuraTransactions")
	float AuraSubtracted;

	
	
	

	// Sets default values for this component's properties
	UBaseAuraSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
