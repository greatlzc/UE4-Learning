// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_GravityObject_generated_h
#error "GravityObject.generated.h already included, missing '#pragma once' in GravityObject.h"
#endif
#define MYPROJECTCPP_GravityObject_generated_h

#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UGravityObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGravityObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UGravityObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UGravityObject(UGravityObject&&); \
	MYPROJECTCPP_API UGravityObject(const UGravityObject&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UGravityObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UGravityObject(UGravityObject&&); \
	MYPROJECTCPP_API UGravityObject(const UGravityObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UGravityObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGravityObject)


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGravityObject(); \
	friend struct Z_Construct_UClass_UGravityObject_Statics; \
public: \
	DECLARE_CLASS(UGravityObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), MYPROJECTCPP_API) \
	DECLARE_SERIALIZER(UGravityObject)


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGravityObject() {} \
public: \
	typedef UGravityObject UClassType; \
	typedef IGravityObject ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGravityObject() {} \
public: \
	typedef UGravityObject UClassType; \
	typedef IGravityObject ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_GravityObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_GravityObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UGravityObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_GravityObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
