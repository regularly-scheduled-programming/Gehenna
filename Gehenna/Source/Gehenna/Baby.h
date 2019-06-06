// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Baby.generated.h"

UENUM(BlueprintType)
enum class EBabyStates : uint8
{
	VE_Angry UMETA(DisplayName = "Angry"),
	VE_Neutral UMETA(DisplayName = "Neutral"),
	VE_Happy UMETA(DisplayName = "Happy"),
};

UENUM(BlueprintType)
enum class EBabyAction : uint8
{
	VE_SilenceIdle UMETA(DisplayName = "Silence/Idle"),
	VE_CoolIdle UMETA(DisplayName = "Cool/Idle"),
	VE_Laugh UMETA(DisplayName = "Laugh"),
	VE_Sleep UMETA(DisplayName = "Sleep"),
	VE_CryTelegraph UMETA(DisplayName = "CryTelegraph"),
	VE_Cry UMETA(DisplayName = "Cry"),
	VE_BarfTelegraph UMETA(DisplayName = "BarfTelegraph"),
	VE_Barf UMETA(DisplayName = "Barf"),
};

UCLASS()
class GEHENNA_API ABaby : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaby();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintNativeEvent)
		int HappinessCap(int fullness, int energy);
	UFUNCTION(BlueprintCallable)
		void StatChanges(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void HoldBaby();
	UFUNCTION(BlueprintCallable)
		void ReleaseBaby();
	UFUNCTION(BlueprintCallable)
		void PerformBabyAction(EBabyAction action);

public:
	UPROPERTY(BlueprintReadOnly, Category = "BabyStats")
		EBabyStates state;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStats")
		int happiness = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStats")
		int fullness = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStats")
		int energy = 100;
	UPROPERTY(BlueprintReadOnly, Category = "BabyStats")
		bool isHeld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int happinessDecreaseRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int fullnessDecreaseRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int energyDecreaseRate = 0;

protected:
	float timer;
};
