// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiJsonManager() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField();
// End Cross Module References
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAKWaapiJsonObject>()
{
	return FAKWaapiJsonObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAKWaapiJsonObject(FAKWaapiJsonObject::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AKWaapiJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AKWaapiJsonObject")),new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject;
	struct Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AKWaapiJsonObject",
		sizeof(FAKWaapiJsonObject),
		alignof(FAKWaapiJsonObject),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_Hash() { return 1702745759U; }
	void UAkWaapiJsonManager::StaticRegisterNativesUAkWaapiJsonManager()
	{
		UClass* Class = UAkWaapiJsonManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAKWaapiJsonObjectToString", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString },
			{ "Conv_FAKWaapiJsonObjectToText", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText },
			{ "GetArrayField", &UAkWaapiJsonManager::execGetArrayField },
			{ "GetBoolField", &UAkWaapiJsonManager::execGetBoolField },
			{ "GetIntegerField", &UAkWaapiJsonManager::execGetIntegerField },
			{ "GetNumberField", &UAkWaapiJsonManager::execGetNumberField },
			{ "GetObjectField", &UAkWaapiJsonManager::execGetObjectField },
			{ "GetStringField", &UAkWaapiJsonManager::execGetStringField },
			{ "SetArrayObjectFields", &UAkWaapiJsonManager::execSetArrayObjectFields },
			{ "SetArrayStringFields", &UAkWaapiJsonManager::execSetArrayStringFields },
			{ "SetBoolField", &UAkWaapiJsonManager::execSetBoolField },
			{ "SetNumberField", &UAkWaapiJsonManager::execSetNumberField },
			{ "SetObjectField", &UAkWaapiJsonManager::execSetObjectField },
			{ "SetStringField", &UAkWaapiJsonManager::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAKWaapiJsonObject)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Converts an AKWaapiJsonObject value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToString", sizeof(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAKWaapiJsonObject)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Converts an AKWaapiJsonObject value to a localizable text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToText", sizeof(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics
	{
		struct AkWaapiJsonManager_eventGetArrayField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			TArray<FAKWaapiJsonObject> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Get the field named FieldName as an array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetArrayField", sizeof(AkWaapiJsonManager_eventGetArrayField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventGetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiJsonManager_eventGetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Gets the field with the specified name as a boolean." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetBoolField", sizeof(AkWaapiJsonManager_eventGetBoolField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics
	{
		struct AkWaapiJsonManager_eventGetIntegerField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Gets a numeric field and casts to an int32" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetIntegerField", sizeof(AkWaapiJsonManager_eventGetIntegerField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventGetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Gets the field with the specified name as a number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetNumberField", sizeof(AkWaapiJsonManager_eventGetNumberField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventGetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Gets the field with the specified name as a Json object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetObjectField", sizeof(AkWaapiJsonManager_eventGetObjectField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics
	{
		struct AkWaapiJsonManager_eventGetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Get the field named FieldName as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetStringField", sizeof(AkWaapiJsonManager_eventGetStringField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayObjectFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FAKWaapiJsonObject> FieldObjectValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldObjectValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldObjectValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldObjectValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldObjectValues), METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Set an array of ObjectField named FieldName and value of FieldObjectValues" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayObjectFields", sizeof(AkWaapiJsonManager_eventSetArrayObjectFields_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayStringFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FString> FieldStringValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldStringValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldStringValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldStringValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues = { "FieldStringValues", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldStringValues), METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner = { "FieldStringValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Add an array of String field named FieldName with value of FieldStringValues" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayStringFields", sizeof(AkWaapiJsonManager_eventSetArrayStringFields_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventSetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			bool FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static void NewProp_FieldValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventSetBoolField_Parms*)Obj)->FieldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiJsonManager_eventSetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Set a boolean field named FieldName and value of FieldValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetBoolField", sizeof(AkWaapiJsonManager_eventSetBoolField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventSetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			float FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Add a field named FieldName with Number as FieldValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetNumberField", sizeof(AkWaapiJsonManager_eventSetNumberField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventSetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of FieldValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetObjectField", sizeof(AkWaapiJsonManager_eventSetObjectField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics
	{
		struct AkWaapiJsonManager_eventSetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FString FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ToolTip", "Add a String field named FieldName with value of FieldValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetStringField", sizeof(AkWaapiJsonManager_eventSetStringField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiJsonManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiJsonManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiJsonManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString, "Conv_FAKWaapiJsonObjectToString" }, // 889546329
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText, "Conv_FAKWaapiJsonObjectToText" }, // 891713607
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField, "GetArrayField" }, // 21554347
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField, "GetBoolField" }, // 3647691112
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField, "GetIntegerField" }, // 575788186
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField, "GetNumberField" }, // 3597083787
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField, "GetObjectField" }, // 1368091098
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField, "GetStringField" }, // 362538826
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields, "SetArrayObjectFields" }, // 13101061
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields, "SetArrayStringFields" }, // 2243639900
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField, "SetBoolField" }, // 2858032564
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField, "SetNumberField" }, // 3238987380
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField, "SetObjectField" }, // 613974443
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField, "SetStringField" }, // 780043695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiJsonManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiJsonManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams = {
		&UAkWaapiJsonManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWaapiJsonManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiJsonManager, 563954144);
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiJsonManager>()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiJsonManager(Z_Construct_UClass_UAkWaapiJsonManager, &UAkWaapiJsonManager::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiJsonManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiJsonManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
