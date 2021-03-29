// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Boots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoots() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ABoots_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ABoots();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UWearable_NoRegister();
// End Cross Module References
	void ABoots::StaticRegisterNativesABoots()
	{
	}
	UClass* Z_Construct_UClass_ABoots_NoRegister()
	{
		return ABoots::StaticClass();
	}
	struct Z_Construct_UClass_ABoots_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boots.h" },
		{ "ModuleRelativePath", "Boots.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoots_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWearable_NoRegister, (int32)VTABLE_OFFSET(ABoots, IWearable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoots>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoots_Statics::ClassParams = {
		&ABoots::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoots()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoots_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoots, 1570579133);
	template<> MYPROJECTCPP_API UClass* StaticClass<ABoots>()
	{
		return ABoots::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoots(Z_Construct_UClass_ABoots, &ABoots::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ABoots"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoots);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
