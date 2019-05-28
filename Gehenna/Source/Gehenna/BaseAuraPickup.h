// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseAuraPickup.generated.h"

UCLASS(Blueprintable, BlueprintType)
class GEHENNA_API ABaseAuraPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	//Aura
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		float MaxAura;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		float AuraLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	    bool CustomStartValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
		FTimerHandle AuraDrainTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	FTimerHandle AuraReceiveTimer;
	//WILL NEED A VARIABLE FOR THE PLAYER WHEN ALL IS MERGED 



	// Sets default values for this actor's properties
	ABaseAuraPickup();

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
