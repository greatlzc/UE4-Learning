// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/TalkingMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTalkingMesh() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ATalkingMesh_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_ATalkingMesh();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UTalker_NoRegister();
// End Cross Module References
	void ATalkingMesh::StaticRegisterNativesATalkingMesh()
	{
	}
	UClass* Z_Construct_UClass_ATalkingMesh_NoRegister()
	{
		return ATalkingMesh::StaticClass();
	}
	struct Z_Construct_UClass_ATalkingMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATalkingMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATalkingMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "TalkingMesh.h" },
		{ "ModuleRelativePath", "TalkingMesh.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATalkingMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTalker_NoRegister, (int32)VTABLE_OFFSET(ATalkingMesh, ITalker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATalkingMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATalkingMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATalkingMesh_Statics::ClassParams = {
		&ATalkingMesh::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATalkingMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATalkingMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATalkingMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATalkingMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATalkingMesh, 4151462643);
	template<> MYPROJECTCPP_API UClass* StaticClass<ATalkingMesh>()
	{
		return ATalkingMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATalkingMesh(Z_Construct_UClass_ATalkingMesh, &ATalkingMesh::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("ATalkingMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATalkingMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
