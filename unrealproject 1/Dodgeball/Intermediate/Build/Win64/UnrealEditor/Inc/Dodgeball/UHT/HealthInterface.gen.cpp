// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/HealthInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface();
DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Interface UHealthInterface Function OnDeath
void IHealthInterface::OnDeath()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeath instead.");
}
static FName NAME_UHealthInterface_OnDeath = FName(TEXT("OnDeath"));
void IHealthInterface::Execute_OnDeath(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UHealthInterface_OnDeath);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
	{
		I->OnDeath_Implementation();
	}
}
struct Z_Construct_UFunction_UHealthInterface_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 \xeb\x8b\xa4 \xec\x86\x8c\xec\xa7\x84\xeb\x90\x90\xec\x9d\x84 \xeb\x95\x8c(0) \xed\x98\xb8\xec\xb6\x9c\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "HealthInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 \xeb\x8b\xa4 \xec\x86\x8c\xec\xa7\x84\xeb\x90\x90\xec\x9d\x84 \xeb\x95\x8c(0) \xed\x98\xb8\xec\xb6\x9c\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthInterface_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHealthInterface::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath_Implementation();
	P_NATIVE_END;
}
// End Interface UHealthInterface Function OnDeath

// Begin Interface UHealthInterface Function OnTakeDamage
void IHealthInterface::OnTakeDamage()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTakeDamage instead.");
}
static FName NAME_UHealthInterface_OnTakeDamage = FName(TEXT("OnTakeDamage"));
void IHealthInterface::Execute_OnTakeDamage(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UHealthInterface_OnTakeDamage);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
	{
		I->OnTakeDamage_Implementation();
	}
}
struct Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//=0\xec\x9d\x80 \xec\x9d\xb4 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xea\xb5\xac\xed\x98\x84\xec\x9d\xb4 \xec\x97\x86\xeb\x8b\xa4\xeb\x8a\x94 \xea\xb2\x83\xec\x9d\x84 \xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc\xeb\x9f\xac\xec\x97\x90 \xec\x95\x8c\xeb\xa6\xbc\n" },
#endif
		{ "ModuleRelativePath", "HealthInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=0\xec\x9d\x80 \xec\x9d\xb4 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xea\xb5\xac\xed\x98\x84\xec\x9d\xb4 \xec\x97\x86\xeb\x8b\xa4\xeb\x8a\x94 \xea\xb2\x83\xec\x9d\x84 \xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc\xeb\x9f\xac\xec\x97\x90 \xec\x95\x8c\xeb\xa6\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "OnTakeDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthInterface_OnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHealthInterface::execOnTakeDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakeDamage_Implementation();
	P_NATIVE_END;
}
// End Interface UHealthInterface Function OnTakeDamage

// Begin Interface UHealthInterface
void UHealthInterface::StaticRegisterNativesUHealthInterface()
{
	UClass* Class = UHealthInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDeath", &IHealthInterface::execOnDeath },
		{ "OnTakeDamage", &IHealthInterface::execOnTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthInterface);
UClass* Z_Construct_UClass_UHealthInterface_NoRegister()
{
	return UHealthInterface::StaticClass();
}
struct Z_Construct_UClass_UHealthInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthInterface_OnDeath, "OnDeath" }, // 2708423686
		{ &Z_Construct_UFunction_UHealthInterface_OnTakeDamage, "OnTakeDamage" }, // 3844835372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealthInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthInterface_Statics::ClassParams = {
	&UHealthInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthInterface()
{
	if (!Z_Registration_Info_UClass_UHealthInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthInterface.OuterSingleton, Z_Construct_UClass_UHealthInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthInterface.OuterSingleton;
}
template<> DODGEBALL_API UClass* StaticClass<UHealthInterface>()
{
	return UHealthInterface::StaticClass();
}
UHealthInterface::UHealthInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthInterface);
UHealthInterface::~UHealthInterface() {}
// End Interface UHealthInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthInterface, UHealthInterface::StaticClass, TEXT("UHealthInterface"), &Z_Registration_Info_UClass_UHealthInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthInterface), 1956199041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_2753750364(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
