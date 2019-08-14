// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAmbientSound_generated_h
#error "AkAmbientSound.generated.h already included, missing '#pragma once' in AkAmbientSound.h"
#endif
#define AKAUDIO_AkAmbientSound_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAmbSoundCheckpointRecord>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAmbientSound(); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAmbientSound(); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend struct Z_Construct_UClass_AAkAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend struct Z_Construct_UClass_AAkAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_34_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAmbientSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAmbientSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
