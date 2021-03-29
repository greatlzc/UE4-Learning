// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Clock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClock() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AClock_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AClock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AClock::execTimeChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Hours);
		P_GET_PROPERTY(FIntProperty,Z_Param_Minutes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimeChanged(Z_Param_Hours,Z_Param_Minutes);
		P_NATIVE_END;
	}
	void AClock::StaticRegisterNativesAClock()
	{
		UClass* Class = AClock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimeChanged", &AClock::execTimeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClock_TimeChanged_Statics
	{
		struct Clock_eventTimeChanged_Parms
		{
			int32 Hours;
			int32 Minutes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minutes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hours;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClock_TimeChanged_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Clock_eventTimeChanged_Parms, Minutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClock_TimeChanged_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Clock_eventTimeChanged_Parms, Hours), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClock_TimeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClock_TimeChanged_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClock_TimeChanged_Statics::NewProp_Hours,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClock_TimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClock_TimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClock, nullptr, "TimeChanged", nullptr, nullptr, sizeof(Clock_eventTimeChanged_Parms), Z_Construct_UFunction_AClock_TimeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClock_TimeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClock_TimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClock_TimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClock_TimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClock_TimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AClock_NoRegister()
	{
		return AClock::StaticClass();
	}
	struct Z_Construct_UClass_AClock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinuteHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinuteHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinuteHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinuteHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HourHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HourHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HourHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HourHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClockFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClock_TimeChanged, "TimeChanged" }, // 3291177534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Clock.h" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_MinuteHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_MinuteHand = { "MinuteHand", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, MinuteHand), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_MinuteHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_MinuteHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_MinuteHandle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_MinuteHandle = { "MinuteHandle", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, MinuteHandle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_MinuteHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_MinuteHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_HourHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_HourHand = { "HourHand", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, HourHand), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_HourHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_HourHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_HourHandle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_HourHandle = { "HourHandle", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, HourHandle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_HourHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_HourHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_ClockFace_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_ClockFace = { "ClockFace", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, ClockFace), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_ClockFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_ClockFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClock_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Clock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClock_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClock, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::NewProp_RootSceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_MinuteHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_MinuteHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_HourHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_HourHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_ClockFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClock_Statics::NewProp_RootSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClock_Statics::ClassParams = {
		&AClock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClock, 3811891637);
	template<> MYPROJECTCPP_API UClass* StaticClass<AClock>()
	{
		return AClock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClock(Z_Construct_UClass_AClock, &AClock::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AClock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
