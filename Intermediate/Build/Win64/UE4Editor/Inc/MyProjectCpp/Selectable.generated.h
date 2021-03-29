// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Selectable_generated_h
#error "Selectable.generated.h already included, missing '#pragma once' in Selectable.h"
#endif
#define MYPROJECTCPP_Selectable_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API USelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, USelectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API USelectable(USelectable&&); \
	MYPROJECTCPP_API USelectable(const USelectable&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API USelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API USelectable(USelectable&&); \
	MYPROJECTCPP_API USelectable(const USelectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, USelectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectable)


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectable(); \
	friend struct Z_Construct_UClass_USelectable_Statics; \
public: \
	DECLARE_CLASS(USelectable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), MYPROJECTCPP_API) \
	DECLARE_SERIALIZER(USelectable)


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectable() {} \
public: \
	typedef USelectable UClassType; \
	typedef ISelectable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISelectable() {} \
public: \
	typedef USelectable UClassType; \
	typedef ISelectable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Selectable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Selectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class USelectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Selectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
