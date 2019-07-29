// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_PostBeginPlay_generated_h
#error "PostBeginPlay.generated.h already included, missing '#pragma once' in PostBeginPlay.h"
#endif
#define MYPROJECTCPP_PostBeginPlay_generated_h

#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPostBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPostBeginPlay(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPostBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPostBeginPlay(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostBeginPlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBeginPlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostBeginPlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBeginPlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostBeginPlay(UPostBeginPlay&&); \
	NO_API UPostBeginPlay(const UPostBeginPlay&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostBeginPlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostBeginPlay(UPostBeginPlay&&); \
	NO_API UPostBeginPlay(const UPostBeginPlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostBeginPlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBeginPlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBeginPlay)


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPostBeginPlay(); \
	friend struct Z_Construct_UClass_UPostBeginPlay_Statics; \
public: \
	DECLARE_CLASS(UPostBeginPlay, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UPostBeginPlay)


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPostBeginPlay() {} \
public: \
	typedef UPostBeginPlay UClassType; \
	typedef IPostBeginPlay ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPostBeginPlay() {} \
public: \
	typedef UPostBeginPlay UClassType; \
	typedef IPostBeginPlay ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UPostBeginPlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_PostBeginPlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
