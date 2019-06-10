// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Talker_generated_h
#error "Talker.generated.h already included, missing '#pragma once' in Talker.h"
#endif
#define MYPROJECTCPP_Talker_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_RPC_WRAPPERS \
	virtual void StartTalking_Implementation() {}; \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTalking_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTalking_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_EVENT_PARMS
#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTalker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTalker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTalker(UTalker&&); \
	NO_API UTalker(const UTalker&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTalker(UTalker&&); \
	NO_API UTalker(const UTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTalker)


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTalker(); \
	friend struct Z_Construct_UClass_UTalker_Statics; \
public: \
	DECLARE_CLASS(UTalker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UTalker)


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITalker() {} \
public: \
	typedef UTalker UClassType; \
	typedef ITalker ThisClass; \
	static void Execute_StartTalking(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITalker() {} \
public: \
	typedef UTalker UClassType; \
	typedef ITalker ThisClass; \
	static void Execute_StartTalking(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_10_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Talker_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Talker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UTalker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Talker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
