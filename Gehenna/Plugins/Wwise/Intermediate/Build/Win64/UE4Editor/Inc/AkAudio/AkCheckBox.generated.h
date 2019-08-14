// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class ECheckBoxState : uint8;
#ifdef AKAUDIO_AkCheckBox_generated_h
#error "AkCheckBox.generated.h already included, missing '#pragma once' in AkCheckBox.h"
#endif
#define AKAUDIO_AkCheckBox_generated_h

#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_29_DELEGATE \
struct _Script_AkAudio_eventOnBoolPropertyDropDetected_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FOnBoolPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnBoolPropertyDropDetected, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventOnBoolPropertyDropDetected_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	OnBoolPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_26_DELEGATE \
struct _Script_AkAudio_eventOnWwiseItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnWwiseItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnWwiseItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnWwiseItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnWwiseItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_23_DELEGATE \
struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FAkOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AkOnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	AkOnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAkProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkBoolProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAkBoolProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=P_THIS->GetAkItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAkItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsChecked(Z_Param_InIsChecked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChecked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPressed(); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAkProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkBoolProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAkBoolProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=P_THIS->GetAkItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAkItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsChecked(Z_Param_InIsChecked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChecked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPressed(); \
		P_NATIVE_END; \
	}


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public:


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCheckBox)


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_PRIVATE_PROPERTY_OFFSET
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_39_PROLOG
#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_RPC_WRAPPERS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_INCLASS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_PRIVATE_PROPERTY_OFFSET \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_INCLASS_NO_PURE_DECLS \
	Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkCheckBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gehenna_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkCheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
