// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_PhysicsCube_generated_h
#error "PhysicsCube.generated.h already included, missing '#pragma once' in PhysicsCube.h"
#endif
#define MYPROJECTCPP_PhysicsCube_generated_h

#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsCube(); \
	friend struct Z_Construct_UClass_APhysicsCube_Statics; \
public: \
	DECLARE_CLASS(APhysicsCube, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APhysicsCube) \
	virtual UObject* _getUObject() const override { return const_cast<APhysicsCube*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsCube(); \
	friend struct Z_Construct_UClass_APhysicsCube_Statics; \
public: \
	DECLARE_CLASS(APhysicsCube, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APhysicsCube) \
	virtual UObject* _getUObject() const override { return const_cast<APhysicsCube*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsCube(APhysicsCube&&); \
	NO_API APhysicsCube(const APhysicsCube&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsCube(APhysicsCube&&); \
	NO_API APhysicsCube(const APhysicsCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsCube)


#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class APhysicsCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_PhysicsCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
