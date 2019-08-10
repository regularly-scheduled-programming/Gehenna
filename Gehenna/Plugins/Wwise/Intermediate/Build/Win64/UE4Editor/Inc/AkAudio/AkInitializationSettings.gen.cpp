// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkDiffractionFlags();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
// End Cross Module References
	static UEnum* EAkChannelMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelMask"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>()
	{
		return EAkChannelMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkChannelMask(EAkChannelMask_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkChannelMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkChannelMask_Hash() { return 2900286201U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkChannelMask"), 0, Get_Z_Construct_UEnum_AkAudio_EAkChannelMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
				{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
				{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
				{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
				{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
				{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
				{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
				{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
				{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
				{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
				{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
				{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
				{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
				{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
				{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
				{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitmask", "" },
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkChannelMask",
				"EAkChannelMask",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkChannelConfigType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelConfigType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelConfigType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>()
	{
		return EAkChannelConfigType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkChannelConfigType(EAkChannelConfigType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkChannelConfigType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Hash() { return 3933689877U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkChannelConfigType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkChannelConfigType::Anonymous", (int64)EAkChannelConfigType::Anonymous },
				{ "EAkChannelConfigType::Standard", (int64)EAkChannelConfigType::Standard },
				{ "EAkChannelConfigType::Ambisonic", (int64)EAkChannelConfigType::Ambisonic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkChannelConfigType",
				"EAkChannelConfigType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkDiffractionFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkDiffractionFlags, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkDiffractionFlags"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkDiffractionFlags>()
	{
		return EAkDiffractionFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkDiffractionFlags(EAkDiffractionFlags_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkDiffractionFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkDiffractionFlags_Hash() { return 4020710204U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkDiffractionFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkDiffractionFlags"), 0, Get_Z_Construct_UEnum_AkAudio_EAkDiffractionFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkDiffractionFlags::UseBuiltInParam", (int64)EAkDiffractionFlags::UseBuiltInParam },
				{ "EAkDiffractionFlags::UseObstruction", (int64)EAkDiffractionFlags::UseObstruction },
				{ "EAkDiffractionFlags::CalcEmitterVirtualPosition", (int64)EAkDiffractionFlags::CalcEmitterVirtualPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitmask", "" },
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkDiffractionFlags",
				"EAkDiffractionFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkPanningRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkPanningRule, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkPanningRule"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>()
	{
		return EAkPanningRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkPanningRule(EAkPanningRule_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkPanningRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkPanningRule_Hash() { return 646314046U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkPanningRule"), 0, Get_Z_Construct_UEnum_AkAudio_EAkPanningRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkPanningRule::Speakers", (int64)EAkPanningRule::Speakers },
				{ "EAkPanningRule::Headphones", (int64)EAkPanningRule::Headphones },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkPanningRule",
				"EAkPanningRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettingsWithMultiCoreRendering>()
{
	return FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering")),new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettingsWithMultiCoreRendering;
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Allow to distribute SoundEngine processing tasks across multiple threads. Requires Editor restart." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
		&NewStructOps,
		"AkAdvancedInitializationSettingsWithMultiCoreRendering",
		sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Hash() { return 3272063769U; }
class UScriptStruct* FAkAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettings"), sizeof(FAkAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettings>()
{
	return FAkAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedInitializationSettings(FAkAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAdvancedInitializationSettings")),new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MonitorPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[];
#endif
		static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrepareEventMemoryPoolID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrepareEventMemoryPoolID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[];
#endif
		static void NewProp_UseStreamCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Amount of time to wait for hardware devices to trigger an audio interrupt. If there is no interrupt after that time, the sound engine will revert to silent mode and continue operating until the hardware finally comes back." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of the monitoring queue pool. This parameter is not used in Release build." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorPoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of the monitoring pool. This parameter is not used in Release build." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorPoolSize = { "MonitorPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Number of quanta ahead when continuous containers should instantiate a new voice before which next sounds should start playing. This look-ahead time allows I/O to occur, and is especially useful to reduce the latency of continuous containers with trigger rate or sample-accurate transitions." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Set to true to enable AK::SoundEngine::PrepareGameSync usage." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_PrepareEventMemoryPoolID_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Memory pool where data allocated by AK::SoundEngine::PrepareEvent() and AK::SoundEngine::PrepareGameSyncs() will be done." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_PrepareEventMemoryPoolID = { "PrepareEventMemoryPoolID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, PrepareEventMemoryPoolID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_PrepareEventMemoryPoolID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_PrepareEventMemoryPoolID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Maximum number of bytes that can be \"pinned\" using AK::SoundEngine::PinEventInStreamCache() or AK::IAkStreamMgr::PinFileInCache()." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "If true the device attempts to reuse IO buffers that have already been streamed from disk. This is particularly useful when streaming small looping sounds. The drawback is a small CPU hit when allocating memory, and a slightly larger memory footprint in the StreamManager pool." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Targeted automatic stream buffer length (ms). When a stream reaches that buffering, it stops being scheduled for I/O except if the scheduler is idle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of memory pool for I/O (for automatic streams). It is passed directly to AK::MemoryMgr::CreatePool(), after having been rounded down to a multiple of uGranularity." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_SpatialAudioSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_PrepareEventMemoryPoolID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedInitializationSettings",
		sizeof(FAkAdvancedInitializationSettings),
		alignof(FAkAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedInitializationSettings"), sizeof(FAkAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash() { return 4279304872U; }
class UScriptStruct* FAkCommonInitializationSettingsWithSampleRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettingsWithSampleRate"), sizeof(FAkCommonInitializationSettingsWithSampleRate), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettingsWithSampleRate>()
{
	return FAkCommonInitializationSettingsWithSampleRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(FAkCommonInitializationSettingsWithSampleRate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommonInitializationSettingsWithSampleRate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkCommonInitializationSettingsWithSampleRate")),new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettingsWithSampleRate;
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Sampling Rate. Default is 48000 Hz. Use 24000hz for low quality. Any positive reasonable sample rate is supported; however, be careful setting a custom value. Using an odd or really low sample rate may cause the sound engine to malfunction." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
		&NewStructOps,
		"AkCommonInitializationSettingsWithSampleRate",
		sizeof(FAkCommonInitializationSettingsWithSampleRate),
		alignof(FAkCommonInitializationSettingsWithSampleRate),
		Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommonInitializationSettingsWithSampleRate"), sizeof(FAkCommonInitializationSettingsWithSampleRate), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Hash() { return 2318577290U; }
class UScriptStruct* FAkCommonInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettings"), sizeof(FAkCommonInitializationSettings), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettings>()
{
	return FAkCommonInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommonInitializationSettings(FAkCommonInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommonInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkCommonInitializationSettings")),new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommonInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRefillsInVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_NumberOfRefillsInVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerEngineMemoryCutoffThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerEngineMemoryCutoffThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerEnginePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LowerEnginePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamManagerPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_StreamManagerPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLookAheadRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingLookAheadRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplesPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SamplesPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandQueueSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryCutoffThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemoryCutoffThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfPositioningPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfPositioningPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfMemoryPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfMemoryPools;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkSpatialAudioSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Number of refill buffers in voice buffer. Set to 2 for double-buffered, defaults to 4." },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice = { "NumberOfRefillsInVoice", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, NumberOfRefillsInVoice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEngineMemoryCutoffThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The percentage of occupied memory where the sound engine should enter in Low memory mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEngineMemoryCutoffThreshold = { "LowerEngineMemoryCutoffThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, LowerEngineMemoryCutoffThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEngineMemoryCutoffThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEngineMemoryCutoffThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEnginePoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Lower Engine default memory pool size." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEnginePoolSize = { "LowerEnginePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, LowerEnginePoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEnginePoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEnginePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamManagerPoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of memory pool for small objects of Stream Manager. Small objects are the Stream Manager instance, devices, stream objects, user stream names, pending transfers, buffer records, pending open commands, and so on. Ideally, this pool should never run out of memory, because it may cause undesired I/O transfer cancellation, and even major CPU spikes. I/O memory should be bound by the size of each device's I/O pool instead." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamManagerPoolSize = { "StreamManagerPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamManagerPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamManagerPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamManagerPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Multiplication factor for all streaming look-ahead heuristic values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio = { "StreamingLookAheadRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamingLookAheadRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Platform-independent initialization settings of output devices." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MainOutputSettings), Z_Construct_UScriptStruct_FAkMainOutputSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Number of samples per audio frame (256, 512, 1024, or 2048)." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame = { "SamplesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SamplesPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of the command queue." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize = { "CommandQueueSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, CommandQueueSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryCutoffThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The percentage of occupied memory where the sound engine should enter in Low memory Mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryCutoffThreshold = { "MemoryCutoffThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MemoryCutoffThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryCutoffThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryCutoffThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_DefaultPoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of the default memory pool." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_DefaultPoolSize = { "DefaultPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, DefaultPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_DefaultPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_DefaultPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Maximum number of automation paths for positioning sounds." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths = { "MaximumNumberOfPositioningPaths", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfPositioningPaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Maximum number of memory pools. A memory pool is required for each loaded bank." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools = { "MaximumNumberOfMemoryPools", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfMemoryPools), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEngineMemoryCutoffThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_LowerEnginePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamManagerPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MemoryCutoffThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_DefaultPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommonInitializationSettings",
		sizeof(FAkCommonInitializationSettings),
		alignof(FAkCommonInitializationSettings),
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommonInitializationSettings"), sizeof(FAkCommonInitializationSettings), Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Hash() { return 3705057572U; }
class UScriptStruct* FAkCommunicationSettingsWithSystemInitialization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithSystemInitialization"), sizeof(FAkCommunicationSettingsWithSystemInitialization), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithSystemInitialization>()
{
	return FAkCommunicationSettingsWithSystemInitialization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(FAkCommunicationSettingsWithSystemInitialization::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommunicationSettingsWithSystemInitialization"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkCommunicationSettingsWithSystemInitialization")),new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettingsWithSystemInitialization;
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[];
#endif
		static void NewProp_InitializeSystemComms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Indicates whether the communication system should be initialized. Some consoles have critical requirements for initialization of their communications system. Set to false only if your game already uses sockets before sound engine initialization." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit(void* Obj)
	{
		((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithSystemInitialization",
		sizeof(FAkCommunicationSettingsWithSystemInitialization),
		alignof(FAkCommunicationSettingsWithSystemInitialization),
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommunicationSettingsWithSystemInitialization"), sizeof(FAkCommunicationSettingsWithSystemInitialization), Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Hash() { return 2687700944U; }
class UScriptStruct* FAkCommunicationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettings"), sizeof(FAkCommunicationSettings), Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettings>()
{
	return FAkCommunicationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommunicationSettings(FAkCommunicationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommunicationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkCommunicationSettings")),new UScriptStruct::TCppStructOps<FAkCommunicationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings;
	struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetworkName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_NotificationPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CommandPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_DiscoveryBroadcastPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The name used to identify this game within the authoring application. Leave empty to use FApp::GetProjectName()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The \"notification\" channel port. Set to 0 to request a dynamic/ephemeral port." },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort = { "NotificationPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, NotificationPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The \"command\" channel port. Set to 0 to request a dynamic/ephemeral port." },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The port where the authoring application broadcasts \"Game Discovery\" requests to discover games running on the network. Default value: 24024. (Cannot be set to 0)." },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Size of the communication pool." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommunicationSettings",
		sizeof(FAkCommunicationSettings),
		alignof(FAkCommunicationSettings),
		Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommunicationSettings"), sizeof(FAkCommunicationSettings), Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash() { return 2418077057U; }
class UScriptStruct* FAkAdvancedSpatialAudioSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedSpatialAudioSettings"), sizeof(FAkAdvancedSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedSpatialAudioSettings>()
{
	return FAkAdvancedSpatialAudioSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedSpatialAudioSettings(FAkAdvancedSpatialAudioSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedSpatialAudioSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAdvancedSpatialAudioSettings")),new UScriptStruct::TCppStructOps<FAkAdvancedSpatialAudioSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings;
	struct Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffractionShadowDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffractionShadowDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffractionShadowAttenuationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffractionShadowAttenuationFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Advanced Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Interpolation angle, in degrees, over which the \"Diffraction Shadow Attenuation Factor\" is applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees = { "DiffractionShadowDegrees", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedSpatialAudioSettings, DiffractionShadowDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Advanced Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Multiplier that is applied to the distance attenuation of diffracted sounds (sounds that are in the 'shadow region') to simulate the phenomenon where by diffracted sound waves decay faster than incident sound waves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor = { "DiffractionShadowAttenuationFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedSpatialAudioSettings, DiffractionShadowAttenuationFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedSpatialAudioSettings",
		sizeof(FAkAdvancedSpatialAudioSettings),
		alignof(FAkAdvancedSpatialAudioSettings),
		Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedSpatialAudioSettings"), sizeof(FAkAdvancedSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash() { return 311119870U; }
class UScriptStruct* FAkSpatialAudioSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpatialAudioSettings"), sizeof(FAkSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSpatialAudioSettings>()
{
	return FAkSpatialAudioSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSpatialAudioSettings(FAkSpatialAudioSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSpatialAudioSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkSpatialAudioSettings")),new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings;
	struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffractionFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DiffractionFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SpatialAudioPoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Distance (in game units) that an emitter or listener has to move to trigger a recalculation of reflections/diffraction. Larger values can reduce the CPU load at the cost of reduced accuracy." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkDiffractionFlags" },
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Determines whether diffraction values for sound passing through portals will be calculated, and how to apply those calculations to Wwise parameters." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionFlags = { "DiffractionFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Maximum number of portals that sound can propagate through." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SpatialAudioPoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Desired spatial audio memory pool size." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SpatialAudioPoolSize = { "SpatialAudioPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, SpatialAudioPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SpatialAudioPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SpatialAudioPoolSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_SpatialAudioPoolSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSpatialAudioSettings",
		sizeof(FAkSpatialAudioSettings),
		alignof(FAkSpatialAudioSettings),
		Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSpatialAudioSettings"), sizeof(FAkSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash() { return 2759569387U; }
class UScriptStruct* FAkMainOutputSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMainOutputSettings"), sizeof(FAkMainOutputSettings), Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMainOutputSettings>()
{
	return FAkMainOutputSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMainOutputSettings(FAkMainOutputSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMainOutputSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMainOutputSettings")),new UScriptStruct::TCppStructOps<FAkMainOutputSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings;
	struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ChannelConfigType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PanningRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The number of channels, identified (deduced from channel mask) or anonymous (set directly)." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkChannelMask" },
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "A bit field, whose channel identifiers depend on AkChannelConfigType (up to 20)." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "A code that completes the identification of channels by uChannelMask. Anonymous: Channel mask == 0 and channels; Standard: Channels must be identified with standard defines in AkSpeakerConfigs; Ambisonic: Channel mask == 0 and channels follow standard ambisonic order." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Rule for 3D panning of signals routed to a stereo bus. In \"Speakers\" mode, the angle of the front loudspeakers is used. In \"Headphones\" mode, the speaker angles are superseded with constant power panning between two virtual microphones spaced 180 degrees apart." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "Device specific identifier, when multiple devices of the same type are possible. If only one device is possible, leave to 0." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "ToolTip", "The name of a custom audio device to be used. Custom audio devices are defined in the Audio Device Shareset section of the Wwise project. Leave this empty to output normally through the default audio device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset = { "AudioDeviceShareset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMainOutputSettings",
		sizeof(FAkMainOutputSettings),
		alignof(FAkMainOutputSettings),
		Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMainOutputSettings"), sizeof(FAkMainOutputSettings), Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash() { return 531488140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
