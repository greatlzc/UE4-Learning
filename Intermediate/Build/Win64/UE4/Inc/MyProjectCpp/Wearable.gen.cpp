// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/Wearable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWearable() {}
// Cross Module References
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UWearable_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UWearable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UWearable_CanEquip();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UWearable_GetStrengthRequirement();
	MYPROJECTCPP_API UFunction* Z_Construct_UFunction_UWearable_OnEquip();
// End Cross Module References
	bool IWearable::CanEquip(APawn* Wearer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanEquip instead.");
		Wearable_eventCanEquip_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IWearable::GetStrengthRequirement()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStrengthRequirement instead.");
		Wearable_eventGetStrengthRequirement_Parms Parms;
		return Parms.ReturnValue;
	}
	void IWearable::OnEquip(APawn* Wearer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEquip instead.");
	}
	void UWearable::StaticRegisterNativesUWearable()
	{
		UClass* Class = UWearable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEquip", &IWearable::execCanEquip },
			{ "GetStrengthRequirement", &IWearable::execGetStrengthRequirement },
			{ "OnEquip", &IWearable::execOnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWearable_CanEquip_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wearer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Wearable_eventCanEquip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Wearable_eventCanEquip_Parms), &Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_Wearer = { "Wearer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wearable_eventCanEquip_Parms, Wearer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearable_CanEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearable_CanEquip_Statics::NewProp_Wearer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearable_CanEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wearable" },
		{ "ModuleRelativePath", "Wearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearable_CanEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearable, nullptr, "CanEquip", sizeof(Wearable_eventCanEquip_Parms), Z_Construct_UFunction_UWearable_CanEquip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWearable_CanEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearable_CanEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWearable_CanEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearable_CanEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWearable_CanEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wearable_eventGetStrengthRequirement_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wearable" },
		{ "ModuleRelativePath", "Wearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearable, nullptr, "GetStrengthRequirement", sizeof(Wearable_eventGetStrengthRequirement_Parms), Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearable_GetStrengthRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWearable_GetStrengthRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearable_OnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wearer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWearable_OnEquip_Statics::NewProp_Wearer = { "Wearer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wearable_eventOnEquip_Parms, Wearer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearable_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearable_OnEquip_Statics::NewProp_Wearer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearable_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wearable" },
		{ "ModuleRelativePath", "Wearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearable_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearable, nullptr, "OnEquip", sizeof(Wearable_eventOnEquip_Parms), Z_Construct_UFunction_UWearable_OnEquip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWearable_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearable_OnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWearable_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearable_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWearable_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWearable_NoRegister()
	{
		return UWearable::StaticClass();
	}
	struct Z_Construct_UClass_UWearable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWearable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWearable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWearable_CanEquip, "CanEquip" }, // 1886979286
		{ &Z_Construct_UFunction_UWearable_GetStrengthRequirement, "GetStrengthRequirement" }, // 1557439953
		{ &Z_Construct_UFunction_UWearable_OnEquip, "OnEquip" }, // 2919883011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Wearable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWearable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWearable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWearable_Statics::ClassParams = {
		&UWearable::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWearable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWearable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWearable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWearable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWearable, 830184609);
	template<> MYPROJECTCPP_API UClass* StaticClass<UWearable>()
	{
		return UWearable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWearable(Z_Construct_UClass_UWearable, &UWearable::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UWearable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWearable);
	static FName NAME_UWearable_CanEquip = FName(TEXT("CanEquip"));
	bool IWearable::Execute_CanEquip(UObject* O, APawn* Wearer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWearable::StaticClass()));
		Wearable_eventCanEquip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWearable_CanEquip);
		if (Func)
		{
			Parms.Wearer=Wearer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWearable*)(O->GetNativeInterfaceAddress(UWearable::StaticClass())))
		{
			Parms.ReturnValue = I->CanEquip_Implementation(Wearer);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWearable_GetStrengthRequirement = FName(TEXT("GetStrengthRequirement"));
	int32 IWearable::Execute_GetStrengthRequirement(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWearable::StaticClass()));
		Wearable_eventGetStrengthRequirement_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWearable_GetStrengthRequirement);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWearable*)(O->GetNativeInterfaceAddress(UWearable::StaticClass())))
		{
			Parms.ReturnValue = I->GetStrengthRequirement_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UWearable_OnEquip = FName(TEXT("OnEquip"));
	void IWearable::Execute_OnEquip(UObject* O, APawn* Wearer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWearable::StaticClass()));
		Wearable_eventOnEquip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWearable_OnEquip);
		if (Func)
		{
			Parms.Wearer=Wearer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWearable*)(O->GetNativeInterfaceAddress(UWearable::StaticClass())))
		{
			I->OnEquip_Implementation(Wearer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
