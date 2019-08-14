// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSettings_generated_h
#error "AkSettings.generated.h already included, missing '#pragma once' in AkSettings.h"
#endif
#define AKAUDIO_AkSettings_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_RPC_WRAPPERS
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettings(); \
	friend struct Z_Construct_UClass_UAkSettings_Statics; \
public: \
	DECLARE_CLASS(UAkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAkSettings(); \
	friend struct Z_Construct_UClass_UAkSettings_Statics; \
public: \
	DECLARE_CLASS(UAkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSettings(UAkSettings&&); \
	NO_API UAkSettings(const UAkSettings&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSettings(UAkSettings&&); \
	NO_API UAkSettings(const UAkSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettings)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_11_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
