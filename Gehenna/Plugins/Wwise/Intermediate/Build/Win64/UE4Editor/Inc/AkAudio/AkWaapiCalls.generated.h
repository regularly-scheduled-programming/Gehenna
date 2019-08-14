// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiSubscriptionId;
struct FAKWaapiJsonObject;
struct FAkWaapiUri;
#ifdef AKAUDIO_AkWaapiCalls_generated_h
#error "AkWaapiCalls.generated.h already included, missing '#pragma once' in AkWaapiCalls.h"
#endif
#define AKAUDIO_AkWaapiCalls_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkWaapiSubscriptionId>();

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_33_DELEGATE \
static inline void FOnWaapiConnectionLost_DelegateWrapper(const FScriptDelegate& OnWaapiConnectionLost) \
{ \
	OnWaapiConnectionLost.ProcessDelegate<UObject>(NULL); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_32_DELEGATE \
static inline void FOnWaapiProjectLoaded_DelegateWrapper(const FScriptDelegate& OnWaapiProjectLoaded) \
{ \
	OnWaapiProjectLoaded.ProcessDelegate<UObject>(NULL); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_31_DELEGATE \
struct _Script_AkAudio_eventOnEventCallback_Parms \
{ \
	FAkWaapiSubscriptionId SubscriptionId; \
	FAKWaapiJsonObject WaapiJsonObject; \
}; \
static inline void FOnEventCallback_DelegateWrapper(const FScriptDelegate& OnEventCallback, FAkWaapiSubscriptionId SubscriptionId, FAKWaapiJsonObject WaapiJsonObject) \
{ \
	_Script_AkAudio_eventOnEventCallback_Parms Parms; \
	Parms.SubscriptionId=SubscriptionId; \
	Parms.WaapiJsonObject=WaapiJsonObject; \
	OnEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_UnsubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::Unsubscribe(Z_Param_Out_SubscriptionId,Z_Param_Out_UnsubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CallBack); \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_SubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::SubscribeToWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiOptions,FOnEventCallback(Z_Param_Out_CallBack),Z_Param_Out_SubscriptionId,Z_Param_Out_SubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiArgs); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::CallWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiArgs,Z_Param_Out_WaapiOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FOnWaapiConnectionLost(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FOnWaapiProjectLoaded(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiCalls::GetSubscriptionID(Z_Param_Out_Subscription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkWaapiCalls::SetSubscriptionID(Z_Param_Out_Subscription,Z_Param_id); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(Z_Param_Out_INAkWaapiSubscriptionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_UnsubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::Unsubscribe(Z_Param_Out_SubscriptionId,Z_Param_Out_UnsubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CallBack); \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId); \
		P_GET_UBOOL_REF(Z_Param_Out_SubscriptionDone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::SubscribeToWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiOptions,FOnEventCallback(Z_Param_Out_CallBack),Z_Param_Out_SubscriptionId,Z_Param_Out_SubscriptionDone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallWaapi) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiArgs); \
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::CallWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiArgs,Z_Param_Out_WaapiOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FOnWaapiConnectionLost(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FOnWaapiProjectLoaded(Z_Param_Out_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiCalls::GetSubscriptionID(Z_Param_Out_Subscription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubscriptionID) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkWaapiCalls::SetSubscriptionID(Z_Param_Out_Subscription,Z_Param_id); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend struct Z_Construct_UClass_UAkWaapiCalls_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls) \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiCalls(); \
	friend struct Z_Construct_UClass_UAkWaapiCalls_Statics; \
public: \
	DECLARE_CLASS(UAkWaapiCalls, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiCalls) \
	DECLARE_WITHIN(UWorld) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiCalls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiCalls) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiCalls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiCalls(UAkWaapiCalls&&); \
	NO_API UAkWaapiCalls(const UAkWaapiCalls&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiCalls); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiCalls); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiCalls)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_35_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWaapiCalls."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWaapiCalls>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
