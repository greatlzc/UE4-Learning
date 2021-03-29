// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_MyGameState_generated_h
#error "MyGameState.generated.h already included, missing '#pragma once' in MyGameState.h"
#endif
#define MYPROJECTCPP_MyGameState_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execSetScore);


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend struct Z_Construct_UClass_AMyGameState_Statics; \
public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyGameState)


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend struct Z_Construct_UClass_AMyGameState_Statics; \
public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyGameState)


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameState(AMyGameState&&); \
	NO_API AMyGameState(const AMyGameState&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameState(AMyGameState&&); \
	NO_API AMyGameState(const AMyGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameState)


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentScore() { return STRUCT_OFFSET(AMyGameState, CurrentScore); }


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_12_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AMyGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
