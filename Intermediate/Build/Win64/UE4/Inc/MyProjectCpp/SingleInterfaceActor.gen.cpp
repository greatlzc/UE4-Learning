// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/SingleInterfaceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleInterfaceActor() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASingleInterfaceActor_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ASingleInterfaceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
// End Cross Module References
	void ASingleInterfaceActor::StaticRegisterNativesASingleInterfaceActor()
	{
	}
	UClass* Z_Construct_UClass_ASingleInterfaceActor_NoRegister()
	{
		return ASingleInterfaceActor::StaticClass();
	}
	struct Z_Construct_UClass_ASingleInterfaceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingleInterfaceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleInterfaceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleInterfaceActor.h" },
		{ "ModuleRelativePath", "SingleInterfaceActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASingleInterfaceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(ASingleInterfaceActor, IMyInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingleInterfaceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingleInterfaceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingleInterfaceActor_Statics::ClassParams = {
		&ASingleInterfaceActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASingleInterfaceActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASingleInterfaceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingleInterfaceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingleInterfaceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingleInterfaceActor, 518178564);
	template<> MYPROJECTCPP_API UClass* StaticClass<ASingleInterfaceActor>()
	{
		return ASingleInterfaceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleInterfaceActor(Z_Construct_UClass_ASingleInterfaceActor, &ASingleInterfaceActor::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ASingleInterfaceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleInterfaceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
