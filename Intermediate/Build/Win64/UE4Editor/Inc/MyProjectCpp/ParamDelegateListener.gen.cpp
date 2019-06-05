// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/ParamDelegateListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParamDelegateListener() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AParamDelegateListener_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AParamDelegateListener();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AParamDelegateListener_EndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AParamDelegateListener_SetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	void AParamDelegateListener::StaticRegisterNativesAParamDelegateListener()
	{
		UClass* Class = AParamDelegateListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AParamDelegateListener::execEndPlay },
			{ "SetLightColor", &AParamDelegateListener::execSetLightColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics
	{
		struct ParamDelegateListener_eventEndPlay_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParamDelegateListener_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParamDelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParamDelegateListener, nullptr, "EndPlay", sizeof(ParamDelegateListener_eventEndPlay_Parms), Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParamDelegateListener_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParamDelegateListener_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics
	{
		struct ParamDelegateListener_eventSetLightColor_Parms
		{
			FLinearColor LightColor;
			bool EnableLight;
		};
		static void NewProp_EnableLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableLight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_EnableLight_SetBit(void* Obj)
	{
		((ParamDelegateListener_eventSetLightColor_Parms*)Obj)->EnableLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_EnableLight = { "EnableLight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParamDelegateListener_eventSetLightColor_Parms), &Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_EnableLight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParamDelegateListener_eventSetLightColor_Parms, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_EnableLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::NewProp_LightColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParamDelegateListener.h" },
		{ "ToolTip", "void SetLightColor(FLinearColor LightColor);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParamDelegateListener, nullptr, "SetLightColor", sizeof(ParamDelegateListener_eventSetLightColor_Parms), Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParamDelegateListener_SetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParamDelegateListener_SetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParamDelegateListener_NoRegister()
	{
		return AParamDelegateListener::StaticClass();
	}
	struct Z_Construct_UClass_AParamDelegateListener_Statics
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
	UObject* (*const Z_Construct_UClass_AParamDelegateListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParamDelegateListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParamDelegateListener_EndPlay, "EndPlay" }, // 3384055542
		{ &Z_Construct_UFunction_AParamDelegateListener_SetLightColor, "SetLightColor" }, // 4225606575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParamDelegateListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParamDelegateListener.h" },
		{ "ModuleRelativePath", "ParamDelegateListener.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParamDelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParamDelegateListener, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_SceneRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParamDelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParamDelegateListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_PointLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_PointLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParamDelegateListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParamDelegateListener_Statics::NewProp_PointLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParamDelegateListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParamDelegateListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParamDelegateListener_Statics::ClassParams = {
		&AParamDelegateListener::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParamDelegateListener_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AParamDelegateListener_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParamDelegateListener_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParamDelegateListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParamDelegateListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParamDelegateListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParamDelegateListener, 17435248);
	template<> MYPROJECTCPP_API UClass* StaticClass<AParamDelegateListener>()
	{
		return AParamDelegateListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParamDelegateListener(Z_Construct_UClass_AParamDelegateListener, &AParamDelegateListener::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AParamDelegateListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParamDelegateListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
