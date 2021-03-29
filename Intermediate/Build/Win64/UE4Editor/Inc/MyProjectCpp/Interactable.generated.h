// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define MYPROJECTCPP_Interactable_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_RPC_WRAPPERS \
	virtual void PerformInteract_Implementation() {}; \
	virtual bool CanInteract_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPerformInteract); \
	DECLARE_FUNCTION(execCanInteract);


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPerformInteract); \
	DECLARE_FUNCTION(execCanInteract);


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_EVENT_PARMS \
	struct Interactable_eventCanInteract_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UInteractable(UInteractable&&); \
	MYPROJECTCPP_API UInteractable(const UInteractable&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECTCPP_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECTCPP_API UInteractable(UInteractable&&); \
	MYPROJECTCPP_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECTCPP_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), MYPROJECTCPP_API) \
	DECLARE_SERIALIZER(UInteractable)


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_10_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
