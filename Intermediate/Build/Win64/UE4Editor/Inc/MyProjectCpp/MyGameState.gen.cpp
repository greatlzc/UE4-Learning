// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/MyGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AMyGameState_GetScore();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AMyGameState_SetScore();
// End Cross Module References
	void AMyGameState::StaticRegisterNativesAMyGameState()
	{
		UClass* Class = AMyGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &AMyGameState::execGetScore },
			{ "SetScore", &AMyGameState::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameState_GetScore_Statics
	{
		struct MyGameState_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameState_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "GetScore", sizeof(MyGameState_eventGetScore_Parms), Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameState_GetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameState_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameState_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameState_SetScore_Statics
	{
		struct MyGameState_eventSetScore_Parms
		{
			int32 NewScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameState_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameState_eventSetScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_SetScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameState_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "SetScore", sizeof(MyGameState_eventSetScore_Parms), Z_Construct_UFunction_AMyGameState_SetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameState_SetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameState_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameState_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameState_NoRegister()
	{
		return AMyGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameState_GetScore, "GetScore" }, // 1808008775
		{ &Z_Construct_UFunction_AMyGameState_SetScore, "SetScore" }, // 1419544838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameState.h" },
		{ "ModuleRelativePath", "MyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "MyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameState, CurrentScore), METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameState_Statics::ClassParams = {
		&AMyGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameState, 3110736261);
	template<> MYPROJECTCPP_API UClass* StaticClass<AMyGameState>()
	{
		return AMyGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameState(Z_Construct_UClass_AMyGameState, &AMyGameState::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AMyGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
