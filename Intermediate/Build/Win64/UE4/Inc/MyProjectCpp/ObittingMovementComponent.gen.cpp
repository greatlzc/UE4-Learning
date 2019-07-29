// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/ObittingMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObittingMovementComponent() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UObittingMovementComponent_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UObittingMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void UObittingMovementComponent::StaticRegisterNativesUObittingMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UObittingMovementComponent_NoRegister()
	{
		return UObittingMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObittingMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateToFaceOutwards_MetaData[];
#endif
		static void NewProp_RotateToFaceOutwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateToFaceOutwards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObittingMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObittingMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ObittingMovementComponent.h" },
		{ "ModuleRelativePath", "ObittingMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_OrbitDistance_MetaData[] = {
		{ "ModuleRelativePath", "ObittingMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_OrbitDistance = { "OrbitDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObittingMovementComponent, OrbitDistance), METADATA_PARAMS(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_OrbitDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_OrbitDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "ModuleRelativePath", "ObittingMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObittingMovementComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData[] = {
		{ "ModuleRelativePath", "ObittingMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards_SetBit(void* Obj)
	{
		((UObittingMovementComponent*)Obj)->RotateToFaceOutwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards = { "RotateToFaceOutwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObittingMovementComponent), &Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObittingMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_OrbitDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObittingMovementComponent_Statics::NewProp_RotateToFaceOutwards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObittingMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObittingMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObittingMovementComponent_Statics::ClassParams = {
		&UObittingMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObittingMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UObittingMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObittingMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObittingMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObittingMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObittingMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObittingMovementComponent, 1711818668);
	template<> MYPROJECTCPP_API UClass* StaticClass<UObittingMovementComponent>()
	{
		return UObittingMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObittingMovementComponent(Z_Construct_UClass_UObittingMovementComponent, &UObittingMovementComponent::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UObittingMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObittingMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
