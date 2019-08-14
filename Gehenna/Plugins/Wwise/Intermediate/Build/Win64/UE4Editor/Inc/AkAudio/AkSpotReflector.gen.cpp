// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSpotReflector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void AAkSpotReflector::StaticRegisterNativesAAkSpotReflector()
	{
	}
	UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister()
	{
		return AAkSpotReflector::StaticClass();
	}
	struct Z_Construct_UClass_AAkSpotReflector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkSpotReflector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSpotReflector.h" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpotReflector, Level), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor = { "DistanceScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpotReflector, DistanceScalingFactor), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpotReflector, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpotReflector, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBusName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBus_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkSpotReflector, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AuxBus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkSpotReflector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpotReflector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams = {
		&AAkSpotReflector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkSpotReflector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkSpotReflector, 2531509510);
	template<> AKAUDIO_API UClass* StaticClass<AAkSpotReflector>()
	{
		return AAkSpotReflector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpotReflector(Z_Construct_UClass_AAkSpotReflector, &AAkSpotReflector::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpotReflector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpotReflector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
