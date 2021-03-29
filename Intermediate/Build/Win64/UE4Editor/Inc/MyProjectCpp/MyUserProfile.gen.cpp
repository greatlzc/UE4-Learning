// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProjectCpp/MyUserProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserProfile() {}
// Cross Module References
	MYPROJECTCPP_API UEnum* Z_Construct_UEnum_MyProjectCpp_Status();
	UPackage* Z_Construct_UPackage__Script_MyProjectCpp();
	MYPROJECTCPP_API UScriptStruct* Z_Construct_UScriptStruct_FColoredTexture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UMyUserProfile_NoRegister();
	MYPROJECTCPP_API UClass* Z_Construct_UClass_UMyUserProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* Status_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProjectCpp_Status, Z_Construct_UPackage__Script_MyProjectCpp(), TEXT("Status"));
		}
		return Singleton;
	}
	template<> MYPROJECTCPP_API UEnum* StaticEnum<Status>()
	{
		return Status_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Status(Status_StaticEnum, TEXT("/Script/MyProjectCpp"), TEXT("Status"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProjectCpp_Status_Hash() { return 2448442877U; }
	UEnum* Z_Construct_UEnum_MyProjectCpp_Status()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProjectCpp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Status"), 0, Get_Z_Construct_UEnum_MyProjectCpp_Status_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Stopped", (int64)Stopped },
				{ "Moving", (int64)Moving },
				{ "Attacking", (int64)Attacking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacking.DisplayName", "Attacking" },
				{ "Attacking.Name", "Attacking" },
				{ "ModuleRelativePath", "MyUserProfile.h" },
				{ "Moving.DisplayName", "Moving" },
				{ "Moving.Name", "Moving" },
				{ "Stopped.DisplayName", "Stopped" },
				{ "Stopped.Name", "Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProjectCpp,
				nullptr,
				"Status",
				"Status",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FColoredTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECTCPP_API uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColoredTexture, Z_Construct_UPackage__Script_MyProjectCpp(), TEXT("ColoredTexture"), sizeof(FColoredTexture), Get_Z_Construct_UScriptStruct_FColoredTexture_Hash());
	}
	return Singleton;
}
template<> MYPROJECTCPP_API UScriptStruct* StaticStruct<FColoredTexture>()
{
	return FColoredTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColoredTexture(FColoredTexture::StaticStruct, TEXT("/Script/MyProjectCpp"), TEXT("ColoredTexture"), false, nullptr, nullptr);
static struct FScriptStruct_MyProjectCpp_StaticRegisterNativesFColoredTexture
{
	FScriptStruct_MyProjectCpp_StaticRegisterNativesFColoredTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColoredTexture")),new UScriptStruct::TCppStructOps<FColoredTexture>);
	}
} ScriptStruct_MyProjectCpp_StaticRegisterNativesFColoredTexture;
	struct Z_Construct_UScriptStruct_FColoredTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColoredTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColoredTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColoredTexture, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColoredTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColoredTexture_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColoredTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
		nullptr,
		&NewStructOps,
		"ColoredTexture",
		sizeof(FColoredTexture),
		alignof(FColoredTexture),
		Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColoredTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColoredTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProjectCpp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColoredTexture"), sizeof(FColoredTexture), Get_Z_Construct_UScriptStruct_FColoredTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColoredTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColoredTexture_Hash() { return 2855799595U; }
	DEFINE_FUNCTION(UMyUserProfile::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	void UMyUserProfile::StaticRegisterNativesUMyUserProfile()
	{
		UClass* Class = UMyUserProfile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UMyUserProfile::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyUserProfile_ToString_Statics
	{
		struct MyUserProfile_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyUserProfile_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyUserProfile_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserProfile_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserProfile_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserProfile_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prop" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserProfile_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserProfile, nullptr, "ToString", nullptr, nullptr, sizeof(MyUserProfile_eventToString_Parms), Z_Construct_UFunction_UMyUserProfile_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserProfile_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserProfile_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserProfile_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserProfile_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserProfile_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyUserProfile_NoRegister()
	{
		return UMyUserProfile::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UClassGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UClassOfPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProjectCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyUserProfile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserProfile_ToString, "ToString" }, // 2272621475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * my user profile\n */" },
		{ "IncludePath", "MyUserProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
		{ "ToolTip", "my user profile" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::NewProp_status_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyUserProfile_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserProfile, status), Z_Construct_UEnum_MyProjectCpp_Status, METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserProfile, Texture), Z_Construct_UScriptStruct_FColoredTexture, METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassGameMode_MetaData[] = {
		{ "Category", "Unit" },
		{ "Comment", "//Display any UClass\n" },
		{ "MetaClass", "GameMode" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
		{ "ToolTip", "Display any UClass" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassGameMode = { "UClassGameMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserProfile, UClassGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassOfPlayer_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassOfPlayer = { "UClassOfPlayer", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserProfile, UClassOfPlayer), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassOfPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassOfPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyUserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserProfile, Name), METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserProfile_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserProfile_Statics::NewProp_UClassOfPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserProfile_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserProfile_Statics::ClassParams = {
		&UMyUserProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyUserProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserProfile, 3978059918);
	template<> MYPROJECTCPP_API UClass* StaticClass<UMyUserProfile>()
	{
		return UMyUserProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserProfile(Z_Construct_UClass_UMyUserProfile, &UMyUserProfile::StaticClass, TEXT("/Script/MyProjectCpp"), TEXT("UMyUserProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
