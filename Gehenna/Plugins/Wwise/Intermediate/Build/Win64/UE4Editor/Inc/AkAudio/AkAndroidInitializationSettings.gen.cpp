// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkAndroidInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAndroidInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
// End Cross Module References
class UScriptStruct* FAkAndroidAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAndroidAdvancedInitializationSettings"), sizeof(FAkAndroidAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAndroidAdvancedInitializationSettings>()
{
	return FAkAndroidAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAndroidAdvancedInitializationSettings(FAkAndroidAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAndroidAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAndroidAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAndroidAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAndroidAdvancedInitializationSettings")),new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAndroidAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundFrameSizeToHardwareSize_MetaData[];
#endif
		static void NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RoundFrameSizeToHardwareSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
		{ "ToolTip", "Used when hardware-preferred frame size and user-preferred frame size are not compatible. If true (default), the sound engine will initialize to a multiple of the HW setting, close to the user setting. If false, the user setting is used as is, regardless of the HW preference (might incur a performance hit)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->RoundFrameSizeToHardwareSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize = { "RoundFrameSizeToHardwareSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkAndroidAdvancedInitializationSettings",
		sizeof(FAkAndroidAdvancedInitializationSettings),
		alignof(FAkAndroidAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAndroidAdvancedInitializationSettings"), sizeof(FAkAndroidAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Hash() { return 2043783826U; }
	void UAkAndroidInitializationSettings::StaticRegisterNativesUAkAndroidInitializationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister()
	{
		return UAkAndroidInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InitializationSettings/AkAndroidInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAndroidInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams = {
		&UAkAndroidInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAndroidInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAndroidInitializationSettings, 1899674024);
	template<> AKAUDIO_API UClass* StaticClass<UAkAndroidInitializationSettings>()
	{
		return UAkAndroidInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAndroidInitializationSettings(Z_Construct_UClass_UAkAndroidInitializationSettings, &UAkAndroidInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAndroidInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAndroidInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
