// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Barracks_generated_h
#error "Barracks.generated.h already included, missing '#pragma once' in Barracks.h"
#endif
#define MYPROJECTCPP_Barracks_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execSpawnUnit);


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execSpawnUnit);


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarracks(); \
	friend struct Z_Construct_UClass_ABarracks_Statics; \
public: \
	DECLARE_CLASS(ABarracks, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ABarracks)


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABarracks(); \
	friend struct Z_Construct_UClass_ABarracks_Statics; \
public: \
	DECLARE_CLASS(ABarracks, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ABarracks)


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarracks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarracks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarracks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarracks(ABarracks&&); \
	NO_API ABarracks(const ABarracks&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarracks(ABarracks&&); \
	NO_API ABarracks(const ABarracks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarracks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarracks)


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Barracks_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ABarracks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Barracks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
