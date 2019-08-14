// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkXBoxOneInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXBoxOneInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXBoxOneInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXBoxOneInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
// End Cross Module References
class UScriptStruct* FAkXBoxOneApuHeapInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXBoxOneApuHeapInitializationSettings"), sizeof(FAkXBoxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXBoxOneApuHeapInitializationSettings>()
{
	return FAkXBoxOneApuHeapInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings(FAkXBoxOneApuHeapInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXBoxOneApuHeapInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneApuHeapInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneApuHeapInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkXBoxOneApuHeapInitializationSettings")),new UScriptStruct::TCppStructOps<FAkXBoxOneApuHeapInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneApuHeapInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXBoxOneApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ToolTip", "APU heap non-cached size sent to the \"ApuCreateHeap()\" function." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXBoxOneApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ToolTip", "APU heap cached size sent to the \"ApuCreateHeap()\" function." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXBoxOneApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXBoxOneApuHeapInitializationSettings",
		sizeof(FAkXBoxOneApuHeapInitializationSettings),
		alignof(FAkXBoxOneApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXBoxOneApuHeapInitializationSettings"), sizeof(FAkXBoxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings_Hash() { return 246610796U; }
class UScriptStruct* FAkXBoxOneAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXBoxOneAdvancedInitializationSettings"), sizeof(FAkXBoxOneAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXBoxOneAdvancedInitializationSettings>()
{
	return FAkXBoxOneAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings(FAkXBoxOneAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXBoxOneAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkXBoxOneAdvancedInitializationSettings")),new UScriptStruct::TCppStructOps<FAkXBoxOneAdvancedInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXBoxOneAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfXMAVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_MaximumNumberOfXMAVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeDefaultPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ShapeDefaultPoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXBoxOneAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ToolTip", "Use low latency mode for hardware XMA decoding (default is false). If true, decoding jobs are submitted at the beginning of the Wwise update and it will be necessary to wait for the result." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkXBoxOneAdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkXBoxOneAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ToolTip", "Maximum number of hardware-accelerated XMA voices used at run-time. Default is 128 voices." },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices = { "MaximumNumberOfXMAVoices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXBoxOneAdvancedInitializationSettings, MaximumNumberOfXMAVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_ShapeDefaultPoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ToolTip", "SHAPE pool size. When 0 (default), the sound engine estimates the required pool size according to the maximum number of XMA voices, assuming that sounds are stereo. Note that multichannel sounds take more memory than what this heuristic predicts, especially when they are streamed." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_ShapeDefaultPoolSize = { "ShapeDefaultPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXBoxOneAdvancedInitializationSettings, ShapeDefaultPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_ShapeDefaultPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_ShapeDefaultPoolSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::NewProp_ShapeDefaultPoolSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkXBoxOneAdvancedInitializationSettings",
		sizeof(FAkXBoxOneAdvancedInitializationSettings),
		alignof(FAkXBoxOneAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXBoxOneAdvancedInitializationSettings"), sizeof(FAkXBoxOneAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings_Hash() { return 984677270U; }
	void UAkXBoxOneInitializationSettings::StaticRegisterNativesUAkXBoxOneInitializationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkXBoxOneInitializationSettings_NoRegister()
	{
		return UAkXBoxOneInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApuHeapSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApuHeapSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InitializationSettings/AkXBoxOneInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXBoxOneInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkXBoxOneAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXBoxOneInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "DisplayName", "APU Heap Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_ApuHeapSettings = { "ApuHeapSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXBoxOneInitializationSettings, ApuHeapSettings), Z_Construct_UScriptStruct_FAkXBoxOneApuHeapInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkXBoxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXBoxOneInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_AdvancedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_ApuHeapSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::NewProp_CommonSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXBoxOneInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::ClassParams = {
		&UAkXBoxOneInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXBoxOneInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkXBoxOneInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkXBoxOneInitializationSettings, 1025344650);
	template<> AKAUDIO_API UClass* StaticClass<UAkXBoxOneInitializationSettings>()
	{
		return UAkXBoxOneInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkXBoxOneInitializationSettings(Z_Construct_UClass_UAkXBoxOneInitializationSettings, &UAkXBoxOneInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkXBoxOneInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXBoxOneInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
