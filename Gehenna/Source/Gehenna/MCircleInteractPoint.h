// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MCircleInteractPoint.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEHENNA_API UMCircleInteractPoint : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMCircleInteractPoint();

	UFUNCTION(BlueprintCallable, Category = "Magick")
		void getInteracted();

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magick")
		UStaticMeshComponent* myMesh;*/

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Magick")
		void disableComponents();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
