// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BabyActions.h"
#include "BabyInputActions.h"
#include "Baby.generated.h"

UENUM(BlueprintType)
enum class EBabyStats : uint8
{
	VE_None UMETA(DisplayName = "None"),
	VE_Happiness UMETA(DisplayName = "Happiness"),
	VE_Fullness UMETA(DisplayName = "Fullness"),
	VE_Energy UMETA(DisplayName = "Energy"),
};

UENUM(BlueprintType)
enum class EBabyStates : uint8
{
	VE_Angry UMETA(DisplayName = "Angry"),
	VE_Neutral UMETA(DisplayName = "Neutral"),
	VE_Happy UMETA(DisplayName = "Happy"),
};

UENUM(BlueprintType)
enum class EBabyActedUponStates : uint8
{
	VE_None UMETA(DisplayName = "None"),
	VE_HeldTight UMETA(DisplayName = "Held Tight"),
	VE_Entertained UMETA(DisplayName = "Entertained"),
	VE_Shushed UMETA(DisplayName = "Shushed"),
	VE_Fed UMETA(DisplayName = "Fed"),
	VE_SungLullaby UMETA(DisplayName = "Sung Lullaby"),
	VE_ShownAffection UMETA(DisplayName = "Shown Affection"),
};

UCLASS()
class GEHENNA_API ABaby : public APawn, public IBabyActions, public IBabyInputActions
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
		int HappinessCap();
	UFUNCTION(BlueprintCallable)
		void StatChanges(float DeltaTime);
	//IBabyActions interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool SilenceIdle();
	virtual bool SilenceIdle_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool GrumpyIdle();
	virtual bool GrumpyIdle_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool NoiseIdle();
	virtual bool NoiseIdle_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool CoolIdle();
	virtual bool CoolIdle_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Laugh();
	virtual bool Laugh_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Sleep();
	virtual bool Sleep_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool CryTelegraph();
	virtual bool CryTelegraph_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Cry();
	virtual bool Cry_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool BarfTelegraph();
	virtual bool BarfTelegraph_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool Barf();
	virtual bool Barf_Implementation() override;
	//IBabyInputActions interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool ResetToDefault();
	virtual bool ResetToDefault_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool HeldTight();
	virtual bool HeldTight_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Entertained();
	virtual bool Entertained_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Shushed();
	virtual bool Shushed_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool Fed();
	virtual bool Fed_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool SungLullaby();
	virtual bool SungLullaby_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool ShownAffection();
	virtual bool ShownAffection_Implementation() override;
	void ActionStatChange(EBabyStats stat, int value, bool doOnce);

protected:
	void DebugLine(FString msg, FColor color = FColor::White);

public:
	UPROPERTY(BlueprintReadOnly, Category = "BabyStats")
		EBabyStates state;
	UPROPERTY(BlueprintReadOnly, Category = "BabyStats")
		EBabyActedUponStates actedUponState = EBabyActedUponStates::VE_None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyInitialStats")
		int happiness = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyInitialStats")
		int fullness = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyInitialStats")
		int energy = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int angryNeutralPoint = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int neutralHappyPoint = 70;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int happinessDecreaseRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int fullnessDecreaseRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyStatModifiers")
		int energyDecreaseRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int fatigueThreshold = 40;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int maxFullness = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int affectionChangeAmount = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int entertainChangeAmount = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int sleepChangeAmount = 50;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int barfChangeAmount = -50;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int feedChangeRate = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BabyActionModifiers")
		int shushChangeRate = -5;

protected:
	float timer;
	EBabyStats statChangeType = EBabyStats::VE_None;
	int statChangeValue;
};
