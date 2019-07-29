// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/SlateHUDGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateHUDGameMode() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASlateHUDGameMode_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASlateHUDGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void ASlateHUDGameMode::StaticRegisterNativesASlateHUDGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASlateHUDGameMode_NoRegister()
	{
		return ASlateHUDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASlateHUDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlateHUDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlateHUDGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SlateHUDGameMode.h" },
		{ "ModuleRelativePath", "SlateHUDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlateHUDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlateHUDGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlateHUDGameMode_Statics::ClassParams = {
		&ASlateHUDGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASlateHUDGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlateHUDGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlateHUDGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlateHUDGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlateHUDGameMode, 575551675);
	template<> MYPROJECTCPP_API UClass* StaticClass<ASlateHUDGameMode>()
	{
		return ASlateHUDGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlateHUDGameMode(Z_Construct_UClass_ASlateHUDGameMode, &ASlateHUDGameMode::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ASlateHUDGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlateHUDGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
