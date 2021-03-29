// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/PickupSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSpawner() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APickupSpawner_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APickupSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_APickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickupSpawner::execSpawnPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPickup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupSpawner::execPickupCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickupCollected();
		P_NATIVE_END;
	}
	void APickupSpawner::StaticRegisterNativesAPickupSpawner()
	{
		UClass* Class = APickupSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickupCollected", &APickupSpawner::execPickupCollected },
			{ "SpawnPickup", &APickupSpawner::execSpawnPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSpawner, nullptr, "PickupCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupSpawner_PickupCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupSpawner_PickupCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSpawner, nullptr, "SpawnPickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupSpawner_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupSpawner_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupSpawner_NoRegister()
	{
		return APickupSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APickupSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupSpawner_PickupCollected, "PickupCollected" }, // 2583366860
		{ &Z_Construct_UFunction_APickupSpawner_SpawnPickup, "SpawnPickup" }, // 1813791293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupSpawner.h" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::NewProp_CurrentPickup_MetaData[] = {
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupSpawner_Statics::NewProp_CurrentPickup = { "CurrentPickup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawner, CurrentPickup), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::NewProp_CurrentPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::NewProp_CurrentPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawner, SpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawner_Statics::NewProp_CurrentPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupSpawner_Statics::ClassParams = {
		&APickupSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupSpawner, 3952754240);
	template<> MYPROJECTCPP_API UClass* StaticClass<APickupSpawner>()
	{
		return APickupSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupSpawner(Z_Construct_UClass_APickupSpawner, &APickupSpawner::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("APickupSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
