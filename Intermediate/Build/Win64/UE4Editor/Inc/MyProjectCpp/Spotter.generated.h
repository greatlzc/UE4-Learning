// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYPROJECTCPP_Spotter_generated_h
#error "Spotter.generated.h already included, missing '#pragma once' in Spotter.h"
#endif
#define MYPROJECTCPP_Spotter_generated_h

#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_RPC_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_EVENT_PARMS \
	struct Spotter_eventOnPlayerSpotted_Parms \
	{ \
		APawn* Player; \
	};


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpotter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpotter)


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_12_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class ASpotter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_Spotter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
