// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/BarracksUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarracksUnit() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ABarracksUnit_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ABarracksUnit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ABarracksUnit::StaticRegisterNativesABarracksUnit()
	{
	}
	UClass* Z_Construct_UClass_ABarracksUnit_NoRegister()
	{
		return ABarracksUnit::StaticClass();
	}
	struct Z_Construct_UClass_ABarracksUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarracksUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracksUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BarracksUnit.h" },
		{ "ModuleRelativePath", "BarracksUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarracksUnit_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BarracksUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarracksUnit_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarracksUnit, SpawnPoint), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarracksUnit_Statics::NewProp_SpawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarracksUnit_Statics::NewProp_SpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarracksUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarracksUnit_Statics::NewProp_SpawnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarracksUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarracksUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarracksUnit_Statics::ClassParams = {
		&ABarracksUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarracksUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABarracksUnit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABarracksUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABarracksUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarracksUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarracksUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarracksUnit, 2953560749);
	template<> MYPROJECTCPP_API UClass* StaticClass<ABarracksUnit>()
	{
		return ABarracksUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarracksUnit(Z_Construct_UClass_ABarracksUnit, &ABarracksUnit::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ABarracksUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarracksUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
