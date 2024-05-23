// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BezierCameraMovement/BezierCPPExampleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierCPPExampleActor() {}
// Cross Module References
	BEZIERCAMERAMOVEMENT_API UClass* Z_Construct_UClass_ABezierCPPExampleActor();
	BEZIERCAMERAMOVEMENT_API UClass* Z_Construct_UClass_ABezierCPPExampleActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BezierCameraMovement();
// End Cross Module References
	void ABezierCPPExampleActor::StaticRegisterNativesABezierCPPExampleActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABezierCPPExampleActor);
	UClass* Z_Construct_UClass_ABezierCPPExampleActor_NoRegister()
	{
		return ABezierCPPExampleActor::StaticClass();
	}
	struct Z_Construct_UClass_ABezierCPPExampleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_P3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugBezierLine_MetaData[];
#endif
		static void NewProp_DrawDebugBezierLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugBezierLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierCPPExampleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BezierCameraMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BezierCPPExampleActor.h" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, P0), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P0_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, P1), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P1_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, P2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P2_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, P3), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P3_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_TransitionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TransitionTimer" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_TransitionTime = { "TransitionTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, TransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_TransitionTime_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_TransitionTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_Timer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABezierCPPExampleActor, Timer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_Timer_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_Timer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugDraw" },
		{ "ModuleRelativePath", "BezierCPPExampleActor.h" },
	};
#endif
	void Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine_SetBit(void* Obj)
	{
		((ABezierCPPExampleActor*)Obj)->DrawDebugBezierLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine = { "DrawDebugBezierLine", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABezierCPPExampleActor), &Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine_MetaData), Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierCPPExampleActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_P3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_TransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_Timer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCPPExampleActor_Statics::NewProp_DrawDebugBezierLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierCPPExampleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierCPPExampleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABezierCPPExampleActor_Statics::ClassParams = {
		&ABezierCPPExampleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABezierCPPExampleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABezierCPPExampleActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCPPExampleActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABezierCPPExampleActor()
	{
		if (!Z_Registration_Info_UClass_ABezierCPPExampleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABezierCPPExampleActor.OuterSingleton, Z_Construct_UClass_ABezierCPPExampleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABezierCPPExampleActor.OuterSingleton;
	}
	template<> BEZIERCAMERAMOVEMENT_API UClass* StaticClass<ABezierCPPExampleActor>()
	{
		return ABezierCPPExampleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierCPPExampleActor);
	ABezierCPPExampleActor::~ABezierCPPExampleActor() {}
	struct Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BezierCPPExampleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BezierCPPExampleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABezierCPPExampleActor, ABezierCPPExampleActor::StaticClass, TEXT("ABezierCPPExampleActor"), &Z_Registration_Info_UClass_ABezierCPPExampleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABezierCPPExampleActor), 3586392236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BezierCPPExampleActor_h_2590420105(TEXT("/Script/BezierCameraMovement"),
		Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BezierCPPExampleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BezierCPPExampleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
