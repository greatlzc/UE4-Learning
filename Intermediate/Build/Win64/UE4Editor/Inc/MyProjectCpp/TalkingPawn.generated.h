// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECTCPP_TalkingPawn_generated_h
#error "TalkingPawn.generated.h already included, missing '#pragma once' in TalkingPawn.h"
#endif
#define MYPROJECTCPP_TalkingPawn_generated_h

#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTalkOverlap);


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTalkOverlap);


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn)


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn)


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATalkingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATalkingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATalkingPawn)


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_13_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ATalkingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_TalkingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
