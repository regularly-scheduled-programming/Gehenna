// Fill out your copyright notice in the Description page of Project Settings.
#include "EnvQueryGeneratorInterface.h"

#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"



UEnvQueryGeneratorInterface::UEnvQueryGeneratorInterface(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	ItemType = UEnvQueryItemType_Actor::StaticClass();

	//SearchedActorClass = AActor::StaticClass();
	GenerateOnlyActorsInRadius.DefaultValue = true;
	SearchRadius.DefaultValue = 500.0f;
	SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


void UEnvQueryGeneratorInterface::GenerateItems(FEnvQueryInstance & QueryInstance) const
{

	if (SearchedInterfaceClass == nullptr)
	{
		return;
	}

	UObject* QueryOwner = QueryInstance.Owner.Get();
	if (QueryOwner == nullptr)
	{
		return;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(QueryOwner, EGetWorldErrorMode::LogAndReturnNull);
	if (World == nullptr)
	{
		return;
	}


	TArray<AActor*> MatchingActors;

	UGameplayStatics::GetAllActorsWithInterface(QueryOwner, SearchedInterfaceClass, MatchingActors);

	//for (TActorIterator<AActor> ItActor = TActorIterator<AActor>(World, SearchedInterfaceClass); ItActor; ++ItActor)
	//{
	//	MatchingActors.Add(*ItActor);
	//}


	QueryInstance.AddItemData<UEnvQueryItemType_Actor>(MatchingActors);

}

void UEnvQueryGeneratorInterface::test(const UObject * WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>& OutActors)
{

	UGameplayStatics::GetAllActorsWithInterface(WorldContextObject, Interface, OutActors);

}
