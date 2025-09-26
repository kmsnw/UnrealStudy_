// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballProjectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDodgeballProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile();
DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADodgeballProjectile Function Onhit **************************************
struct Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics
{
	struct DodgeballProjectile_eventOnhit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnhit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnhit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnhit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnhit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnhit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADodgeballProjectile, nullptr, "Onhit", Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::DodgeballProjectile_eventOnhit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::DodgeballProjectile_eventOnhit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADodgeballProjectile_Onhit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADodgeballProjectile_Onhit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADodgeballProjectile::execOnhit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Onhit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ADodgeballProjectile Function Onhit ****************************************

// ********** Begin Class ADodgeballProjectile *****************************************************
void ADodgeballProjectile::StaticRegisterNativesADodgeballProjectile()
{
	UClass* Class = ADodgeballProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Onhit", &ADodgeballProjectile::execOnhit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADodgeballProjectile;
UClass* ADodgeballProjectile::GetPrivateStaticClass()
{
	using TClass = ADodgeballProjectile;
	if (!Z_Registration_Info_UClass_ADodgeballProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DodgeballProjectile"),
			Z_Registration_Info_UClass_ADodgeballProjectile.InnerSingleton,
			StaticRegisterNativesADodgeballProjectile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADodgeballProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister()
{
	return ADodgeballProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADodgeballProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DodgeballProjectile.h" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "ture" },
		{ "Category", "Dodgeball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "ture" },
		{ "Category", "Dodgeball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damege_MetaData[] = {
		{ "Category", "Damege" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damege;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADodgeballProjectile_Onhit, "Onhit" }, // 2139887870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damege = { "Damege", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, Damege), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damege_MetaData), NewProp_Damege_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADodgeballProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballProjectile_Statics::ClassParams = {
	&ADodgeballProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ADodgeballProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADodgeballProjectile()
{
	if (!Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton, Z_Construct_UClass_ADodgeballProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballProjectile);
ADodgeballProjectile::~ADodgeballProjectile() {}
// ********** End Class ADodgeballProjectile *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h__Script_Dodgeball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeballProjectile, ADodgeballProjectile::StaticClass, TEXT("ADodgeballProjectile"), &Z_Registration_Info_UClass_ADodgeballProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeballProjectile), 1933224834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h__Script_Dodgeball_3555323736(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h__Script_Dodgeball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h__Script_Dodgeball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
