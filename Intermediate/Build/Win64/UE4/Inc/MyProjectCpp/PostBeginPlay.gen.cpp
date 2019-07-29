// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/PostBeginPlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBeginPlay() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UPostBeginPlay_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UPostBeginPlay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay();
// End Cross Module References
	void UPostBeginPlay::StaticRegisterNativesUPostBeginPlay()
	{
		UClass* Class = UPostBeginPlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPostBeginPlay", &IPostBeginPlay::execOnPostBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "PostBeginPlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostBeginPlay, nullptr, "OnPostBeginPlay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPostBeginPlay_NoRegister()
	{
		return UPostBeginPlay::StaticClass();
	}
	struct Z_Construct_UClass_UPostBeginPlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostBeginPlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostBeginPlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostBeginPlay_OnPostBeginPlay, "OnPostBeginPlay" }, // 519921999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostBeginPlay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PostBeginPlay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostBeginPlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPostBeginPlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostBeginPlay_Statics::ClassParams = {
		&UPostBeginPlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPostBeginPlay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPostBeginPlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostBeginPlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostBeginPlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostBeginPlay, 2148452119);
	template<> MYPROJECTCPP_API UClass* StaticClass<UPostBeginPlay>()
	{
		return UPostBeginPlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostBeginPlay(Z_Construct_UClass_UPostBeginPlay, &UPostBeginPlay::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UPostBeginPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostBeginPlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
