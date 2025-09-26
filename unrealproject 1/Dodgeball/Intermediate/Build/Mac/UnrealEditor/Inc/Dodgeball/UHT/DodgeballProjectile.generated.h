// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DodgeballProjectile.h"

#ifdef DODGEBALL_DodgeballProjectile_generated_h
#error "DodgeballProjectile.generated.h already included, missing '#pragma once' in DodgeballProjectile.h"
#endif
#define DODGEBALL_DodgeballProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ADodgeballProjectile *****************************************************
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnhit);


DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister();

#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballProjectile(); \
	friend struct Z_Construct_UClass_ADodgeballProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ADodgeballProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), Z_Construct_UClass_ADodgeballProjectile_NoRegister) \
	DECLARE_SERIALIZER(ADodgeballProjectile)


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADodgeballProjectile(ADodgeballProjectile&&) = delete; \
	ADodgeballProjectile(const ADodgeballProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADodgeballProjectile) \
	NO_API virtual ~ADodgeballProjectile();


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_11_PROLOG
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADodgeballProjectile;

// ********** End Class ADodgeballProjectile *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_DodgeballProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
