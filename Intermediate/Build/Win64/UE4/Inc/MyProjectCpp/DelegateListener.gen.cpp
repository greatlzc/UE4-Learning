// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/DelegateListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateListener() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ADelegateListener_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ADelegateListener();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_ADelegateListener_EnableLight();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_ADelegateListener_EndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	void ADelegateListener::StaticRegisterNativesADelegateListener()
	{
		UClass* Class = ADelegateListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableLight", &ADelegateListener::execEnableLight },
			{ "EndPlay", &ADelegateListener::execEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADelegateListener_EnableLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListener, nullptr, "EnableLight", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADelegateListener_EnableLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelegateListener_EndPlay_Statics
	{
		struct DelegateListener_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateListener_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListener, nullptr, "EndPlay", sizeof(DelegateListener_eventEndPlay_Parms), Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADelegateListener_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADelegateListener_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADelegateListener_NoRegister()
	{
		return ADelegateListener::StaticClass();
	}
	struct Z_Construct_UClass_ADelegateListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelegateListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADelegateListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateListener_EnableLight, "EnableLight" }, // 2772519757
		{ &Z_Construct_UFunction_ADelegateListener_EndPlay, "EndPlay" }, // 531364447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DelegateListener.h" },
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListener_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateListener_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADelegateListener, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADelegateListener_Statics::NewProp_SceneRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADelegateListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateListener_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelegateListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADelegateListener_Statics::ClassParams = {
		&ADelegateListener::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADelegateListener_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADelegateListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADelegateListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADelegateListener, 2268160397);
	template<> MYPROJECTCPP_API UClass* StaticClass<ADelegateListener>()
	{
		return ADelegateListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADelegateListener(Z_Construct_UClass_ADelegateListener, &ADelegateListener::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ADelegateListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
