// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Snail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnail() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASnail_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASnail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UUndead_NoRegister();
// End Cross Module References
	void ASnail::StaticRegisterNativesASnail()
	{
	}
	UClass* Z_Construct_UClass_ASnail_NoRegister()
	{
		return ASnail::StaticClass();
	}
	struct Z_Construct_UClass_ASnail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Snail.h" },
		{ "ModuleRelativePath", "Snail.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASnail_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUndead_NoRegister, (int32)VTABLE_OFFSET(ASnail, IUndead), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnail_Statics::ClassParams = {
		&ASnail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASnail_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASnail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnail, 2997194924);
	template<> MYPROJECTCPP_API UClass* StaticClass<ASnail>()
	{
		return ASnail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnail(Z_Construct_UClass_ASnail, &ASnail::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ASnail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
