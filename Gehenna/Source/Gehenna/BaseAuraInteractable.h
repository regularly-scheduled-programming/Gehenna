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
	
	//Interactable Behaviours
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBehaviours", meta = (ToolTip = "Can aura be drained from interactable?"))
		bool Drainable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBehaviours", meta = (ToolTip = "Can aura be given to the interactable?"))
		bool Receivable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBehaviours", meta = (ToolTip = "Can be quickly consumed drain aura interaction required"))
		bool Consumable;




	
		 

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
