// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MigratedEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MigratedEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_bEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultOcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[];
#endif
		static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseSoundBankFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseSoundBankFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettings.h" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->MigratedEnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering = { "MigratedEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bEnableMultiCoreRendering_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering = { "bEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Default value for Occlusion Collision Channel when creating a new Ak Component." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel = { "DefaultOcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DefaultOcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "Category", "Installation" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAutoConnectToWAAPI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundBankFolder_MetaData[] = {
		{ "Category", "Sound Bank" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Where the Sound Bank will be generated in the Content Folder" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundBankFolder = { "WwiseSoundBankFolder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseSoundBankFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundBankFolder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundBankFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
		{ "FilePathFilter", "wproj" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Wwise Project Path" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath = { "WwiseProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
		{ "Category", "Ak Reverb Volume" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "The number of AkReverbVolumes that will be simultaneously applied to a sound source" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes = { "MaxSimultaneousReverbVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundBankFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSettings_Statics::ClassParams = {
		&UAkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 4002669281);
	template<> AKAUDIO_API UClass* StaticClass<UAkSettings>()
	{
		return UAkSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
