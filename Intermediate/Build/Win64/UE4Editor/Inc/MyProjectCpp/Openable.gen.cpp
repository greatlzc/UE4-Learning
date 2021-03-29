// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Openable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenable() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UOpenable_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UOpenable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
// End Cross Module References
	DEFINE_FUNCTION(IOpenable::execOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open_Implementation();
		P_NATIVE_END;
	}
	void IOpenable::Open()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Open instead.");
	}
	void UOpenable::StaticRegisterNativesUOpenable()
	{
		UClass* Class = UOpenable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Open", &IOpenable::execOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenable_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenable_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Openable" },
		{ "ModuleRelativePath", "Openable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenable_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenable, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenable_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenable_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenable_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenable_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenable_NoRegister()
	{
		return UOpenable::StaticClass();
	}
	struct Z_Construct_UClass_UOpenable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenable_Open, "Open" }, // 2700242748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Openable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOpenable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenable_Statics::ClassParams = {
		&UOpenable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenable, 2863449782);
	template<> MYPROJECTCPP_API UClass* StaticClass<UOpenable>()
	{
		return UOpenable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenable(Z_Construct_UClass_UOpenable, &UOpenable::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UOpenable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenable);
	static FName NAME_UOpenable_Open = FName(TEXT("Open"));
	void IOpenable::Execute_Open(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOpenable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOpenable_Open);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IOpenable*)(O->GetNativeInterfaceAddress(UOpenable::StaticClass())))
		{
			I->Open_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
