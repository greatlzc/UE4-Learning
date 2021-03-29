// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECTCPP_MyProjectCppProjectile_generated_h
#error "MyProjectCppProjectile.generated.h already included, missing '#pragma once' in MyProjectCppProjectile.h"
#endif
#define MYPROJECTCPP_MyProjectCppProjectile_generated_h

#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_SPARSE_DATA
#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCppProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectCppProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCppProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectCppProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCppProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCppProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCppProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCppProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCppProjectile(AMyProjectCppProjectile&&); \
	NO_API AMyProjectCppProjectile(const AMyProjectCppProjectile&); \
public:


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCppProjectile(AMyProjectCppProjectile&&); \
	NO_API AMyProjectCppProjectile(const AMyProjectCppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCppProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCppProjectile)


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyProjectCppProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProjectCppProjectile, ProjectileMovement); }


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_9_PROLOG
#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_RPC_WRAPPERS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_INCLASS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_SPARSE_DATA \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECTCPP_API UClass* StaticClass<class AMyProjectCppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectCpp_Source_MyProjectCpp_MyProjectCppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
