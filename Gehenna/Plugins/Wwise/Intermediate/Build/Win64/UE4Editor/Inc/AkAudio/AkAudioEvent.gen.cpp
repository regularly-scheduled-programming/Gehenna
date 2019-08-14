// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
	{
		return UAkAudioEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[];
#endif
		static void NewProp_IsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "UAkAudioEvent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Minimum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEvent*)Obj)->IsInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioEvent), &Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum attenuation radius for this event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData[] = {
		{ "Category", "Bank" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Bank to which this event should be added." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams = {
		&UAkAudioEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEvent, 1160826515);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEvent>()
	{
		return UAkAudioEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEvent(Z_Construct_UClass_UAkAudioEvent, &UAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
