// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define MYPROJECTCPP_Door_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpen_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpen_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_Door_h_14_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Door_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Door_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
