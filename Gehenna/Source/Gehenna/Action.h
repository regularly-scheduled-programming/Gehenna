// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WORLD_PROP_KEYS.h"
#include "RivenBaseClass.h"
#include "RivenBaseAIController.h"


#include "Action.generated.h"
/**
 * 
 */
UCLASS(Blueprintable)
class GEHENNA_API UAction : public UDataAsset
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "condition", meta = (ToolTip = "list of condition"))
		TMap<WORLD_PROP_KEY, bool> PreConditions;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "condition", meta = (ToolTip = "list of postcondition"))
		TMap<WORLD_PROP_KEY, bool> PostConditions;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Condition")
		bool ContextPreConditions(ARivenBaseAIController * agent);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP", meta = (ToolTip = "baseCost"))
	int Cost;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "condition")
	FString ActionName;
	int GetCost();
	/*UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ARivenBaseClass * Agent;*/

	UFUNCTION( BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void BeginAction(ARivenBaseAIController * Agent,ACharacter * character);
	

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void TickAction(ARivenBaseAIController * Agent, ACharacter* character, float DeltaSeconds);
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void EndAction(ARivenBaseAIController * Agent, ACharacter* character);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void InterruptAction(ARivenBaseAIController * Agent, ACharacter* character);

	//Child Action Functions
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void BeginChildAction(ARivenBaseAIController* Agent, ACharacter* character,UAction*Parent,AActor* MoveToObject);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void EndChildAction(UAction* ActionCompleted);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "GOAP")
	void FailedChildAction(UAction* ActionFailed);


};
