// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvQueryGeneratorInterface.generated.h"

/**
 * 
 */
UCLASS()
class GEHENNA_API UEnvQueryGeneratorInterface : public UEnvQueryGenerator
{
	GENERATED_BODY()
		
public:
	/* The distance between each point of the same Angle */
	UEnvQueryGeneratorInterface(const FObjectInitializer & ObjectInitializer);

	UPROPERTY(EditAnywhere, Category = Generator)
	TSubclassOf < UInterface > SearchedInterfaceClass;

	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius;


	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue SearchRadius;

	UPROPERTY(EditAnywhere, Category = Generator)
	TSubclassOf<UEnvQueryContext> SearchCenter;
	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const override;

	//TSubclassOf<UINTERFACE> test;
	void test(const UObject * WorldContextObject,
		TSubclassOf < UInterface > Interface,
		TArray < AActor * > & OutActors);
};
