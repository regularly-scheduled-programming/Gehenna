// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MagickBase.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
//UCLASS(Blueprintable)
class GEHENNA_API UMagickBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMagickBase();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void turnRadialOn();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Magick")
		void turnRadialOff();
	UFUNCTION(BlueprintCallable, Category = "Magick")
		void setIsMagickUiOn(bool set);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int radialSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isMagickUiOn;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
