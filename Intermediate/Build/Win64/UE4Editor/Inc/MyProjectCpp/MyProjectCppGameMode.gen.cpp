// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/MyProjectCppGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectCppGameMode() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyProjectCppGameMode_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyProjectCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void AMyProjectCppGameMode::StaticRegisterNativesAMyProjectCppGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectCppGameMode_NoRegister()
	{
		return AMyProjectCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectCppGameMode.h" },
		{ "ModuleRelativePath", "MyProjectCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectCppGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectCppGameMode_Statics::ClassParams = {
		&AMyProjectCppGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectCppGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectCppGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectCppGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectCppGameMode, 4022259132);
	template<> MYPROJECTCPP_API UClass* StaticClass<AMyProjectCppGameMode>()
	{
		return AMyProjectCppGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectCppGameMode(Z_Construct_UClass_AMyProjectCppGameMode, &AMyProjectCppGameMode::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AMyProjectCppGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectCppGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
