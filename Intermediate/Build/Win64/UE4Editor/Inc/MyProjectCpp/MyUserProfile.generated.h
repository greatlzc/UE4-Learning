// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_MyUserProfile_generated_h
#error "MyUserProfile.generated.h already included, missing '#pragma once' in MyUserProfile.h"
#endif
#define MYPROJECTCPP_MyUserProfile_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColoredTexture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MYPROJECTCPP_API UScriptStruct* StaticStruct<struct FColoredTexture>();

#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString);


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString);


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserProfile(); \
	friend struct Z_Construct_UClass_UMyUserProfile_Statics; \
public: \
	DECLARE_CLASS(UMyUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UMyUserProfile)


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMyUserProfile(); \
	friend struct Z_Construct_UClass_UMyUserProfile_Statics; \
public: \
	DECLARE_CLASS(UMyUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UMyUserProfile)


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserProfile(UMyUserProfile&&); \
	NO_API UMyUserProfile(const UMyUserProfile&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserProfile(UMyUserProfile&&); \
	NO_API UMyUserProfile(const UMyUserProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserProfile)


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_31_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UMyUserProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyUserProfile_h


#define FOREACH_ENUM_STATUS(op) \
	op(Stopped) \
	op(Moving) \
	op(Attacking) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
