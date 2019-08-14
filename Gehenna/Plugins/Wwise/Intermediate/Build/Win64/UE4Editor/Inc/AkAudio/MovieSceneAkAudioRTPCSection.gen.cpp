// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioRTPCSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieSceneAkAudioRTPCSection::StaticRegisterNativesUMovieSceneAkAudioRTPCSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneAkAudioRTPCSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A single floating point section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper = { "FloatChannelSerializationHelper", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AkAudioRTPC" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the RTPC to modify." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, Name), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioRTPCSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams = {
		&UMovieSceneAkAudioRTPCSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioRTPCSection, 4258904273);
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioRTPCSection>()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioRTPCSection(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection, &UMovieSceneAkAudioRTPCSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioRTPCSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAkAudioRTPCSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
