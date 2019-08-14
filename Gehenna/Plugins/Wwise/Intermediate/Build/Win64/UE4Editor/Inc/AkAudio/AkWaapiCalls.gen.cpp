// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiCalls.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiCalls() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_CallWaapi();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnWaapiConnectionLost__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnWaapiProjectLoaded__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnEventCallback_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			FAKWaapiJsonObject WaapiJsonObject;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiJsonObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_WaapiJsonObject = { "WaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnEventCallback_Parms, WaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnEventCallback_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_WaapiJsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_SubscriptionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnEventCallback__DelegateSignature", sizeof(_Script_AkAudio_eventOnEventCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkWaapiSubscriptionId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiSubscriptionId>()
{
	return FAkWaapiSubscriptionId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiSubscriptionId(FAkWaapiSubscriptionId::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiSubscriptionId"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiSubscriptionId")),new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId;
	struct Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Structure for Field Names" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiSubscriptionId",
		sizeof(FAkWaapiSubscriptionId),
		alignof(FAkWaapiSubscriptionId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_Hash() { return 2336549974U; }
	void UAkWaapiCalls::StaticRegisterNativesUAkWaapiCalls()
	{
		UClass* Class = UAkWaapiCalls::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallWaapi", &UAkWaapiCalls::execCallWaapi },
			{ "Conv_FAkWaapiSubscriptionIdToString", &UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToString },
			{ "Conv_FAkWaapiSubscriptionIdToText", &UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToText },
			{ "GetSubscriptionID", &UAkWaapiCalls::execGetSubscriptionID },
			{ "RegisterWaapiConnectionLostCallback", &UAkWaapiCalls::execRegisterWaapiConnectionLostCallback },
			{ "RegisterWaapiProjectLoadedCallback", &UAkWaapiCalls::execRegisterWaapiProjectLoadedCallback },
			{ "SetSubscriptionID", &UAkWaapiCalls::execSetSubscriptionID },
			{ "SubscribeToWaapi", &UAkWaapiCalls::execSubscribeToWaapi },
			{ "Unsubscribe", &UAkWaapiCalls::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics
	{
		struct AkWaapiCalls_eventCallWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiArgs;
			FAKWaapiJsonObject WaapiOptions;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiUri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions = { "WaapiOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiOptions), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs = { "WaapiArgs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiArgs), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri = { "WaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Call Waapi and get/set information/parameters according to the uri chosen.\n\n@param WaapiUri               The     function that will be called when an event that we would be aware of happens.\n@param WaapiArgs              The arguments referenced to the in_uri function.\n@param WaapiOptions   Optional flag to get more information about the event happened.\n@return out_result    A JSON object that contains useful informations about the Call process to a specific event, gets an error infos in case the Call fails." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "CallWaapi", sizeof(AkWaapiCalls_eventCallWaapi_Parms), Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_CallWaapi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiSubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiSubscriptionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId = { "INAkWaapiSubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms, INAkWaapiSubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkWaapiSubscriptionId)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Converts an AkWaapiSubscriptionId value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Conv_FAkWaapiSubscriptionIdToString", sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms), Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiSubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiSubscriptionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId = { "INAkWaapiSubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms, INAkWaapiSubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkWaapiSubscriptionId)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Converts an AkWaapiSubscriptionId value to a localizable text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Conv_FAkWaapiSubscriptionIdToText", sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms), Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics
	{
		struct AkWaapiCalls_eventGetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subscription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventGetSubscriptionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription = { "Subscription", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventGetSubscriptionID_Parms, Subscription), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "GetSubscriptionID", sizeof(AkWaapiCalls_eventGetSubscriptionID_Parms), Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics
	{
		struct AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms, Callback), Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Subscribe to WAAPI connection lost event. This event will be broadcast when the WAAPI connection is lost. This should be used to clean up any resources that use WAAPI.\n\n@param Callback the event to call when the connection is lost" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "RegisterWaapiConnectionLostCallback", sizeof(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics
	{
		struct AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms, Callback), Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Subscribe to WAAPI project loaded event. This event will be broadcast whenever the correct Wwise project is loaded (defined by Wwise Project Path in the Wwise Plugin Settings). This should be used to initialize any resources that use WAAPI.\n\n@param Callback the event to call when a connection is established" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "RegisterWaapiProjectLoadedCallback", sizeof(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics
	{
		struct AkWaapiCalls_eventSetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 id;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subscription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSetSubscriptionID_Parms, id), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription = { "Subscription", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSetSubscriptionID_Parms, Subscription), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "SetSubscriptionID", sizeof(AkWaapiCalls_eventSetSubscriptionID_Parms), Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics
	{
		struct AkWaapiCalls_eventSubscribeToWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiOptions;
			FScriptDelegate CallBack;
			FAkWaapiSubscriptionId SubscriptionId;
			bool SubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_SubscriptionDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SubscriptionDone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CallBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiUri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventSubscribeToWaapi_Parms*)Obj)->SubscriptionDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone = { "SubscriptionDone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventSubscribeToWaapi_Parms), &Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack = { "CallBack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, CallBack), Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions = { "WaapiOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, WaapiOptions), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri = { "WaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, WaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Allows clients to subscribe to notifications according to the event.\n\n@param WaapiUri                        The reference to the event that we would be aware of when it happens.\n@param WaapiOptions            Optional flag to get more information about the event happened.\n@param in_callback             A delegate to be executed during the subscription event.\n@param out_subscriptionId      Gets the id of this subscription.\n@param out_result                      A boolean to ensure that the subscription was successfully done.\n@return                                        A JSON object that contains useful informations about the subscription process to a specific event, gets an error infos in case the subscription failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "SubscribeToWaapi", sizeof(AkWaapiCalls_eventSubscribeToWaapi_Parms), Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics
	{
		struct AkWaapiCalls_eventUnsubscribe_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			bool UnsubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_UnsubscriptionDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnsubscriptionDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventUnsubscribe_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventUnsubscribe_Parms*)Obj)->UnsubscriptionDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone = { "UnsubscriptionDone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventUnsubscribe_Parms), &Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventUnsubscribe_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiCalls" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ToolTip", "Unsubscribe from an event.\n\n@param SubscriptionId      Gets the id of the current subscription to the event from which we want to be unsubscribed.\n@param UnsubscriptionDone  A boolean to ensure that the unsubscription was successfully done.\n@return                                        A JSON object that contains useful informations about the unsubscription process from a specific event, gets an error infos in case the unsubscription failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Unsubscribe", sizeof(AkWaapiCalls_eventUnsubscribe_Parms), Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister()
	{
		return UAkWaapiCalls::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiCalls_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiCalls_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiCalls_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiCalls_CallWaapi, "CallWaapi" }, // 2240929301
		{ &Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString, "Conv_FAkWaapiSubscriptionIdToString" }, // 222213564
		{ &Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText, "Conv_FAkWaapiSubscriptionIdToText" }, // 2867086305
		{ &Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID, "GetSubscriptionID" }, // 812731678
		{ &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback, "RegisterWaapiConnectionLostCallback" }, // 102036116
		{ &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback, "RegisterWaapiProjectLoadedCallback" }, // 509120211
		{ &Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID, "SetSubscriptionID" }, // 3637397782
		{ &Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi, "SubscribeToWaapi" }, // 1299274853
		{ &Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe, "Unsubscribe" }, // 2528405955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiCalls.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiCalls.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiCalls_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiCalls>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiCalls_Statics::ClassParams = {
		&UAkWaapiCalls::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWaapiCalls()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWaapiCalls_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiCalls, 4101514078);
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiCalls>()
	{
		return UAkWaapiCalls::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiCalls(Z_Construct_UClass_UAkWaapiCalls, &UAkWaapiCalls::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiCalls"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiCalls);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
