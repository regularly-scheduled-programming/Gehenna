// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "AiSense_LongRangeSight.h"
#include "AiSenseConfig_LongRangeSight.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "AI LongRangeSight Config"))
class GEHENNA_API UAiSenseConfig_LongRangeSight : public UAISenseConfig
{
	GENERATED_BODY()
public:

	/*The class reference which contains the logic for this sense config */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", NoClear, config)
		TSubclassOf<UAiSense_LongRangeSight> Implementation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0, UIMax = 90.0, ClampMax = 90.0))
		float VisionOpenAngle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0, UIMax = 90.0, ClampMax = 90.0))
		float VisionCloseAngle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0))
		float VisionDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0, UIMax = 1.0, ClampMax = 1.0))
		float VisionMaxWidthDistPercentage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config, meta = (UIMin = 0.0, ClampMin = 0.0))
		float VisionHeight;

	/* True if you want to display the debug sphere around the pawn */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sense", config)
		bool bDisplayDebugShape;

	UAiSenseConfig_LongRangeSight(const FObjectInitializer& ObjectInitializer);

	/* The editor will call this when we're about to assign an implementation for this config */
	virtual TSubclassOf<UAISense> GetSenseImplementation() const override;

};
