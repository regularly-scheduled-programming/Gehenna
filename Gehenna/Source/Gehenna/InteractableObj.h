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
	VE_UpRight UMETA(DisplayName = "UpRight"),
	VE_Right UMETA(DisplayName = "Right"),
	VE_DownRight UMETA(DisplayName = "DownRight"),
	VE_Down UMETA(DisplayName = "Down"),
	VE_DownLeft UMETA(DisplayName = "DownLeft"),
	VE_Left UMETA(DisplayName = "Left"),
	VE_UpLeft UMETA(DisplayName = "UpLeft"),
	VE_Circle_Any UMETA(DisplayName = "Circle"),
};

const int NUM_OF_DIR = 8;

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
	UFUNCTION(BlueprintNativeEvent)
		void OnInteractionComplete();
	UFUNCTION(BlueprintNativeEvent)
		void OnInteractionFailed();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		TArray<EInputDir> SuccessInputArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		float InputInterval = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		bool FailImpossible = false;

protected:
	EInputDir GetStickDirection(float x, float y);

private:
	bool m_interactable = false;
	int m_currentInputIndex = 0;
	float m_inputTimer = 0.0f;
	EInputDir m_PreviousInput = EInputDir::VE_Center;
	EInputDir m_CurrentInput = EInputDir::VE_Center;
	EInputDir m_circleStart;
	int m_circleSequence;
};
