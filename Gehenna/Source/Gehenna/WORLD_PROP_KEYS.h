// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class WORLD_PROP_KEY : uint8
{
	Target_Alive,
	Target_Visible,
	Target_Targeting_Me,
	Combat_Mode,
	Investigate_Mode,
	Idle_Mode,
	Food_Available,
	Is_Hungry,
	Is_At_Feeding_Altar,
	Is_Looking_At_Target,
	Is_In_Close_Range,
	Is_In_Melee_Range,
	New_Audio_Stimuli,
	New_Visual_Stimuli, 
	HealthCritical,
	HasWeapon,
	HasBaby,
	AttackIncoming,
	IsAtLocation,
	IsBehindPlayer,
	IsLookingAtTarget

};


UENUM(BlueprintType)
enum class WorkingMemoryFactType : uint8
{
	Edible,
	Threat,
	Interactable,
	Riven

	


};