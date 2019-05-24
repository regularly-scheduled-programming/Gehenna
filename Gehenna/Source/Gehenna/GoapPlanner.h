// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WORLD_PROP_KEYS.h"
#include "Action.h"
#include <vector>

#include "GoapPlanner.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEHENNA_API UGoapPlanner : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGoapPlanner();
	//typedef TMap<WORLD_PROP_KEY, bool> WorldState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<WORLD_PROP_KEY, bool> CurrentWorldState;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<WORLD_PROP_KEY, bool> GoalWorldState;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TArray<UAction *> plan;

	UPROPERTY(BlueprintReadWrite, Category = "GOAP", meta = (ToolTip = "list of all actions"))
	TArray<UAction *> actions;

	struct astarnode
	{
		int g; // Distance to goal
		int h; // Heuristic
		int f; // Total cost

		TMap<WORLD_PROP_KEY, bool> ws;
		TMap<WORLD_PROP_KEY, bool> parent_ws;
		UAction *  myAction;
		// Used for debugging
	//	std::string action_name;
		
	};
	UFUNCTION(BlueprintCallable, Category = "GOAP")
	void FindPlan();
	int calculateH(TMap<WORLD_PROP_KEY, bool> from, TMap<WORLD_PROP_KEY, bool> to);

	void reconstructPlan(astarnode *goal_node);

	// Get the lowest cost node in the open list

	astarnode openPopLowest();
	void getPossibleStateTransitions(TMap<WORLD_PROP_KEY, bool> state);


	UFUNCTION(BlueprintCallable, Category = "GOAP")
		bool CheckPreConditions(TMap<WORLD_PROP_KEY,bool> worldState, TMap<WORLD_PROP_KEY,bool> preConditions);

	UFUNCTION(BlueprintCallable, Category = "GOAP")
		bool CompareWorldState(TMap<WORLD_PROP_KEY, bool> t_a, TMap<WORLD_PROP_KEY, bool> t_b);
protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	std::vector<astarnode> m_open;
	std::vector<astarnode> m_closed;

	int nodeInVector(TMap<WORLD_PROP_KEY, bool> state, std::vector < astarnode > * vector);
	std::vector<std::pair<UAction *, TMap<WORLD_PROP_KEY, bool>>> m_transitions;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
