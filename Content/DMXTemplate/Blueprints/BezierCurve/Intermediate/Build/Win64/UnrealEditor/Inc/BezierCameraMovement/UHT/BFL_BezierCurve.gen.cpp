// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BezierCameraMovement/BFL_BezierCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFL_BezierCurve() {}
// Cross Module References
	BEZIERCAMERAMOVEMENT_API UClass* Z_Construct_UClass_UBFL_BezierCurve();
	BEZIERCAMERAMOVEMENT_API UClass* Z_Construct_UClass_UBFL_BezierCurve_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BezierCameraMovement();
// End Cross Module References
	DEFINE_FUNCTION(UBFL_BezierCurve::execDebugDrawCubicBezierCurve)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P3);
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT(FLinearColor,Z_Param_LinearColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBFL_BezierCurve::DebugDrawCubicBezierCurve(Z_Param_Segments,Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_P2,Z_Param_Out_P3,Z_Param_WorldContext,Z_Param_LinearColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBFL_BezierCurve::execDebugDrawQuadraticBezierCurve)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P2);
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT(FLinearColor,Z_Param_LinearColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBFL_BezierCurve::DebugDrawQuadraticBezierCurve(Z_Param_Segments,Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_P2,Z_Param_WorldContext,Z_Param_LinearColor,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBFL_BezierCurve::execSampleCubicBezierCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBFL_BezierCurve::SampleCubicBezierCurve(Z_Param_SampleTime,Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_P2,Z_Param_Out_P3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBFL_BezierCurve::execSampleQuadraticBezierCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_P2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBFL_BezierCurve::SampleQuadraticBezierCurve(Z_Param_SampleTime,Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_P2);
		P_NATIVE_END;
	}
	void UBFL_BezierCurve::StaticRegisterNativesUBFL_BezierCurve()
	{
		UClass* Class = UBFL_BezierCurve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugDrawCubicBezierCurve", &UBFL_BezierCurve::execDebugDrawCubicBezierCurve },
			{ "DebugDrawQuadraticBezierCurve", &UBFL_BezierCurve::execDebugDrawQuadraticBezierCurve },
			{ "SampleCubicBezierCurve", &UBFL_BezierCurve::execSampleCubicBezierCurve },
			{ "SampleQuadraticBezierCurve", &UBFL_BezierCurve::execSampleQuadraticBezierCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics
	{
		struct BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms
		{
			int32 Segments;
			FVector P0;
			FVector P1;
			FVector P2;
			FVector P3;
			const UObject* WorldContext;
			FLinearColor LinearColor;
			float Duration;
			float Thickness;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, Segments), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, P0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P0_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P1_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P2_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, P3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P3_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_P3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_LinearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_LinearColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "3.000000" },
		{ "ModuleRelativePath", "BFL_BezierCurve.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_BezierCurve, nullptr, "DebugDrawCubicBezierCurve", nullptr, nullptr, Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::BFL_BezierCurve_eventDebugDrawCubicBezierCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics
	{
		struct BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms
		{
			int32 Segments;
			FVector P0;
			FVector P1;
			FVector P2;
			const UObject* WorldContext;
			FLinearColor LinearColor;
			float Duration;
			float Thickness;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, Segments), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, P0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P0_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P1_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P2_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_LinearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug Visualizer Functions\n" },
#endif
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_LinearColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "3.000000" },
		{ "ModuleRelativePath", "BFL_BezierCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Visualizer Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_BezierCurve, nullptr, "DebugDrawQuadraticBezierCurve", nullptr, nullptr, Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::BFL_BezierCurve_eventDebugDrawQuadraticBezierCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics
	{
		struct BFL_BezierCurve_eventSampleCubicBezierCurve_Parms
		{
			float SampleTime;
			FVector P0;
			FVector P1;
			FVector P2;
			FVector P3;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, SampleTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, P0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P0_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P1_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P2_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, P3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P3_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P3_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleCubicBezierCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_SampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_P3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SampleTime (Range between 0 - 1)\n\x09 * P0 - Initial Point\n\x09 * P1 - Tangent Point 1\n\x09 * P2 - Tangent Point 2\n\x09 * P3 - Final Point\n\x09 * Returns A Location Sampled On The Bezier Curve\n\x09 * Note: It does not correct values outside of the 0 to 1 range\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BFL_BezierCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SampleTime (Range between 0 - 1)\nP0 - Initial Point\nP1 - Tangent Point 1\nP2 - Tangent Point 2\nP3 - Final Point\nReturns A Location Sampled On The Bezier Curve\nNote: It does not correct values outside of the 0 to 1 range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_BezierCurve, nullptr, "SampleCubicBezierCurve", nullptr, nullptr, Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::BFL_BezierCurve_eventSampleCubicBezierCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::BFL_BezierCurve_eventSampleCubicBezierCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics
	{
		struct BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms
		{
			float SampleTime;
			FVector P0;
			FVector P1;
			FVector P2;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms, SampleTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms, P0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P0_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P1_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P2_MetaData), Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P2_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_SampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SampleTime (Range between 0 - 1)\n\x09 * P0 - Initial Point\n\x09 * P1 - Tangent Point\n\x09 * P2 - Final Point\n\x09 * Returns A Location Sampled On The Bezier Curve\n\x09 * Note: It does not correct values outside of the 0 to 1 range\n\x09 */" },
#endif
		{ "ModuleRelativePath", "BFL_BezierCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SampleTime (Range between 0 - 1)\nP0 - Initial Point\nP1 - Tangent Point\nP2 - Final Point\nReturns A Location Sampled On The Bezier Curve\nNote: It does not correct values outside of the 0 to 1 range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBFL_BezierCurve, nullptr, "SampleQuadraticBezierCurve", nullptr, nullptr, Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::BFL_BezierCurve_eventSampleQuadraticBezierCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBFL_BezierCurve);
	UClass* Z_Construct_UClass_UBFL_BezierCurve_NoRegister()
	{
		return UBFL_BezierCurve::StaticClass();
	}
	struct Z_Construct_UClass_UBFL_BezierCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBFL_BezierCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BezierCameraMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_BezierCurve_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBFL_BezierCurve_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawCubicBezierCurve, "DebugDrawCubicBezierCurve" }, // 1922485032
		{ &Z_Construct_UFunction_UBFL_BezierCurve_DebugDrawQuadraticBezierCurve, "DebugDrawQuadraticBezierCurve" }, // 2183808644
		{ &Z_Construct_UFunction_UBFL_BezierCurve_SampleCubicBezierCurve, "SampleCubicBezierCurve" }, // 636799026
		{ &Z_Construct_UFunction_UBFL_BezierCurve_SampleQuadraticBezierCurve, "SampleQuadraticBezierCurve" }, // 2379328853
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_BezierCurve_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBFL_BezierCurve_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// https://en.wikipedia.org/wiki/B%C3%A9zier_curve\n" },
#endif
		{ "IncludePath", "BFL_BezierCurve.h" },
		{ "ModuleRelativePath", "BFL_BezierCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "https:en.wikipedia.org/wiki/B%C3%A9zier_curve" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBFL_BezierCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBFL_BezierCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBFL_BezierCurve_Statics::ClassParams = {
		&UBFL_BezierCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_BezierCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UBFL_BezierCurve_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBFL_BezierCurve()
	{
		if (!Z_Registration_Info_UClass_UBFL_BezierCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBFL_BezierCurve.OuterSingleton, Z_Construct_UClass_UBFL_BezierCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBFL_BezierCurve.OuterSingleton;
	}
	template<> BEZIERCAMERAMOVEMENT_API UClass* StaticClass<UBFL_BezierCurve>()
	{
		return UBFL_BezierCurve::StaticClass();
	}
	UBFL_BezierCurve::UBFL_BezierCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBFL_BezierCurve);
	UBFL_BezierCurve::~UBFL_BezierCurve() {}
	struct Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BFL_BezierCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BFL_BezierCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBFL_BezierCurve, UBFL_BezierCurve::StaticClass, TEXT("UBFL_BezierCurve"), &Z_Registration_Info_UClass_UBFL_BezierCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFL_BezierCurve), 4142219654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BFL_BezierCurve_h_463759019(TEXT("/Script/BezierCameraMovement"),
		Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BFL_BezierCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ProjectII_Footabolastic_Content_DMXTemplate_Blueprints_BezierCurve_Source_BezierCameraMovement_BFL_BezierCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
