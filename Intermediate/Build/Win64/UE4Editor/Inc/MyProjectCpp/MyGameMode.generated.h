// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define MYPROJECTCPP_MyGameMode_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActorFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActorFunction(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActorFunction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActorFunction(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameMode)


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_18_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AMyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
