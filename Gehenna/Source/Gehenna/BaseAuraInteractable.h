// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseAuraInteractable.generated.h"


UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class GEHENNA_API UBaseAuraInteractable : public UActorComponent
{
	GENERATED_BODY()

public:	
	//Aura Transaction Functions
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AuraTransaction")
		void SubtractAura(float AuraTaken);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AuraTransaction")
		void AddAura(float AuraGiven);


	//Aura
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		float MaxAura;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		float AuraLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		bool CustomStartValue;

	
		 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		FTimerHandle AuraTransactionTimer;




	// Sets default values for this component's properties
	UBaseAuraInteractable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
