// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef MYPROJECTCPP_ParamDelegateListener_generated_h
#error "ParamDelegateListener.generated.h already included, missing '#pragma once' in ParamDelegateListener.h"
#endif
#define MYPROJECTCPP_ParamDelegateListener_generated_h

#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_LightColor); \
		P_GET_UBOOL(Z_Param_EnableLight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_LightColor,Z_Param_EnableLight); \
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


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_LightColor); \
		P_GET_UBOOL(Z_Param_EnableLight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_LightColor,Z_Param_EnableLight); \
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


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParamDelegateListener(); \
	friend struct Z_Construct_UClass_AParamDelegateListener_Statics; \
public: \
	DECLARE_CLASS(AParamDelegateListener, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AParamDelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParamDelegateListener(); \
	friend struct Z_Construct_UClass_AParamDelegateListener_Statics; \
public: \
	DECLARE_CLASS(AParamDelegateListener, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AParamDelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParamDelegateListener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParamDelegateListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParamDelegateListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParamDelegateListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParamDelegateListener(AParamDelegateListener&&); \
	NO_API AParamDelegateListener(const AParamDelegateListener&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParamDelegateListener(AParamDelegateListener&&); \
	NO_API AParamDelegateListener(const AParamDelegateListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParamDelegateListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParamDelegateListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParamDelegateListener)


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_9_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AParamDelegateListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_ParamDelegateListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
