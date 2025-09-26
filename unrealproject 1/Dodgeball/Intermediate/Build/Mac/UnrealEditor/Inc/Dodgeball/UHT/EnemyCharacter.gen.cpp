// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/EnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister();
DODGEBALL_API UClass* Z_Construct_UClass_AEnemyCharacter();
DODGEBALL_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyCharacter **********************************************************
void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyCharacter;
UClass* AEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AEnemyCharacter;
	if (!Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyCharacter"),
			Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAEnemyCharacter,
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
	return Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
{
	return AEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtActorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LookAt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeballClass_MetaData[] = {
		{ "Category", "Dodgeball" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAtActorComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DodgeballClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_LookAtActorComponent = { "LookAtActorComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, LookAtActorComponent), Z_Construct_UClass_ULookAtActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtActorComponent_MetaData), NewProp_LookAtActorComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DodgeballClass = { "DodgeballClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, DodgeballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADodgeballProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeballClass_MetaData), NewProp_DodgeballClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_LookAtActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DodgeballClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
	&AEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
AEnemyCharacter::~AEnemyCharacter() {}
// ********** End Class AEnemyCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_EnemyCharacter_h__Script_Dodgeball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 3314404548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_EnemyCharacter_h__Script_Dodgeball_218976644(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_EnemyCharacter_h__Script_Dodgeball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_EnemyCharacter_h__Script_Dodgeball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
