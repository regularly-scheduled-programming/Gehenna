// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FAkPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPoly, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPoly>()
{
	return FAkPoly::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPoly(FAkPoly::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPoly"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPoly")),new UScriptStruct::TCppStructOps<FAkPoly>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPoly;
	struct Z_Construct_UScriptStruct_FAkPoly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPoly>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkPoly*)Obj)->EnableSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkPoly), &Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPoly",
		sizeof(FAkPoly),
		alignof(FAkPoly),
		Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPoly_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash() { return 1653079681U; }
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[];
#endif
		static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 301170454
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 377495204
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 3424443082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers = { "TextVisualizers", nullptr, (EPropertyFlags)0x0010008800000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner = { "TextVisualizers", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "Acoustic Surface Properties" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "(Optional) Associate this Surface Reflector Set with a Room.\n      Associating a surface reflector set with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.\n      It is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n      Take note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Acoustic Surface Properties" },
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Acoustic Surface Properties" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData[] = {
		{ "Category", "AcousticSurfaces" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "Category", "Toggle" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
		&UAkSurfaceReflectorSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSurfaceReflectorSetComponent, 1604317060);
	template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSurfaceReflectorSetComponent(Z_Construct_UClass_UAkSurfaceReflectorSetComponent, &UAkSurfaceReflectorSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSurfaceReflectorSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
