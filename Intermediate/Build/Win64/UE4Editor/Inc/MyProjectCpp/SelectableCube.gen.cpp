// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/SelectableCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectableCube() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASelectableCube_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASelectableCube();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APhysicsCube();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_USelectable_NoRegister();
// End Cross Module References
	void ASelectableCube::StaticRegisterNativesASelectableCube()
	{
	}
	UClass* Z_Construct_UClass_ASelectableCube_NoRegister()
	{
		return ASelectableCube::StaticClass();
	}
	struct Z_Construct_UClass_ASelectableCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelectableCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsCube,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectableCube.h" },
		{ "ModuleRelativePath", "SelectableCube.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASelectableCube_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USelectable_NoRegister, (int32)VTABLE_OFFSET(ASelectableCube, ISelectable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelectableCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectableCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelectableCube_Statics::ClassParams = {
		&ASelectableCube::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASelectableCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASelectableCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelectableCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelectableCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelectableCube, 3887091031);
	template<> MYPROJECTCPP_API UClass* StaticClass<ASelectableCube>()
	{
		return ASelectableCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelectableCube(Z_Construct_UClass_ASelectableCube, &ASelectableCube::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ASelectableCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectableCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
