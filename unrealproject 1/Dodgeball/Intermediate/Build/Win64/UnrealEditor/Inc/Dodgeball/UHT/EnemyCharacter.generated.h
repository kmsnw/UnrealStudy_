// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define DODGEBALL_EnemyCharacter_generated_h

#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&); \
	AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_13_PROLOG
#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
