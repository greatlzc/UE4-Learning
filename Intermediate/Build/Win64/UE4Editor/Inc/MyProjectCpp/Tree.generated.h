// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Tree_generated_h
#error "Tree.generated.h already included, missing '#pragma once' in Tree.h"
#endif
#define MYPROJECTCPP_Tree_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATree)


#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_Tree_h_20_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Tree_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Tree_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ATree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Tree_h


#define FOREACH_ENUM_TREETYPE(op) \
	op(Tree_Poplar) \
	op(Tree_Spruce) \
	op(Tree_Eucalyptus) \
	op(Tree_Redwood) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
