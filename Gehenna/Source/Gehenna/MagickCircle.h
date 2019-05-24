// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "InteractPosition.h"
//#include "MagickCircleInteractPoint.h"
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

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void activate();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void deactivate();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
