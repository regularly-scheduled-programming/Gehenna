// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkSlider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSlider() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetLocked();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetValue();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnPropertyDropDetected_Parms
		{
			FString PropertyDropped;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyDropped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped = { "PropertyDropped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnPropertyDropDetected_Parms, PropertyDropped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnPropertyDropDetected__DelegateSignature", sizeof(_Script_AkAudio_eventOnPropertyDropDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemDropDetected_Parms
		{
			FGuid ItemDroppedID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDroppedID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID = { "ItemDroppedID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDropDetected_Parms, ItemDroppedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "A delegate type invoked when an item is being dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemDropDetected__DelegateSignature", sizeof(_Script_AkAudio_eventOnItemDropDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "A delegate type invoked when the value of the slider changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "AkOnFloatValueChangedEvent__DelegateSignature", sizeof(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseItemToControl>()
{
	return FAkWwiseItemToControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseItemToControl(FAkWwiseItemToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseItemToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseItemToControl")),new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl;
	struct Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemPicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Structure for Wwise items that are displayed in the UMG.\n//: public UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData[] = {
		{ "Category", "ItemPath" },
		{ "DisplayName", "Path" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData[] = {
		{ "Category", "ItemPicked" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The item to control" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked = { "ItemPicked", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPicked), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWwiseItemToControl",
		sizeof(FAkWwiseItemToControl),
		alignof(FAkWwiseItemToControl),
		Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash() { return 2418507887U; }
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseObjectDetails>()
{
	return FAkWwiseObjectDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseObjectDetails(FAkWwiseObjectDetails::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseObjectDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseObjectDetails")),new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails;
	struct Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Structure for Wwise item details." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "ItemId" },
		{ "DisplayName", "Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The id of the item to control" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData[] = {
		{ "Category", "ItemPath" },
		{ "DisplayName", "Path" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The id of the item to control" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemName" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The name of the item to control" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWwiseObjectDetails",
		sizeof(FAkWwiseObjectDetails),
		alignof(FAkWwiseObjectDetails),
		Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Hash() { return 3299422872U; }
	void UAkSlider::StaticRegisterNativesUAkSlider()
	{
		UClass* Class = UAkSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkSliderItemId", &UAkSlider::execGetAkSliderItemId },
			{ "GetAkSliderItemProperty", &UAkSlider::execGetAkSliderItemProperty },
			{ "GetValue", &UAkSlider::execGetValue },
			{ "SetAkSliderItemId", &UAkSlider::execSetAkSliderItemId },
			{ "SetAkSliderItemProperty", &UAkSlider::execSetAkSliderItemProperty },
			{ "SetIndentHandle", &UAkSlider::execSetIndentHandle },
			{ "SetLocked", &UAkSlider::execSetLocked },
			{ "SetSliderBarColor", &UAkSlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", &UAkSlider::execSetSliderHandleColor },
			{ "SetStepSize", &UAkSlider::execSetStepSize },
			{ "SetValue", &UAkSlider::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics
	{
		struct AkSlider_eventGetAkSliderItemId_Parms
		{
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "Keywords", "Get Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Returns the current item id.\n\n@return an id as GUID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemId", sizeof(AkSlider_eventGetAkSliderItemId_Parms), Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics
	{
		struct AkSlider_eventGetAkSliderItemProperty_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemProperty_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "Keywords", "Get Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Returns the current item property.\n\n@return a property as string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemProperty", sizeof(AkSlider_eventGetAkSliderItemProperty_Parms), Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_GetValue_Statics
	{
		struct AkSlider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetValue", sizeof(AkSlider_eventGetValue_Parms), Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics
	{
		struct AkSlider_eventSetAkSliderItemId_Parms
		{
			FGuid ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "Keywords", "Set Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Set the item id to the new one.\n@param ItemId - value (new id) to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemId", sizeof(AkSlider_eventSetAkSliderItemId_Parms), Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics
	{
		struct AkSlider_eventSetAkSliderItemProperty_Parms
		{
			FString ItemProperty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemProperty_Parms, ItemProperty), METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "Keywords", "Set Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Set the item property to the new one.\n@param ItemId - value (new id) to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemProperty", sizeof(AkSlider_eventSetAkSliderItemProperty_Parms), Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics
	{
		struct AkSlider_eventSetIndentHandle_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((AkSlider_eventSetIndentHandle_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkSlider_eventSetIndentHandle_Parms), &Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets if the slidable area should be indented to fit the handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetIndentHandle", sizeof(AkSlider_eventSetIndentHandle_Parms), Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetLocked_Statics
	{
		struct AkSlider_eventSetLocked_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((AkSlider_eventSetLocked_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkSlider_eventSetLocked_Parms), &Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetLocked", sizeof(AkSlider_eventSetLocked_Parms), Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics
	{
		struct AkSlider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets the color of the slider bar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderBarColor", sizeof(AkSlider_eventSetSliderBarColor_Parms), Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics
	{
		struct AkSlider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets the color of the handle bar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderHandleColor", sizeof(AkSlider_eventSetSliderHandleColor_Parms), Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetStepSize_Statics
	{
		struct AkSlider_eventSetStepSize_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetStepSize", sizeof(AkSlider_eventSetStepSize_Parms), Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetValue_Statics
	{
		struct AkSlider_eventSetValue_Parms
		{
			float InValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetValue", sizeof(AkSlider_eventSetValue_Parms), Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSlider_NoRegister()
	{
		return UAkSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAkSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemToControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[];
#endif
		static void NewProp_Locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Locked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[];
#endif
		static void NewProp_IndentHandle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IndentHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemId, "GetAkSliderItemId" }, // 434203848
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty, "GetAkSliderItemProperty" }, // 2033125369
		{ &Z_Construct_UFunction_UAkSlider_GetValue, "GetValue" }, // 1541817789
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemId, "SetAkSliderItemId" }, // 3488877053
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty, "SetAkSliderItemProperty" }, // 4292648271
		{ &Z_Construct_UFunction_UAkSlider_SetIndentHandle, "SetIndentHandle" }, // 3206319668
		{ &Z_Construct_UFunction_UAkSlider_SetLocked, "SetLocked" }, // 2663478582
		{ &Z_Construct_UFunction_UAkSlider_SetSliderBarColor, "SetSliderBarColor" }, // 211133551
		{ &Z_Construct_UFunction_UAkSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 3707270078
		{ &Z_Construct_UFunction_UAkSlider_SetStepSize, "SetStepSize" }, // 1231068096
		{ &Z_Construct_UFunction_UAkSlider_SetValue, "SetValue" }, // 2276867387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkWaapiUMG/Components/AkSlider.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, OnValueChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "DisplayName", "Item to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "DisplayName", "Property to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, ThePropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->IsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, StepSize), METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->Locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->IndentHandle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle = { "IndentHandle", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The color to draw the slider handle in." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The color to draw the slider bar in." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The slider's orientation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The progress bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ToolTip", "The volume value to display." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSlider, Value), METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSlider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSlider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSlider_Statics::ClassParams = {
		&UAkSlider::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSlider_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSlider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSlider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSlider, 4235212579);
	template<> AKAUDIO_API UClass* StaticClass<UAkSlider>()
	{
		return UAkSlider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSlider(Z_Construct_UClass_UAkSlider, &UAkSlider::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
