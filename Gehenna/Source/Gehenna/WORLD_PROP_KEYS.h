// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class WORLD_PROP_KEY : uint8
{
	Threat_Alive,
	Threat_Targeting_Me,
	Food_Available,
	Is_Hungry,
	New_Audio_Stimuli,
	New_Visual_Stimuli
};
UENUM(BlueprintType)
enum class WorkingMemoryFactType : uint8
{
	Edible,
	Threat,
	Interactable,
	Riven

	


};