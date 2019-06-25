// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagicCircleInteractPiece.generated.h"

UCLASS()
class GEHENNA_API AMagicCircleInteractPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagicCircleInteractPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
	bool isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
	bool isPositive;

	UFUNCTION(BlueprintCallable, Category = "Magick")
		bool checkActive();

	UFUNCTION(BlueprintCallable, Category = "Magick")
		bool checkStatus();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void getActivated();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void getDeactivated();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void setMaster(AMagickCircle* master);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void setConnection(bool connection);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
	AMagickCircle* myMaster;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
