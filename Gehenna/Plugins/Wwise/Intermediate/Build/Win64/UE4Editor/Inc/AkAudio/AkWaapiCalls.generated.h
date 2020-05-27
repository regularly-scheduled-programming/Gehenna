// Copyright Epic Games, Inc. All Rights Reserved.
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


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_SPARSE_DATA
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribeToWaapi); \
	DECLARE_FUNCTION(execCallWaapi); \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback); \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback); \
	DECLARE_FUNCTION(execGetSubscriptionID); \
	DECLARE_FUNCTION(execSetSubscriptionID);


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToText); \
	DECLARE_FUNCTION(execConv_FAkWaapiSubscriptionIdToString); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribeToWaapi); \
	DECLARE_FUNCTION(execCallWaapi); \
	DECLARE_FUNCTION(execRegisterWaapiConnectionLostCallback); \
	DECLARE_FUNCTION(execRegisterWaapiProjectLoadedCallback); \
	DECLARE_FUNCTION(execGetSubscriptionID); \
	DECLARE_FUNCTION(execSetSubscriptionID);


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
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_SPARSE_DATA \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_SPARSE_DATA \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWaapiCalls."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWaapiCalls>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiCalls_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
