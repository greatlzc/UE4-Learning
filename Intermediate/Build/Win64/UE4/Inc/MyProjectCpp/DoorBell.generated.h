// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_DoorBell_generated_h
#error "DoorBell.generated.h already included, missing '#pragma once' in DoorBell.h"
#endif
#define MYPROJECTCPP_DoorBell_generated_h

#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorBell(); \
	friend struct Z_Construct_UClass_ADoorBell_Statics; \
public: \
	DECLARE_CLASS(ADoorBell, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADoorBell) \
	virtual UObject* _getUObject() const override { return const_cast<ADoorBell*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADoorBell(); \
	friend struct Z_Construct_UClass_ADoorBell_Statics; \
public: \
	DECLARE_CLASS(ADoorBell, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADoorBell) \
	virtual UObject* _getUObject() const override { return const_cast<ADoorBell*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorBell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorBell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorBell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorBell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorBell(ADoorBell&&); \
	NO_API ADoorBell(const ADoorBell&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorBell(ADoorBell&&); \
	NO_API ADoorBell(const ADoorBell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorBell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorBell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorBell)


#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_13_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_DoorBell_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ADoorBell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_DoorBell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
