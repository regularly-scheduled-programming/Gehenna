// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterLevelObj.generated.h"

UCLASS()
class GEHENNA_API AWaterLevelObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaterLevelObj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water")
		TArray<float> waterLevels;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Water")
		void updateFloatingObjs();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
