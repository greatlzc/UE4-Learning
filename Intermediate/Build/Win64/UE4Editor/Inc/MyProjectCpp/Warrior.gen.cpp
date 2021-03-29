// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Warrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarrior() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AWarrior();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void AWarrior::StaticRegisterNativesAWarrior()
	{
	}
	UClass* Z_Construct_UClass_AWarrior_NoRegister()
	{
		return AWarrior::StaticClass();
	}
	struct Z_Construct_UClass_AWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Warrior.h" },
		{ "ModuleRelativePath", "Warrior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarrior_Statics::ClassParams = {
		&AWarrior::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarrior, 3126846624);
	template<> MYPROJECTCPP_API UClass* StaticClass<AWarrior>()
	{
		return AWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarrior(Z_Construct_UClass_AWarrior, &AWarrior::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
