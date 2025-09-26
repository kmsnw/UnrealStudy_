// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RestartWidget.h"

#ifdef DODGEBALL_RestartWidget_generated_h
#error "RestartWidget.generated.h already included, missing '#pragma once' in RestartWidget.h"
#endif
#define DODGEBALL_RestartWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URestartWidget ***********************************************************
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();

#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestartWidget(); \
	friend struct Z_Construct_UClass_URestartWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(URestartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dodgeball"), Z_Construct_UClass_URestartWidget_NoRegister) \
	DECLARE_SERIALIZER(URestartWidget)


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URestartWidget(URestartWidget&&) = delete; \
	URestartWidget(const URestartWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestartWidget) \
	NO_API virtual ~URestartWidget();


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_12_PROLOG
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URestartWidget;

// ********** End Class URestartWidget *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_RestartWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
