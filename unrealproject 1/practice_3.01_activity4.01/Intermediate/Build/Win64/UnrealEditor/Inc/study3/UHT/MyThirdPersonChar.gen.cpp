// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "study3/MyThirdPersonChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPersonChar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
STUDY3_API UClass* Z_Construct_UClass_AMyThirdPersonChar();
STUDY3_API UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister();
UPackage* Z_Construct_UPackage__Script_study3();
// End Cross Module References

// Begin Class AMyThirdPersonChar
void AMyThirdPersonChar::StaticRegisterNativesAMyThirdPersonChar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyThirdPersonChar);
UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister()
{
	return AMyThirdPersonChar::StaticClass();
}
struct Z_Construct_UClass_AMyThirdPersonChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyThirdPersonChar.h" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My_TPS_Cam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "My_TPS_Cam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xeb\x94\xb0\xeb\x9d\xbc\xeb\x8b\xa4\xeb\x8b\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc(\xed\x8c\x94\xeb\xa1\x9c\xec\x9a\xb0 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xeb\x94\xb0\xeb\x9d\xbc\xeb\x8b\xa4\xeb\x8b\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc(\xed\x8c\x94\xeb\xa1\x9c\xec\x9a\xb0 \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IC_Character_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Walk_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IC_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Walk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IC_Character = { "IC_Character", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, IC_Character), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IC_Character_MetaData), NewProp_IC_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Walk = { "IA_Walk", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyThirdPersonChar, IA_Walk), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Walk_MetaData), NewProp_IA_Walk_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IC_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyThirdPersonChar_Statics::NewProp_IA_Walk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_study3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams = {
	&AMyThirdPersonChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyThirdPersonChar()
{
	if (!Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton, Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyThirdPersonChar.OuterSingleton;
}
template<> STUDY3_API UClass* StaticClass<AMyThirdPersonChar>()
{
	return AMyThirdPersonChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdPersonChar);
AMyThirdPersonChar::~AMyThirdPersonChar() {}
// End Class AMyThirdPersonChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_practice_3_01_activity4_01_study3_Source_study3_MyThirdPersonChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyThirdPersonChar, AMyThirdPersonChar::StaticClass, TEXT("AMyThirdPersonChar"), &Z_Registration_Info_UClass_AMyThirdPersonChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdPersonChar), 4007543087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_practice_3_01_activity4_01_study3_Source_study3_MyThirdPersonChar_h_2766070731(TEXT("/Script/study3"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_practice_3_01_activity4_01_study3_Source_study3_MyThirdPersonChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_unrealproject_practice_3_01_activity4_01_study3_Source_study3_MyThirdPersonChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
