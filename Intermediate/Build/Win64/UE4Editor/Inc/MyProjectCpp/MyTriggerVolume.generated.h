// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECTCPP_MyTriggerVolume_generated_h
#error "MyTriggerVolume.generated.h already included, missing '#pragma once' in MyTriggerVolume.h"
#endif
#define MYPROJECTCPP_MyTriggerVolume_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend struct Z_Construct_UClass_AMyTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume)


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend struct Z_Construct_UClass_AMyTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerVolume, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume)


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTriggerVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTriggerVolume)


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_10_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AMyTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
