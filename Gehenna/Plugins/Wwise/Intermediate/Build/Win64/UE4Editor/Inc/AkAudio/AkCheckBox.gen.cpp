// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkCheckBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCheckBox() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnBoolPropertyDropDetected_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped = { "PropertyDropped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnBoolPropertyDropDetected_Parms, PropertyDropped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnBoolPropertyDropDetected__DelegateSignature", sizeof(_Script_AkAudio_eventOnBoolPropertyDropDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnWwiseItemDropDetected_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID = { "ItemDroppedID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnWwiseItemDropDetected_Parms, ItemDroppedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "A delegate type invoked when an item is being dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnWwiseItemDropDetected__DelegateSignature", sizeof(_Script_AkAudio_eventOnWwiseItemDropDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms*)Obj)->bIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), &Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "AkOnCheckBoxComponentStateChanged__DelegateSignature", sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAkCheckBox::StaticRegisterNativesUAkCheckBox()
	{
		UClass* Class = UAkCheckBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkItemId", &UAkCheckBox::execGetAkItemId },
			{ "GetAkProperty", &UAkCheckBox::execGetAkProperty },
			{ "GetCheckedState", &UAkCheckBox::execGetCheckedState },
			{ "IsChecked", &UAkCheckBox::execIsChecked },
			{ "IsPressed", &UAkCheckBox::execIsPressed },
			{ "SetAkBoolProperty", &UAkCheckBox::execSetAkBoolProperty },
			{ "SetAkItemId", &UAkCheckBox::execSetAkItemId },
			{ "SetCheckedState", &UAkCheckBox::execSetCheckedState },
			{ "SetIsChecked", &UAkCheckBox::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics
	{
		struct AkCheckBox_eventGetAkItemId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetAkItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "Keywords", "Get Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Returns the current item id.\n\n@return an id as GUID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkItemId", sizeof(AkCheckBox_eventGetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics
	{
		struct AkCheckBox_eventGetAkProperty_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetAkProperty_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "Keywords", "Get Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Returns the current item property.\n\n@return a property as string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkProperty", sizeof(AkCheckBox_eventGetAkProperty_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics
	{
		struct AkCheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetCheckedState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "@return the full current checked state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetCheckedState", sizeof(AkCheckBox_eventGetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics
	{
		struct AkCheckBox_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Returns true if the checkbox is currently checked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsChecked", sizeof(AkCheckBox_eventIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics
	{
		struct AkCheckBox_eventIsPressed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventIsPressed_Parms), &Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Returns true if this button is currently pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsPressed", sizeof(AkCheckBox_eventIsPressed_Parms), Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics
	{
		struct AkCheckBox_eventSetAkBoolProperty_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetAkBoolProperty_Parms, ItemProperty), METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "Keywords", "Set Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Set the item property to the new one.\n@param ItemId - value (new id) to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkBoolProperty", sizeof(AkCheckBox_eventSetAkBoolProperty_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics
	{
		struct AkCheckBox_eventSetAkItemId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetAkItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "Keywords", "Set Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Set the item id to the new one.\n@param ItemId - value (new id) to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkItemId", sizeof(AkCheckBox_eventSetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics
	{
		struct AkCheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCheckedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCheckedState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState = { "InCheckedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetCheckedState_Parms, InCheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Sets the checked state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetCheckedState", sizeof(AkCheckBox_eventSetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics
	{
		struct AkCheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		static void NewProp_InIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit(void* Obj)
	{
		((AkCheckBox_eventSetIsChecked_Parms*)Obj)->InIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked = { "InIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventSetIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Sets the checked state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetIsChecked", sizeof(AkCheckBox_eventSetIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkCheckBox_NoRegister()
	{
		return UAkCheckBox::StaticClass();
	}
	struct Z_Construct_UClass_UAkCheckBox_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkOnCheckStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AkOnCheckStateChanged;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CheckedStateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkCheckBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkCheckBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkItemId, "GetAkItemId" }, // 1339379547
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkProperty, "GetAkProperty" }, // 2307757902
		{ &Z_Construct_UFunction_UAkCheckBox_GetCheckedState, "GetCheckedState" }, // 2342014466
		{ &Z_Construct_UFunction_UAkCheckBox_IsChecked, "IsChecked" }, // 721371386
		{ &Z_Construct_UFunction_UAkCheckBox_IsPressed, "IsPressed" }, // 152855324
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty, "SetAkBoolProperty" }, // 1674601360
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkItemId, "SetAkItemId" }, // 610502930
		{ &Z_Construct_UFunction_UAkCheckBox_SetCheckedState, "SetCheckedState" }, // 3340408050
		{ &Z_Construct_UFunction_UAkCheckBox_SetIsChecked, "SetIsChecked" }, // 465185000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and\n'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,\nor as radio buttons.\n\n* Single Child\n* Toggle" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData[] = {
		{ "Category", "CheckBox|Event" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Called when the checked state has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged = { "AkOnCheckStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, AkOnCheckStateChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "DisplayName", "Item to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Checkbox" },
		{ "DisplayName", "Property to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, ThePropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
	};
#endif
	void Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UAkCheckBox*)Obj)->IsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkCheckBox), &Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "How the content of the toggle button should align within the given space" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "The checkbox bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, WidgetStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "A bindable delegate for the IsChecked." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate = { "CheckedStateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, CheckedStateDelegate), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkCheckBox.h" },
		{ "ToolTip", "Whether the check box is currently in a checked state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState = { "CheckedState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkCheckBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkCheckBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCheckBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkCheckBox_Statics::ClassParams = {
		&UAkCheckBox::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkCheckBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkCheckBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkCheckBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkCheckBox, 372303718);
	template<> AKAUDIO_API UClass* StaticClass<UAkCheckBox>()
	{
		return UAkCheckBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkCheckBox(Z_Construct_UClass_UAkCheckBox, &UAkCheckBox::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkCheckBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCheckBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
