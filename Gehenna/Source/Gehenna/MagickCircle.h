// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "InteractPosition.h"
//#include "MagickCircleInteractPoint.h"
#include "MagicCircleInteractPiece.h"
#include "MagickCircle.generated.h"


UCLASS()
class GEHENNA_API AMagickCircle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagickCircle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	enum magickType {chapel, levitation};
	 
	magickType myMagickType = levitation;	// Not used now, but we might have different types of magickCircles
	bool isPlayerHere = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		bool isActive = false; 

	//UInteractPosition intPos;
	//TArray<UMagickCircleInteractPoint*> interPoints;
	//UMagickCircleInteractPoint* intPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
	TArray<UStaticMeshComponent*> myCompMeshes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		TArray<AMagicCircleInteractPiece*> pieces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		TArray<AMagicCircleInteractPiece*> mandotaryOnPieces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		TArray<AMagicCircleInteractPiece*> mandotaryOffPieces;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void updateInteractPieces();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void activate();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void deactivate();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Magick")
		void setMasterOfPieces();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
