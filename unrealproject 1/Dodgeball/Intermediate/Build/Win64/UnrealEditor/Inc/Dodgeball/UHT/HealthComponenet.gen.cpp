// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/HealthComponenet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponenet() {}

// Begin Cross Module References
DODGEBALL_API UClass* Z_Construct_UClass_AHealthComponenet();
DODGEBALL_API UClass* Z_Construct_UClass_AHealthComponenet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Class AHealthComponenet
void AHealthComponenet::StaticRegisterNativesAHealthComponenet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthComponenet);
UClass* Z_Construct_UClass_AHealthComponenet_NoRegister()
{
	return AHealthComponenet::StaticClass();
}
struct Z_Construct_UClass_AHealthComponenet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HealthComponenet.h" },
		{ "ModuleRelativePath", "HealthComponenet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthComponenet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthComponenet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthComponenet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthComponenet, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthComponenet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthComponenet_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthComponenet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHealthComponenet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthComponenet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthComponenet_Statics::ClassParams = {
	&AHealthComponenet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHealthComponenet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHealthComponenet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthComponenet_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthComponenet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealthComponenet()
{
	if (!Z_Registration_Info_UClass_AHealthComponenet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthComponenet.OuterSingleton, Z_Construct_UClass_AHealthComponenet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealthComponenet.OuterSingleton;
}
template<> DODGEBALL_API UClass* StaticClass<AHealthComponenet>()
{
	return AHealthComponenet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthComponenet);
AHealthComponenet::~AHealthComponenet() {}
// End Class AHealthComponenet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_HealthComponenet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealthComponenet, AHealthComponenet::StaticClass, TEXT("AHealthComponenet"), &Z_Registration_Info_UClass_AHealthComponenet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthComponenet), 3624315349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_HealthComponenet_h_286816723(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_HealthComponenet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_HealthComponenet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
