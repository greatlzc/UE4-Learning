// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_DelegateListener_generated_h
#error "DelegateListener.generated.h already included, missing '#pragma once' in DelegateListener.h"
#endif
#define MYPROJECTCPP_DelegateListener_generated_h

#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelegateListener(); \
	friend struct Z_Construct_UClass_ADelegateListener_Statics; \
public: \
	DECLARE_CLASS(ADelegateListener, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADelegateListener(); \
	friend struct Z_Construct_UClass_ADelegateListener_Statics; \
public: \
	DECLARE_CLASS(ADelegateListener, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ADelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADelegateListener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADelegateListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADelegateListener(ADelegateListener&&); \
	NO_API ADelegateListener(const ADelegateListener&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADelegateListener(ADelegateListener&&); \
	NO_API ADelegateListener(const ADelegateListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelegateListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelegateListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_9_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_DelegateListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ADelegateListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_DelegateListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
