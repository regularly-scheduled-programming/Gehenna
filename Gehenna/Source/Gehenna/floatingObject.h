// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "floatingObject.generated.h"

UCLASS()
class GEHENNA_API AfloatingObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AfloatingObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WaterLevel")
		float targetWaterLevelValue;

	UPROPERTY(BlueprintReadWrite, Category = "WaterLevel")
		bool shouldMove = false;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void setTargetFloatingLevel(float f);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
