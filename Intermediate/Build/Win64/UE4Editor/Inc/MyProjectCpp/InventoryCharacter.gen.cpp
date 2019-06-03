// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/InventoryCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCharacter() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AInventoryCharacter_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AInventoryCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AInventoryCharacter_DropItem();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AInventoryCharacter_NotifyHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_AInventoryCharacter_TakeItem();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	void AInventoryCharacter::StaticRegisterNativesAInventoryCharacter()
	{
		UClass* Class = AInventoryCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &AInventoryCharacter::execDropItem },
			{ "NotifyHit", &AInventoryCharacter::execNotifyHit },
			{ "TakeItem", &AInventoryCharacter::execTakeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryCharacter, nullptr, "DropItem", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryCharacter_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics
	{
		struct InventoryCharacter_eventNotifyHit_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static void NewProp_bSelfMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
	{
		((InventoryCharacter_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryCharacter_eventNotifyHit_Parms), &Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_MyComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_bSelfMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryCharacter, nullptr, "NotifyHit", sizeof(InventoryCharacter_eventNotifyHit_Parms), Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryCharacter_NotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryCharacter_NotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics
	{
		struct InventoryCharacter_eventTakeItem_Parms
		{
			AInventoryActor* InventoryItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventTakeItem_Parms, InventoryItem), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::NewProp_InventoryItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryCharacter, nullptr, "TakeItem", sizeof(InventoryCharacter_eventTakeItem_Parms), Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryCharacter_TakeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInventoryCharacter_NoRegister()
	{
		return AInventoryCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInventoryCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventoryCharacter_DropItem, "DropItem" }, // 1037500103
		{ &Z_Construct_UFunction_AInventoryCharacter_NotifyHit, "NotifyHit" }, // 1419510120
		{ &Z_Construct_UFunction_AInventoryCharacter_TakeItem, "TakeItem" }, // 163171398
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InventoryCharacter.h" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MainCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharacter, MainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MainCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MainCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory = { "MyInventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharacter, MyInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MainCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryCharacter_Statics::ClassParams = {
		&AInventoryCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryCharacter, 690273463);
	template<> MYPROJECTCPP_API UClass* StaticClass<AInventoryCharacter>()
	{
		return AInventoryCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryCharacter(Z_Construct_UClass_AInventoryCharacter, &AInventoryCharacter::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("AInventoryCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
