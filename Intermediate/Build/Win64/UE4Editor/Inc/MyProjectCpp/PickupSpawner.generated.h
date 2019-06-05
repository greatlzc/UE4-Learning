// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_PickupSpawner_generated_h
#error "PickupSpawner.generated.h already included, missing '#pragma once' in PickupSpawner.h"
#endif
#define MYPROJECTCPP_PickupSpawner_generated_h

#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPickup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupCollected(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPickup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupCollected(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupSpawner)


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_9_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class APickupSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_PickupSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
