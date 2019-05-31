// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/MyProjectCppHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectCppHUD() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyProjectCppHUD_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyProjectCppHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void AMyProjectCppHUD::StaticRegisterNativesAMyProjectCppHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectCppHUD_NoRegister()
	{
		return AMyProjectCppHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectCppHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectCppHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCppHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyProjectCppHUD.h" },
		{ "ModuleRelativePath", "MyProjectCppHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectCppHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectCppHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectCppHUD_Statics::ClassParams = {
		&AMyProjectCppHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectCppHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCppHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectCppHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectCppHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectCppHUD, 927409121);
	template<> MYPROJECTCPP_API UClass* StaticClass<AMyProjectCppHUD>()
	{
		return AMyProjectCppHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectCppHUD(Z_Construct_UClass_AMyProjectCppHUD, &AMyProjectCppHUD::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AMyProjectCppHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectCppHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
