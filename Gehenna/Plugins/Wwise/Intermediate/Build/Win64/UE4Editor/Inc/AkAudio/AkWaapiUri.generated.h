// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiUri;
#ifdef AKAUDIO_AkWaapiUri_generated_h
#error "AkWaapiUri.generated.h already included, missing '#pragma once' in AkWaapiUri.h"
#endif
#define AKAUDIO_AkWaapiUri_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkWaapiUri_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkWaapiUri>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiUriConv(); \
	friend struct Z_Construct_UClass_UAkWaapiUriConv_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiUriConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiUriConv)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiUriConv(); \
	friend struct Z_Construct_UClass_UAkWaapiUriConv_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiUriConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiUriConv)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiUriConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiUriConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiUriConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiUriConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiUriConv(UAkWaapiUriConv&&); \
	NO_API UAkWaapiUriConv(const UAkWaapiUriConv&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiUriConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiUriConv(UAkWaapiUriConv&&); \
	NO_API UAkWaapiUriConv(const UAkWaapiUriConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiUriConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiUriConv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiUriConv)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_39_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWaapiUriConv."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWaapiUriConv>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
