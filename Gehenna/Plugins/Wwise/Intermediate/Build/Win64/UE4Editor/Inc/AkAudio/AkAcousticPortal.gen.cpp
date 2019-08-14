// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAcousticPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	void AAkAcousticPortal::StaticRegisterNativesAAkAcousticPortal()
	{
		UClass* Class = AAkAcousticPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePortal", &AAkAcousticPortal::execClosePortal },
			{ "GetCurrentState", &AAkAcousticPortal::execGetCurrentState },
			{ "OpenPortal", &AAkAcousticPortal::execOpenPortal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "ClosePortal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics
	{
		struct AkAcousticPortal_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAcousticPortal_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "GetCurrentState", sizeof(AkAcousticPortal_eventGetCurrentState_Parms), Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "OpenPortal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister()
	{
		return AAkAcousticPortal::StaticClass();
	}
	struct Z_Construct_UClass_AAkAcousticPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstructionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObstructionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstructionRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstructionRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAcousticPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAcousticPortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAcousticPortal_ClosePortal, "ClosePortal" }, // 3409695766
		{ &Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState, "GetCurrentState" }, // 475567811
		{ &Z_Construct_UFunction_AAkAcousticPortal_OpenPortal, "OpenPortal" }, // 1194125056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionCollisionChannel_MetaData[] = {
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ToolTip", "Collision channel for obstruction checks (between listener and portal opening)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionCollisionChannel = { "ObstructionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAcousticPortal, ObstructionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionCollisionChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionRefreshInterval_MetaData[] = {
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ToolTip", "Time interval between obstruction checks (between listener and portal opening). Set to 0 to disable occlusion on this component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionRefreshInterval = { "ObstructionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAcousticPortal, ObstructionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionRefreshInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData[] = {
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAcousticPortal, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_ObstructionRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAcousticPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAcousticPortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams = {
		&AAkAcousticPortal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAcousticPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAcousticPortal, 895431870);
	template<> AKAUDIO_API UClass* StaticClass<AAkAcousticPortal>()
	{
		return AAkAcousticPortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAcousticPortal(Z_Construct_UClass_AAkAcousticPortal, &AAkAcousticPortal::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAcousticPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAcousticPortal);
	void UAkPortalComponent::StaticRegisterNativesUAkPortalComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister()
	{
		return UAkPortalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkPortalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPortalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPortalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPortalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkPortalComponent_Statics::ClassParams = {
		&UAkPortalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPortalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkPortalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkPortalComponent, 1587110416);
	template<> AKAUDIO_API UClass* StaticClass<UAkPortalComponent>()
	{
		return UAkPortalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkPortalComponent(Z_Construct_UClass_UAkPortalComponent, &UAkPortalComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkPortalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPortalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
