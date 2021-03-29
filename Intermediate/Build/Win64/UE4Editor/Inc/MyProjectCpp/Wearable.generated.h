// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYPROJECTCPP_Wearable_generated_h
#error "Wearable.generated.h already included, missing '#pragma once' in Wearable.h"
#endif
#define MYPROJECTCPP_Wearable_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_RPC_WRAPPERS \
	virtual void OnEquip_Implementation(APawn* Wearer) {}; \
	virtual bool CanEquip_Implementation(APawn* Wearer) { return false; }; \
	virtual int32 GetStrengthRequirement_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execGetStrengthRequirement);


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execCanEquip); \
	DECLARE_FUNCTION(execGetStrengthRequirement);


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_EVENT_PARMS \
	struct Wearable_eventCanEquip_Parms \
	{ \
		APawn* Wearer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventCanEquip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Wearable_eventGetStrengthRequirement_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventGetStrengthRequirement_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Wearable_eventOnEquip_Parms \
	{ \
		APawn* Wearer; \
	};


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearable(UWearable&&); \
	NO_API UWearable(const UWearable&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearable(UWearable&&); \
	NO_API UWearable(const UWearable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable)


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWearable(); \
	friend struct Z_Construct_UClass_UWearable_Statics; \
public: \
	DECLARE_CLASS(UWearable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UWearable)


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengthRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengthRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_10_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Wearable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Wearable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UWearable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Wearable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
