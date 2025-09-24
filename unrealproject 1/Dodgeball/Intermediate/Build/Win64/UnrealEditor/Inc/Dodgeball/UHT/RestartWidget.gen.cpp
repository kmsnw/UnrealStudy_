// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/RestartWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestartWidget() {}

// Begin Cross Module References
DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget();
DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References

// Begin Class URestartWidget Function OnExitClicked
struct Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URestartWidget_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URestartWidget::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class URestartWidget Function OnExitClicked

// Begin Class URestartWidget Function OnRestartClicked
struct Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnRestartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URestartWidget_OnRestartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URestartWidget::execOnRestartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartClicked();
	P_NATIVE_END;
}
// End Class URestartWidget Function OnRestartClicked

// Begin Class URestartWidget
void URestartWidget::StaticRegisterNativesURestartWidget()
{
	UClass* Class = URestartWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitClicked", &URestartWidget::execOnExitClicked },
		{ "OnRestartClicked", &URestartWidget::execOnRestartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestartWidget);
UClass* Z_Construct_UClass_URestartWidget_NoRegister()
{
	return URestartWidget::StaticClass();
}
struct Z_Construct_UClass_URestartWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RestartWidget.h" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URestartWidget_OnExitClicked, "OnExitClicked" }, // 1776925941
		{ &Z_Construct_UFunction_URestartWidget_OnRestartClicked, "OnRestartClicked" }, // 1475496952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestartWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URestartWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartButton_MetaData), NewProp_RestartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URestartWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestartWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URestartWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URestartWidget_Statics::ClassParams = {
	&URestartWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URestartWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URestartWidget()
{
	if (!Z_Registration_Info_UClass_URestartWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestartWidget.OuterSingleton, Z_Construct_UClass_URestartWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URestartWidget.OuterSingleton;
}
template<> DODGEBALL_API UClass* StaticClass<URestartWidget>()
{
	return URestartWidget::StaticClass();
}
URestartWidget::URestartWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URestartWidget);
URestartWidget::~URestartWidget() {}
// End Class URestartWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URestartWidget, URestartWidget::StaticClass, TEXT("URestartWidget"), &Z_Registration_Info_UClass_URestartWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestartWidget), 1679716443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_4247256321(TEXT("/Script/Dodgeball"),
	Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
