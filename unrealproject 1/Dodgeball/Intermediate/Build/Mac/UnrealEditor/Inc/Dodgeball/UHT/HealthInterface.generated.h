// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthInterface.h"

#ifdef DODGEBALL_HealthInterface_generated_h
#error "HealthInterface.generated.h already included, missing '#pragma once' in HealthInterface.h"
#endif
#define DODGEBALL_HealthInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UHealthInterface *****************************************************
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execOnDeath);


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_CALLBACK_WRAPPERS
DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister();

#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DODGEBALL_API UHealthInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthInterface(UHealthInterface&&) = delete; \
	UHealthInterface(const UHealthInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DODGEBALL_API, UHealthInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthInterface) \
	virtual ~UHealthInterface() = default;


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHealthInterface(); \
	friend struct Z_Construct_UClass_UHealthInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Dodgeball"), Z_Construct_UClass_UHealthInterface_NoRegister) \
	DECLARE_SERIALIZER(UHealthInterface)


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHealthInterface() {} \
public: \
	typedef UHealthInterface UClassType; \
	typedef IHealthInterface ThisClass; \
	static void Execute_OnDeath(UObject* O); \
	static void Execute_OnTakeDamage(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_10_PROLOG
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_CALLBACK_WRAPPERS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthInterface;

// ********** End Interface UHealthInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_HealthInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
