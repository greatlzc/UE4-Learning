// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/PhysicsCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCube() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APhysicsCube_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APhysicsCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UGravityObject_NoRegister();
// End Cross Module References
	void APhysicsCube::StaticRegisterNativesAPhysicsCube()
	{
	}
	UClass* Z_Construct_UClass_APhysicsCube_NoRegister()
	{
		return APhysicsCube::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsCube.h" },
		{ "ModuleRelativePath", "PhysicsCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsCube_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "PhysicsCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhysicsCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsCube_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsCube, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsCube_Statics::NewProp_MyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsCube_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsCube_Statics::NewProp_MyMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APhysicsCube_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGravityObject_NoRegister, (int32)VTABLE_OFFSET(APhysicsCube, IGravityObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsCube_Statics::ClassParams = {
		&APhysicsCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsCube_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APhysicsCube_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsCube, 1687720738);
	template<> MYPROJECTCPP_API UClass* StaticClass<APhysicsCube>()
	{
		return APhysicsCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsCube(Z_Construct_UClass_APhysicsCube, &APhysicsCube::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("APhysicsCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
