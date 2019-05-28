// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Levitatable.generated.h"

UCLASS()
class GEHENNA_API ALevitatable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevitatable();

	UFUNCTION(BlueprintCallable, Category = "Magick", meta = (ToolTip = "DEPRECATED"))
		void getMagicked();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		float levitationAmount;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
	//	float moveCounter = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		float upMoveTime = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		float downMoveTime = 2;

	float upSpeed, downSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		bool isLevitated = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		bool shouldMove = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		bool shouldMoveUp = true;

	UFUNCTION(BlueprintCallable, Category = "Magick")
		void getLevitated();
	UFUNCTION(BlueprintCallable, Category = "Magick")
		void getUnLevitated();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")	
		FVector originalPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		FVector levitatedPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		FVector targetPos;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
