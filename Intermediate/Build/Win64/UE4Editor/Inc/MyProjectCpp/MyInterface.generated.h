// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define MYPROJECTCPP_MyInterface_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UMyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UMyInterface(UMyInterface&&); \
	MYPROJECTCPP_API UMyInterface(const UMyInterface&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UMyInterface(UMyInterface&&); \
	MYPROJECTCPP_API UMyInterface(const UMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UMyInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface)


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
public: \
	DECLARE_CLASS(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), MYPROJECTCPP_API) \
	DECLARE_SERIALIZER(UMyInterface)


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
