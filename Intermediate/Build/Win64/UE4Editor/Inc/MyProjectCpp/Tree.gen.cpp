// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Tree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}
// Cross Module References
	MYPROJECTCPP_API UEnum* Z_Construct_UEnum_MyProjectCpp_TreeType();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ATree_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ATree();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
// End Cross Module References
	static UEnum* TreeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProjectCpp_TreeType, Z_Construct_UPackage__Script_MyProjectCpp(), TEXT("TreeType"));
		}
		return Singleton;
	}
	template<> MYPROJECTCPP_API UEnum* StaticEnum<TreeType>()
	{
		return TreeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TreeType(TreeType_StaticEnum, TEXT("/Script/MyProjectCpp"), TEXT("TreeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProjectCpp_TreeType_Hash() { return 2613622818U; }
	UEnum* Z_Construct_UEnum_MyProjectCpp_TreeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProjectCpp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TreeType"), 0, Get_Z_Construct_UEnum_MyProjectCpp_TreeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Tree_Poplar", (int64)Tree_Poplar },
				{ "Tree_Spruce", (int64)Tree_Spruce },
				{ "Tree_Eucalyptus", (int64)Tree_Eucalyptus },
				{ "Tree_Redwood", (int64)Tree_Redwood },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Tree.h" },
				{ "Tree_Eucalyptus.Name", "Tree_Eucalyptus" },
				{ "Tree_Poplar.Name", "Tree_Poplar" },
				{ "Tree_Redwood.Name", "Tree_Redwood" },
				{ "Tree_Spruce.Name", "Tree_Spruce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProjectCpp,
				nullptr,
				"TreeType",
				"TreeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATree::StaticRegisterNativesATree()
	{
	}
	UClass* Z_Construct_UClass_ATree_NoRegister()
	{
		return ATree::StaticClass();
	}
	struct Z_Construct_UClass_ATree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Tree.h" },
		{ "ModuleRelativePath", "Tree.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATree_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATree, Type), Z_Construct_UEnum_MyProjectCpp_TreeType, METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATree_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
		&ATree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATree, 4239747523);
	template<> MYPROJECTCPP_API UClass* StaticClass<ATree>()
	{
		return ATree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATree(Z_Construct_UClass_ATree, &ATree::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ATree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
