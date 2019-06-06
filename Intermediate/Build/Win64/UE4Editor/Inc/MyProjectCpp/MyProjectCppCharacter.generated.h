// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECTCPP_MyProjectCppCharacter_generated_h
#error "MyProjectCppCharacter.generated.h already included, missing '#pragma once' in MyProjectCppCharacter.h"
#endif
#define MYPROJECTCPP_MyProjectCppCharacter_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_RPC_WRAPPERS \
	virtual void OnOverlapsBegin_Implementation(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execOnOverlapsBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapsBegin_Implementation(Z_Param_Comp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOverlapsBegin_Implementation(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execOnOverlapsBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapsBegin_Implementation(Z_Param_Comp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_EVENT_PARMS \
	struct MyProjectCppCharacter_eventOnOverlapsBegin_Parms \
	{ \
		UPrimitiveComponent* Comp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_CALLBACK_WRAPPERS
#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCppCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCppCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCppCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCppCharacter)


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCppCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCppCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCppCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCppCharacter)


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCppCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCppCharacter(AMyProjectCppCharacter&&); \
	NO_API AMyProjectCppCharacter(const AMyProjectCppCharacter&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCppCharacter(AMyProjectCppCharacter&&); \
	NO_API AMyProjectCppCharacter(const AMyProjectCppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCppCharacter)


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMyProjectCppCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMyProjectCppCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMyProjectCppCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMyProjectCppCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMyProjectCppCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMyProjectCppCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMyProjectCppCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMyProjectCppCharacter, L_MotionController); }


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_11_PROLOG \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_EVENT_PARMS


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_CALLBACK_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AMyProjectCppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyProjectCppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
