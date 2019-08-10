// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAKWaapiJsonObject;
struct FAkWaapiFieldNames;
#ifdef AKAUDIO_AkWaapiJsonManager_generated_h
#error "AkWaapiJsonManager.generated.h already included, missing '#pragma once' in AkWaapiJsonManager.h"
#endif
#define AKAUDIO_AkWaapiJsonManager_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAKWaapiJsonObject>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToText) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToString) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayObjectFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayStringFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_UBOOL(Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToText) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToString) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayObjectFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayStringFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_UBOOL(Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiJsonManager(); \
	friend struct Z_Construct_UClass_UAkWaapiJsonManager_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiJsonManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiJsonManager)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiJsonManager(); \
	friend struct Z_Construct_UClass_UAkWaapiJsonManager_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiJsonManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiJsonManager)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiJsonManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiJsonManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiJsonManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiJsonManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiJsonManager(UAkWaapiJsonManager&&); \
	NO_API UAkWaapiJsonManager(const UAkWaapiJsonManager&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiJsonManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiJsonManager(UAkWaapiJsonManager&&); \
	NO_API UAkWaapiJsonManager(const UAkWaapiJsonManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiJsonManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiJsonManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiJsonManager)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_29_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWaapiJsonManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWaapiJsonManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
