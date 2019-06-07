// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BabyActions.h"
#include "BabyInputActions.h"
#include "Baby.generated.h"

UENUM(BlueprintType)
enum class EBabyStates : uint8
{
	VE_Angry UMETA(DisplayName = "Angry"),
	VE_Neutral UMETA(DisplayName = "Neutral"),
	VE_Happy UMETA(DisplayName = "Happy"),
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
	UFUNCTION(BlueprintCallable)
		void HoldBaby();
	UFUNCTION(BlueprintCallable)
		void ReleaseBaby();
	//IBabyActions interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyActions")
		bool SilenceIdle();
	virtual bool SilenceIdle_Implementation() override;
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
		bool Calmed();
	virtual bool Calmed_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool SungLullaby();
	virtual bool SungLullaby_Implementation() override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BabyInputActions")
		bool ShownAffection();
	virtual bool ShownAffection_Implementation() override;

protected:
	void DebugLine(FString msg, FColor color = FColor::White);

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
