// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/AttackAvoider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackAvoider() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UAttackAvoider_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UAttackAvoider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UAttackAvoider_AttackIncoming();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void IAttackAvoider::AttackIncoming(AActor* AttackActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AttackIncoming instead.");
	}
	void UAttackAvoider::StaticRegisterNativesUAttackAvoider()
	{
	}
	struct Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::NewProp_AttackActor = { "AttackActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttackAvoider_eventAttackIncoming_Parms, AttackActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::NewProp_AttackActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackAvoider" },
		{ "ModuleRelativePath", "AttackAvoider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackAvoider, nullptr, "AttackIncoming", sizeof(AttackAvoider_eventAttackIncoming_Parms), Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttackAvoider_AttackIncoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttackAvoider_AttackIncoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttackAvoider_NoRegister()
	{
		return UAttackAvoider::StaticClass();
	}
	struct Z_Construct_UClass_UAttackAvoider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackAvoider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttackAvoider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackAvoider_AttackIncoming, "AttackIncoming" }, // 115303784
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackAvoider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttackAvoider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackAvoider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAttackAvoider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackAvoider_Statics::ClassParams = {
		&UAttackAvoider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackAvoider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAttackAvoider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackAvoider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackAvoider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackAvoider, 1939840699);
	template<> MYPROJECTCPP_API UClass* StaticClass<UAttackAvoider>()
	{
		return UAttackAvoider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackAvoider(Z_Construct_UClass_UAttackAvoider, &UAttackAvoider::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UAttackAvoider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackAvoider);
	static FName NAME_UAttackAvoider_AttackIncoming = FName(TEXT("AttackIncoming"));
	void IAttackAvoider::Execute_AttackIncoming(UObject* O, AActor* AttackActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAttackAvoider::StaticClass()));
		AttackAvoider_eventAttackIncoming_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAttackAvoider_AttackIncoming);
		if (Func)
		{
			Parms.AttackActor=AttackActor;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
