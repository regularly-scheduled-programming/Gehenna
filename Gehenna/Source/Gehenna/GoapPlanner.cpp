// Fill out your copyright notice in the Description page of Project Settings.


#include "GoapPlanner.h"

// Sets default values for this component's properties
UGoapPlanner::UGoapPlanner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




void UGoapPlanner::FindPlan()
{
	m_open.clear();
	m_closed.clear();
	// TODO: Early out if _current == _desired,
	GoalWorldState;
	CurrentWorldState;

	astarnode start;
	start.ws = CurrentWorldState;
	start.parent_ws = CurrentWorldState;
	start.g = 0;
	start.h = calculateH(CurrentWorldState,GoalWorldState);
	start.f = start.g + start.h;

	m_open.push_back(start);

	for (;;)
	{
		if (m_open.size() == 0) //no nodes left
		{
			return;
		}
		// find the node with the lowest rank
		astarnode curr = openPopLowest();
		bool match = CompareWorldState(curr.ws, GoalWorldState);
		if(match)
		{
		//success
			reconstructPlan(&curr);
			return;
		
		}
		// add current to closed
		m_closed.push_back(curr);
		getPossibleStateTransitions(curr.ws);


		//// iterate over all possible transitions
		//for (auto &pair : m_transitions)
		//{
		//	UAction * action = pair.first;
		//	TMap<WORLD_PROP_KEY, bool> &future = pair.second;

		//	astarnode neighbor;

		//	int cost = curr.g + action->GetCost();
		//	int open_index = nodeInVector(future, &m_open);
		//	int close_index = nodeInVector(future, &m_closed);

		//	// if neighbor is in OPEn and cost less than g(neighbor)
		//	if (open_index >= 0 && cost < m_open[open_index].g)
		//	{
		//		// remove neighbor from OPEN, because new patch is better
		//		m_open.erase(m_open.begin() + open_index);

		//		open_index = -1;
		//	}

		//	// if neighbor in CLOSED and cost less than g(neighbor)
		//	if (close_index >= 0 && cost < m_closed[close_index].g)
		//	{
		//		// remove neighbor from CLOSED
		//		m_closed.erase(m_closed.begin() + close_index);
		//	}

		//	// if neighbor not in OPEN and neighbor not in CLOSED
		//	if (close_index == -1 && open_index == -1)
		//	{
		//		neighbor.ws = future;
		//		neighbor.g = cost;
		//		neighbor.h = calculateH(neighbor.ws, GoalWorldState);
		//		neighbor.f = neighbor.g + neighbor.h;
		//		//neighbor.action_name = action.GetName();
		//		neighbor.parent_ws = curr.ws;

		//		m_open.push_back(neighbor);
		//	}
		//}

	}
}

int UGoapPlanner::calculateH(TMap<WORLD_PROP_KEY, bool> from, TMap<WORLD_PROP_KEY, bool> to)
{
	TMap<WORLD_PROP_KEY, bool> difference = from; 
	TMap<WORLD_PROP_KEY, bool> difference2 = to;
	//both state will have same size 
	difference.Append(to);
	difference2.Append(from);

	TArray< WORLD_PROP_KEY> keys;
	difference.GetKeys(keys);
	int distance = 0;

	for (int i = 0; i < keys.Num(); i++)
	{
		if (difference[keys[i]] != difference2[keys[i]])
		{
			distance++;
		}
	}
	return distance;
}
void UGoapPlanner::reconstructPlan(astarnode * goal_node)
{
	//astarnode *curr = goal_node;
	//auto &plan = ap->_plan;
	//auto &actions = ap->_actions;

	//// clear the plan
	//plan.clear();

	//while (curr && curr->action_name.length())
	//{
	//	// find the action
	//	auto it = actions.find(curr->action_name);

	//	UAssert(it != actions.end(), "Action \"%s\" does not exist.", curr->action_name.c_str());

	//	// add the action handler to the plan
	//	plan.push_back(it->second.GetFunc());

	//	// check to see if parent is in the closed list
	//	int i = nodeInClosed(curr->parent_ws);
	//	curr = (i == -1) ? nullptr : &_closed[i];
	//}

}
// Get the lowest cost node in the open list

UGoapPlanner::astarnode UGoapPlanner::openPopLowest()
{
	int index = -1;
	int lowest_val = std::numeric_limits<int>().max(); //biggest int possible

	for (int i = 0, n = m_open.size(); i < n; ++i)
	{
		if (m_open[i].f < lowest_val)
		{
			lowest_val = m_open[i].f;
			index = i;
		}
	}

	astarnode node = m_open[index];

	m_open.erase(m_open.begin() + index);
	
	return node;


}
//look for all actions possible from current state 
// to do check context precondition
void UGoapPlanner::getPossibleStateTransitions(TMap<WORLD_PROP_KEY, bool> state)
{
	m_transitions.clear();


	for (auto action : actions)
	{
		if (CheckPreConditions(state, action->PreConditions))
		{
			//compute furture world state
			TMap<WORLD_PROP_KEY, bool> to = state;
			to.Append(action->PostConditions);

			// add the action and the future world to the transitions array
			m_transitions.emplace_back(std::make_pair(action, to));

		}
	}
}

bool UGoapPlanner::CheckPreConditions(TMap<WORLD_PROP_KEY,bool> worldState, TMap<WORLD_PROP_KEY,bool> preConditions)
{
	TArray< WORLD_PROP_KEY> keys;
	preConditions.GetKeys(keys);
	

	bool result = true;
	for (int i = 0; i < keys.Num(); i++)
	{
		if (!worldState.Contains(keys[i]))
		{
			result = false;
		}
		else if(worldState[keys[i]] != preConditions[keys[i]])
		{
			result = false;

		}
		
	}

	return result;
}


bool UGoapPlanner::CompareWorldState(TMap<WORLD_PROP_KEY, bool> a, TMap<WORLD_PROP_KEY, bool> b)
{
	if (a.Num() != b.Num()) 
	{
		return false;
	}
	TArray< WORLD_PROP_KEY> keys;
	a.GetKeys(keys);
	bool result = true;
	for (int i = 0; i < keys.Num(); i++)
	{
		if (a[keys[i]] != b[keys[i]]) 
		{
			result = false;
		}
	}

	return result;
}

// Called when the game starts
void UGoapPlanner::BeginPlay()
{
	Super::BeginPlay();
	// ...
//	CompareWorldState(CurrentWorldState, GoalWorldState);
}

int UGoapPlanner::nodeInVector(TMap<WORLD_PROP_KEY, bool> state, std::vector<astarnode>* vector)
{
	for (int i = 0, n = vector->size(); i < n; ++i)
	{
		if (CompareWorldState(state , vector->at(i).ws))
			return i;
	}

	return -1;
}


// Called every frame
void UGoapPlanner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

