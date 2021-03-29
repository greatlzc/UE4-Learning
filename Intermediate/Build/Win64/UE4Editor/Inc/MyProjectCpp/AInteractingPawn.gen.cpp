// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/AInteractingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAInteractingPawn() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AAInteractingPawn_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AAInteractingPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void AAInteractingPawn::StaticRegisterNativesAAInteractingPawn()
	{
	}
	UClass* Z_Construct_UClass_AAInteractingPawn_NoRegister()
	{
		return AAInteractingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAInteractingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAInteractingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAInteractingPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AInteractingPawn.h" },
		{ "ModuleRelativePath", "AInteractingPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAInteractingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAInteractingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAInteractingPawn_Statics::ClassParams = {
		&AAInteractingPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAInteractingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAInteractingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAInteractingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAInteractingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAInteractingPawn, 1928368282);
	template<> MYPROJECTCPP_API UClass* StaticClass<AAInteractingPawn>()
	{
		return AAInteractingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAInteractingPawn(Z_Construct_UClass_AAInteractingPawn, &AAInteractingPawn::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AAInteractingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAInteractingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
