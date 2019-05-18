// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "BaseMother.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryPrototype.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEHENNA_API UInventoryPrototype : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryPrototype();
	TArray<FString> Inventory;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "PickUp")
	void PickUp();

	void EndPickUp();

	UFUNCTION(BlueprintCallable, Category = "ShowItems")
	void ShowItems();
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool  bIsPickingUp = false;



};
