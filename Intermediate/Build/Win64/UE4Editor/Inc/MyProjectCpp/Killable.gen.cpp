// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Killable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillable() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UKillable_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UKillable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UKillable_Die();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UKillable_IsDead();
// End Cross Module References
	void UKillable::StaticRegisterNativesUKillable()
	{
		UClass* Class = UKillable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &IKillable::execDie },
			{ "IsDead", &IKillable::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillable_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillable_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "Killable" },
		{ "ModuleRelativePath", "Killable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillable_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillable, nullptr, "Die", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillable_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKillable_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillable_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillable_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillable_IsDead_Statics
	{
		struct Killable_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKillable_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Killable_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKillable_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Killable_eventIsDead_Parms), &Z_Construct_UFunction_UKillable_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillable_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillable_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillable_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Killable" },
		{ "ModuleRelativePath", "Killable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillable_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillable, nullptr, "IsDead", sizeof(Killable_eventIsDead_Parms), Z_Construct_UFunction_UKillable_IsDead_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKillable_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillable_IsDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKillable_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillable_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillable_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillable_NoRegister()
	{
		return UKillable::StaticClass();
	}
	struct Z_Construct_UClass_UKillable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillable_Die, "Die" }, // 1937953769
		{ &Z_Construct_UFunction_UKillable_IsDead, "IsDead" }, // 1251103626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillable_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Killable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKillable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillable_Statics::ClassParams = {
		&UKillable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKillable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKillable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillable, 2779388212);
	template<> MYPROJECTCPP_API UClass* StaticClass<UKillable>()
	{
		return UKillable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillable(Z_Construct_UClass_UKillable, &UKillable::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UKillable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
