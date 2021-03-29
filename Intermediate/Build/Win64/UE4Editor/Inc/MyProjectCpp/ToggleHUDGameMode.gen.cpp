// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/ToggleHUDGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleHUDGameMode() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AToggleHUDGameMode_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AToggleHUDGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void AToggleHUDGameMode::StaticRegisterNativesAToggleHUDGameMode()
	{
	}
	UClass* Z_Construct_UClass_AToggleHUDGameMode_NoRegister()
	{
		return AToggleHUDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AToggleHUDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDToggleTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDToggleTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToggleHUDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToggleHUDGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ToggleHUDGameMode.h" },
		{ "ModuleRelativePath", "ToggleHUDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToggleHUDGameMode_Statics::NewProp_HUDToggleTimer_MetaData[] = {
		{ "ModuleRelativePath", "ToggleHUDGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AToggleHUDGameMode_Statics::NewProp_HUDToggleTimer = { "HUDToggleTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AToggleHUDGameMode, HUDToggleTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AToggleHUDGameMode_Statics::NewProp_HUDToggleTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToggleHUDGameMode_Statics::NewProp_HUDToggleTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToggleHUDGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToggleHUDGameMode_Statics::NewProp_HUDToggleTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToggleHUDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToggleHUDGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToggleHUDGameMode_Statics::ClassParams = {
		&AToggleHUDGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AToggleHUDGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AToggleHUDGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AToggleHUDGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToggleHUDGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToggleHUDGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToggleHUDGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToggleHUDGameMode, 3585332478);
	template<> MYPROJECTCPP_API UClass* StaticClass<AToggleHUDGameMode>()
	{
		return AToggleHUDGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToggleHUDGameMode(Z_Construct_UClass_AToggleHUDGameMode, &AToggleHUDGameMode::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AToggleHUDGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToggleHUDGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
