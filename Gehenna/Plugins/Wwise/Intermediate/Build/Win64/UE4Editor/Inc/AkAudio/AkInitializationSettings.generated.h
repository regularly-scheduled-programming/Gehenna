// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkInitializationSettings_generated_h
#error "AkInitializationSettings.generated.h already included, missing '#pragma once' in AkInitializationSettings.h"
#endif
#define AKAUDIO_AkInitializationSettings_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettings>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommonInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettingsWithSampleRate>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettings>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommunicationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettingsWithSystemInitialization>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettings>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedSpatialAudioSettings>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkSpatialAudioSettings>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMainOutputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h


#define FOREACH_ENUM_EAKCHANNELMASK(op) \
	op(EAkChannelMask::FrontLeft) \
	op(EAkChannelMask::FrontRight) \
	op(EAkChannelMask::FrontCenter) \
	op(EAkChannelMask::LowFrequency) \
	op(EAkChannelMask::BackLeft) \
	op(EAkChannelMask::BackRight) \
	op(EAkChannelMask::BackCenter) \
	op(EAkChannelMask::SideLeft) \
	op(EAkChannelMask::SideRight) \
	op(EAkChannelMask::Top) \
	op(EAkChannelMask::HeightFrontLeft) \
	op(EAkChannelMask::HeightFrontCenter) \
	op(EAkChannelMask::HeightFrontRight) \
	op(EAkChannelMask::HeightBackLeft) \
	op(EAkChannelMask::HeightBackCenter) \
	op(EAkChannelMask::HeightBackRight) 

enum class EAkChannelMask : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>();

#define FOREACH_ENUM_EAKCHANNELCONFIGTYPE(op) \
	op(EAkChannelConfigType::Anonymous) \
	op(EAkChannelConfigType::Standard) \
	op(EAkChannelConfigType::Ambisonic) 

enum class EAkChannelConfigType;
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>();

#define FOREACH_ENUM_EAKDIFFRACTIONFLAGS(op) \
	op(EAkDiffractionFlags::UseBuiltInParam) \
	op(EAkDiffractionFlags::UseObstruction) \
	op(EAkDiffractionFlags::CalcEmitterVirtualPosition) 

enum class EAkDiffractionFlags : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkDiffractionFlags>();

#define FOREACH_ENUM_EAKPANNINGRULE(op) \
	op(EAkPanningRule::Speakers) \
	op(EAkPanningRule::Headphones) 

enum class EAkPanningRule;
template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
