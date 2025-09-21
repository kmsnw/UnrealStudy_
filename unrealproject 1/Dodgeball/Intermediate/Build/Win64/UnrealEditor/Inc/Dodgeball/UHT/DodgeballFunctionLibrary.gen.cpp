// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballFunctionLibrary() {}

// Begin Cross Module References
DODGEBALL_API UClass* Z_Construct_UClass_UDodgeballFunctionLibrary();
DODGEBALL_API UClass* Z_Construct_UClass_UDodgeballFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Class UDodgeballFunctionLibrary
void UDodgeballFunctionLibrary::StaticRegisterNativesUDodgeballFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDodgeballFunctionLibrary);
UClass* Z_Construct_UClass_UDodgeballFunctionLibrary_NoRegister()
{
	return UDodgeballFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UDodgeballFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DodgeballFunctionLibrary.h" },
		{ "ModuleRelativePath", "DodgeballFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDodgeballFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::ClassParams = {
	&UDodgeballFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDodgeballFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UDodgeballFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDodgeballFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDodgeballFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDodgeballFunctionLibrary.OuterSingleton;
}
template<> DODGEBALL_API UClass* StaticClass<UDodgeballFunctionLibrary>()
{
	return UDodgeballFunctionLibrary::StaticClass();
}
UDodgeballFunctionLibrary::UDodgeballFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDodgeballFunctionLibrary);
UDodgeballFunctionLibrary::~UDodgeballFunctionLibrary() {}
// End Class UDodgeballFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDodgeballFunctionLibrary, UDodgeballFunctionLibrary::StaticClass, TEXT("UDodgeballFunctionLibrary"), &Z_Registration_Info_UClass_UDodgeballFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDodgeballFunctionLibrary), 1160226226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballFunctionLibrary_h_1669860001(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
