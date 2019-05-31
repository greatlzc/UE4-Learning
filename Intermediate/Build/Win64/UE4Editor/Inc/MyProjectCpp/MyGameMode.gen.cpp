// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/MyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AMyGameMode_DestroyActorFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UMyUserProfile_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AMyFirstActor_NoRegister();
// End Cross Module References
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
		UClass* Class = AMyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActorFunction", &AMyGameMode::execDestroyActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "DestroyActorFunction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameMode_DestroyActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameMode_DestroyActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameMode_DestroyActorFunction, "DestroyActorFunction" }, // 3359240378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::NewProp_UPClassName_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_UPClassName = { "UPClassName", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode, UPClassName), Z_Construct_UClass_UMyUserProfile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameMode_Statics::NewProp_UPClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::NewProp_UPClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode, SpawnedActor), Z_Construct_UClass_AMyFirstActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameMode_Statics::NewProp_SpawnedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::NewProp_SpawnedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_UPClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_SpawnedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
		&AMyGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameMode, 3380891076);
	template<> MYPROJECTCPP_API UClass* StaticClass<AMyGameMode>()
	{
		return AMyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameMode(Z_Construct_UClass_AMyGameMode, &AMyGameMode::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AMyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
