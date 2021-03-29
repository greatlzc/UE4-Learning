// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECTCPP_CustomButtonWidget_generated_h
#error "CustomButtonWidget.generated.h already included, missing '#pragma once' in CustomButtonWidget.h"
#endif
#define MYPROJECTCPP_CustomButtonWidget_generated_h

#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_16_DELEGATE \
static inline void FButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& ButtonClicked) \
{ \
	ButtonClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_15_DELEGATE \
struct _Script_MyProjectCpp_eventGetString_Parms \
{ \
	FString ReturnValue; \
}; \
static inline FString FGetString_DelegateWrapper(const FScriptDelegate& GetString) \
{ \
	_Script_MyProjectCpp_eventGetString_Parms Parms; \
	GetString.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomButtonWidget(); \
	friend struct Z_Construct_UClass_UCustomButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomButtonWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UCustomButtonWidget)


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCustomButtonWidget(); \
	friend struct Z_Construct_UClass_UCustomButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomButtonWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UCustomButtonWidget)


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButtonWidget(UCustomButtonWidget&&); \
	NO_API UCustomButtonWidget(const UCustomButtonWidget&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButtonWidget(UCustomButtonWidget&&); \
	NO_API UCustomButtonWidget(const UCustomButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomButtonWidget)


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_17_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class UCustomButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_CustomButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
