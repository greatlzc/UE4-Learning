// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCppEditor/CustomAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAssetFactory() {}
// Cross Module References
	MYPROJECTCPPEDITOR_API UClass* Z_Construct_UClass_UCustomAssetFactory_NoRegister();
	MYPROJECTCPPEDITOR_API UClass* Z_Construct_UClass_UCustomAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MyProjectCppEditor();
// End Cross Module References
	void UCustomAssetFactory::StaticRegisterNativesUCustomAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UCustomAssetFactory_NoRegister()
	{
		return UCustomAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCustomAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCppEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomAssetFactory.h" },
		{ "ModuleRelativePath", "CustomAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomAssetFactory_Statics::ClassParams = {
		&UCustomAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomAssetFactory, 4167972728);
	template<> MYPROJECTCPPEDITOR_API UClass* StaticClass<UCustomAssetFactory>()
	{
		return UCustomAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomAssetFactory(Z_Construct_UClass_UCustomAssetFactory, &UCustomAssetFactory::StaticClass, TEXT("/Script/MyProjectCppEditor"), TEXT("UCustomAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
