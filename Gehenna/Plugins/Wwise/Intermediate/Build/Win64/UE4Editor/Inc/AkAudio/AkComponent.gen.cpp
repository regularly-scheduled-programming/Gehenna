// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetRTPCValue();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetListeners();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_Stop();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* EReflectionFilterBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>()
	{
		return EReflectionFilterBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionFilterBits(EReflectionFilterBits_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EReflectionFilterBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Hash() { return 878411096U; }
	UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionFilterBits"), 0, Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
				{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
				{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EReflectionFilterBits",
				"EReflectionFilterBits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
			{ "GetRTPCValue", &UAkComponent::execGetRTPCValue },
			{ "PostAkEvent", &UAkComponent::execPostAkEvent },
			{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
			{ "PostAkEventByName", &UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEvent", &UAkComponent::execPostAssociatedAkEvent },
			{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
			{ "PostTrigger", &UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", &UAkComponent::execSetAttenuationScalingFactor },
			{ "SetListeners", &UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", &UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", &UAkComponent::execSetSwitch },
			{ "SetUseSpatialAudio", &UAkComponent::execSetUseSpatialAudio },
			{ "Stop", &UAkComponent::execStop },
			{ "UseEarlyReflections", &UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", sizeof(AkComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics
	{
		struct AkComponent_eventGetRTPCValue_Parms
		{
			FString RTPC;
			int32 PlayingID;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets an RTPC value, using this component as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetRTPCValue", sizeof(AkComponent_eventGetRTPCValue_Parms), Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics
	{
		struct AkComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FString in_EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_in_EventName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_in_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_CallbackMask_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEvent", sizeof(AkComponent_eventPostAkEvent_Parms), Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", sizeof(AkComponent_eventPostAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Event Name\" field of Post Ak Event" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise using its name, using this component as the game object source\n\n@param AkEvent               The event to post" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventByName", sizeof(AkComponent_eventPostAkEventByName_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics
	{
		struct AkComponent_eventPostAssociatedAkEvent_Parms
		{
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::NewProp_CallbackMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEvent", sizeof(AkComponent_eventPostAssociatedAkEvent_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
		{
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "0" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostTrigger_Statics
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			FString Trigger;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostTrigger", sizeof(AkComponent_eventPostTrigger_Parms), Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetAttenuationScalingFactor", sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms), Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetListeners_Statics
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Listeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set a game object's listeners\n\n@param Listeners     The array of components that listen to this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", sizeof(AkComponent_eventSetListeners_Parms), Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", sizeof(AkComponent_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			FString RTPC;
			float Value;
			int32 InterpolationTimeMs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets an RTPC value, using this component as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetRTPCValue", sizeof(AkComponent_eventSetRTPCValue_Parms), Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetSwitch_Statics
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			FString SwitchGroup;
			FString SwitchState;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetSwitch", sizeof(AkComponent_eventSetSwitch_Parms), Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics
	{
		struct AkComponent_eventSetUseSpatialAudio_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((AkComponent_eventSetUseSpatialAudio_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventSetUseSpatialAudio_Parms), &Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetUseSpatialAudio", sizeof(AkComponent_eventSetUseSpatialAudio_Parms), Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Stops playback using this component as the game object to stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "Stop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static void NewProp_SpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendGain;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	void Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "CPP_Default_AuxBusName", "" },
		{ "CPP_Default_BusSendGain", "1.000000" },
		{ "CPP_Default_MaxPathLength", "100000.000000" },
		{ "CPP_Default_Order", "1" },
		{ "CPP_Default_SpotReflectors", "false" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "UseEarlyReflections. Enable early reflections for this ak component.\n\n@param AuxBus Aux bus that contains the AkReflect plugin\n@param Order Max Order of reflections.\n@param BusSendGain Send gain for the aux bus.\n@param MaxPathLength Sound will reflect up to this max distance between emitter and reflective surface.\n@param EnableSpotReflectors Enable reflections off spot reflectors.\n@param AuxBusName     Aux bus name that contains the AkReflect plugin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseEarlyReflections", sizeof(AkComponent_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"UseReverbVolume\" property" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes    Whether to use reverb volumes or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseReverbVolumes", sizeof(AkComponent_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[];
#endif
		static void NewProp_bUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[];
#endif
		static void NewProp_DrawDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[];
#endif
		static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[];
#endif
		static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[];
#endif
		static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_diffractionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomReverbAuxBusGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roomReverbAuxBusGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[];
#endif
		static void NewProp_EnableSpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EarlyReflectionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[];
#endif
		static void NewProp_bUseSpatialAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 768971407
		{ &Z_Construct_UFunction_UAkComponent_GetRTPCValue, "GetRTPCValue" }, // 4151081910
		{ &Z_Construct_UFunction_UAkComponent_PostAkEvent, "PostAkEvent" }, // 2586493498
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 1662695919
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventByName, "PostAkEventByName" }, // 3973946058
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 1062117835
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 1437439568
		{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 2751391126
		{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 3395729533
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 2942251155
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 3073571428
		{ &Z_Construct_UFunction_UAkComponent_SetRTPCValue, "SetRTPCValue" }, // 3083348386
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 2581823672
		{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 3712278129
		{ &Z_Construct_UFunction_UAkComponent_SetUseSpatialAudio, "SetUseSpatialAudio" }, // 3571482690
		{ &Z_Construct_UFunction_UAkComponent_Stop, "Stop" }, // 3550471262
		{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 3190142171
		{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 987584134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "UAkComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EventName), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AkAudioEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Whether to use reverb volumes or not" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Time interval between occlusion/obstruction checks. Set to 0 to disable occlusion on this component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed?" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "The maximum length that a diffracted sound can travel.  Should be no longer (and possibly shorter for less CPU usage) than the maximum attenuation of the sound emitter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength = { "diffractionMaxPathLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "The maximum number of paths to the listener that the sound can take around obstacles." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths = { "diffractionMaxPaths", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPaths), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "The maximum number of edges that the sound can diffract around between the emitter and the listener." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges = { "diffractionMaxEdges", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxEdges), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Room" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Send gain (0.f-1.f) that is applied when sending to the bus that is associated with the room that the emitter is in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain = { "roomReverbAuxBusGain", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Enable this component's sound to be reflected by spot reflectors." },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->EnableSpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "Category", "AkComponent|Occlusion" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "A heuristic to stop the computation of reflections. Should be no longer (and possibly shorter for less CPU usage) than the maximum attenuation of the sound emitter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength = { "EarlyReflectionMaxPathLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Send gain (0.f-1.f) that is applied when sending to the bus that has the AkReflect plug-in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Maximum number of reflections that will be processed when computing indirect paths via the geometric reflections API. Reflection processing grows exponentially with the order of reflections, so this number should be kept low." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder = { "EarlyReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Wwise Auxiliary Bus Name for early reflection processing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Wwise Auxiliary Bus for early reflection processing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData[] = {
		{ "BlueprintSetter", "SetUseSpatialAudio" },
		{ "Category", "AkComponent|Spatial Audio" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseSpatialAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkComponent_Statics::ClassParams = {
		&UAkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkComponent, 2017691561);
	template<> AKAUDIO_API UClass* StaticClass<UAkComponent>()
	{
		return UAkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
