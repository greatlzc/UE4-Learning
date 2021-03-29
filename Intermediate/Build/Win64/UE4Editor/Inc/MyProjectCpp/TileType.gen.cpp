// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/TileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileType() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UTileType_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UTileType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	void UTileType::StaticRegisterNativesUTileType()
	{
	}
	UClass* Z_Construct_UClass_UTileType_NoRegister()
	{
		return UTileType::StaticClass();
	}
	struct Z_Construct_UClass_UTileType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeBuiltOn_MetaData[];
#endif
		static void NewProp_CanBeBuiltOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeBuiltOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovementCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TileType.h" },
		{ "ModuleRelativePath", "TileType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileType_Statics::NewProp_TileName_MetaData[] = {
		{ "ModuleRelativePath", "TileType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTileType_Statics::NewProp_TileName = { "TileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileType, TileName), METADATA_PARAMS(Z_Construct_UClass_UTileType_Statics::NewProp_TileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileType_Statics::NewProp_TileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn_MetaData[] = {
		{ "ModuleRelativePath", "TileType.h" },
	};
#endif
	void Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn_SetBit(void* Obj)
	{
		((UTileType*)Obj)->CanBeBuiltOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn = { "CanBeBuiltOn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileType), &Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileType_Statics::NewProp_MovementCost_MetaData[] = {
		{ "ModuleRelativePath", "TileType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileType_Statics::NewProp_MovementCost = { "MovementCost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileType, MovementCost), METADATA_PARAMS(Z_Construct_UClass_UTileType_Statics::NewProp_MovementCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileType_Statics::NewProp_MovementCost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileType_Statics::NewProp_TileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileType_Statics::NewProp_CanBeBuiltOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileType_Statics::NewProp_MovementCost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileType_Statics::ClassParams = {
		&UTileType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileType, 3934498703);
	template<> MYPROJECTCPP_API UClass* StaticClass<UTileType>()
	{
		return UTileType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileType(Z_Construct_UClass_UTileType, &UTileType::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UTileType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
