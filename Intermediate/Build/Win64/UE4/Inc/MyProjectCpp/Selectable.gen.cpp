// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Selectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectable() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_USelectable_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_USelectable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void USelectable::StaticRegisterNativesUSelectable()
	{
	}
	UClass* Z_Construct_UClass_USelectable_NoRegister()
	{
		return USelectable::StaticClass();
	}
	struct Z_Construct_UClass_USelectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Selectable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectable_Statics::ClassParams = {
		&USelectable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USelectable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USelectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectable, 320630727);
	template<> MYPROJECTCPP_API UClass* StaticClass<USelectable>()
	{
		return USelectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectable(Z_Construct_UClass_USelectable, &USelectable::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("USelectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
