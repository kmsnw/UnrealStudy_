// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDodgeballGameMode() {}

// ********** Begin Cross Module References ********************************************************
DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode();
DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADodgeballGameMode *******************************************************
void ADodgeballGameMode::StaticRegisterNativesADodgeballGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADodgeballGameMode;
UClass* ADodgeballGameMode::GetPrivateStaticClass()
{
	using TClass = ADodgeballGameMode;
	if (!Z_Registration_Info_UClass_ADodgeballGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DodgeballGameMode"),
			Z_Registration_Info_UClass_ADodgeballGameMode.InnerSingleton,
			StaticRegisterNativesADodgeballGameMode,
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
	return Z_Registration_Info_UClass_ADodgeballGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister()
{
	return ADodgeballGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADodgeballGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DodgeballGameMode.h" },
		{ "ModuleRelativePath", "DodgeballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADodgeballGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams = {
	&ADodgeballGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADodgeballGameMode()
{
	if (!Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton, Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADodgeballGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballGameMode);
ADodgeballGameMode::~ADodgeballGameMode() {}
// ********** End Class ADodgeballGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballGameMode_h__Script_Dodgeball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeballGameMode, ADodgeballGameMode::StaticClass, TEXT("ADodgeballGameMode"), &Z_Registration_Info_UClass_ADodgeballGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeballGameMode), 3589266743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballGameMode_h__Script_Dodgeball_3889478519(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballGameMode_h__Script_Dodgeball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballGameMode_h__Script_Dodgeball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
