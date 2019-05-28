// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spell.generated.h"


UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class GEHENNA_API USpell : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpell();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Magick")
		void castSpell();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
