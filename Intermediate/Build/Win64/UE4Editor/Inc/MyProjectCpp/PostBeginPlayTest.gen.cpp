// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/PostBeginPlayTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBeginPlayTest() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APostBeginPlayTest_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APostBeginPlayTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UPostBeginPlay_NoRegister();
// End Cross Module References
	void APostBeginPlayTest::StaticRegisterNativesAPostBeginPlayTest()
	{
	}
	UClass* Z_Construct_UClass_APostBeginPlayTest_NoRegister()
	{
		return APostBeginPlayTest::StaticClass();
	}
	struct Z_Construct_UClass_APostBeginPlayTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostBeginPlayTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PostBeginPlayTest.h" },
		{ "ModuleRelativePath", "PostBeginPlayTest.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APostBeginPlayTest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPostBeginPlay_NoRegister, (int32)VTABLE_OFFSET(APostBeginPlayTest, IPostBeginPlay), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostBeginPlayTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostBeginPlayTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostBeginPlayTest_Statics::ClassParams = {
		&APostBeginPlayTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostBeginPlayTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostBeginPlayTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostBeginPlayTest, 270837292);
	template<> MYPROJECTCPP_API UClass* StaticClass<APostBeginPlayTest>()
	{
		return APostBeginPlayTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostBeginPlayTest(Z_Construct_UClass_APostBeginPlayTest, &APostBeginPlayTest::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("APostBeginPlayTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostBeginPlayTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
