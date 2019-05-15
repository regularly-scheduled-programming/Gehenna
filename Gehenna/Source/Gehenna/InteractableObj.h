// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObj.generated.h"

UENUM(BlueprintType)
enum class EInputDir : uint8
{
	VE_Center UMETA(DisplayName = "Center"),
	VE_Up UMETA(DisplayName = "Up"),
	VE_Down UMETA(DisplayName = "Down"),
	VE_Left UMETA(DisplayName = "Left"),
	VE_Right UMETA(DisplayName = "Right"),
};

UCLASS()
class GEHENNA_API AInteractableObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableObj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		void ReceiveInput(EInputDir input);
	UFUNCTION(BlueprintCallable)
		virtual void StartInteraction();
	virtual bool StopInteraction(bool success);
	virtual void OnInteractionComplete();
	virtual void OnInteractionFailed();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		TArray<EInputDir> SuccessInputArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		float InputInterval = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		bool FailImpossible = false;

private:
	bool m_interactable = false;
	int m_currentInputIndex = 0;
	float m_inputTimer = 0.0f;
};
