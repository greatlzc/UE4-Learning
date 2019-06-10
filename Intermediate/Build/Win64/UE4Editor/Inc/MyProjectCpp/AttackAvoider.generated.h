// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECTCPP_AttackAvoider_generated_h
#error "AttackAvoider.generated.h already included, missing '#pragma once' in AttackAvoider.h"
#endif
#define MYPROJECTCPP_AttackAvoider_generated_h

#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_EVENT_PARMS \
	struct AttackAvoider_eventAttackIncoming_Parms \
	{ \
		AActor* AttackActor; \
	};


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UAttackAvoider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackAvoider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UAttackAvoider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackAvoider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UAttackAvoider(UAttackAvoider&&); \
	MYPROJECTCPP_API UAttackAvoider(const UAttackAvoider&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UAttackAvoider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UAttackAvoider(UAttackAvoider&&); \
	MYPROJECTCPP_API UAttackAvoider(const UAttackAvoider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UAttackAvoider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackAvoider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackAvoider)


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttackAvoider(); \
	friend struct Z_Construct_UClass_UAttackAvoider_Statics; \
public: \
	DECLARE_CLASS(UAttackAvoider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), MYPROJECTCPP_API) \
	DECLARE_SERIALIZER(UAttackAvoider)


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttackAvoider() {} \
public: \
	typedef UAttackAvoider UClassType; \
	typedef IAttackAvoider ThisClass; \
	static void Execute_AttackIncoming(UObject* O, AActor* AttackActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAttackAvoider() {} \
public: \
	typedef UAttackAvoider UClassType; \
	typedef IAttackAvoider ThisClass; \
	static void Execute_AttackIncoming(UObject* O, AActor* AttackActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_10_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UAttackAvoider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_AttackAvoider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
