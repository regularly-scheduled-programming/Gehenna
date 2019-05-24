// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

bool UAction::ContextPreConditions_Implementation()
{
	return true;
}

int UAction::GetCost()
{
	return Cost;
}

