// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/LookAtActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLookAtActorComponent() {}

// ********** Begin Cross Module References ********************************************************
DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent();
DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULookAtActorComponent ****************************************************
void ULookAtActorComponent::StaticRegisterNativesULookAtActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULookAtActorComponent;
UClass* ULookAtActorComponent::GetPrivateStaticClass()
{
	using TClass = ULookAtActorComponent;
	if (!Z_Registration_Info_UClass_ULookAtActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LookAtActorComponent"),
			Z_Registration_Info_UClass_ULookAtActorComponent.InnerSingleton,
			StaticRegisterNativesULookAtActorComponent,
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
	return Z_Registration_Info_UClass_ULookAtActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister()
{
	return ULookAtActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULookAtActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LookAtActorComponent.h" },
		{ "ModuleRelativePath", "LookAtActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULookAtActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtActorComponent_Statics::ClassParams = {
	&ULookAtActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookAtActorComponent()
{
	if (!Z_Registration_Info_UClass_ULookAtActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtActorComponent.OuterSingleton, Z_Construct_UClass_ULookAtActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookAtActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtActorComponent);
ULookAtActorComponent::~ULookAtActorComponent() {}
// ********** End Class ULookAtActorComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h__Script_Dodgeball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtActorComponent, ULookAtActorComponent::StaticClass, TEXT("ULookAtActorComponent"), &Z_Registration_Info_UClass_ULookAtActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtActorComponent), 2890658866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h__Script_Dodgeball_2191981865(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h__Script_Dodgeball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h__Script_Dodgeball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
