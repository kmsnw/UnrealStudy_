// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/LookAtActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtActorComponent() {}

// Begin Cross Module References
DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent();
DODGEBALL_API UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Class ULookAtActorComponent
void ULookAtActorComponent::StaticRegisterNativesULookAtActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookAtActorComponent);
UClass* Z_Construct_UClass_ULookAtActorComponent_NoRegister()
{
	return ULookAtActorComponent::StaticClass();
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
template<> DODGEBALL_API UClass* StaticClass<ULookAtActorComponent>()
{
	return ULookAtActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtActorComponent);
ULookAtActorComponent::~ULookAtActorComponent() {}
// End Class ULookAtActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtActorComponent, ULookAtActorComponent::StaticClass, TEXT("ULookAtActorComponent"), &Z_Registration_Info_UClass_ULookAtActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtActorComponent), 1600766277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h_1905526194(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_LookAtActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
