// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DodgeballCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_DodgeballCharacter_generated_h
#error "DodgeballCharacter.generated.h already included, missing '#pragma once' in DodgeballCharacter.h"
#endif
#define DODGEBALL_DodgeballCharacter_generated_h

#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballCharacter(); \
	friend struct Z_Construct_UClass_ADodgeballCharacter_Statics; \
public: \
	DECLARE_CLASS(ADodgeballCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADodgeballCharacter*>(this); }


#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADodgeballCharacter(ADodgeballCharacter&&); \
	ADodgeballCharacter(const ADodgeballCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADodgeballCharacter) \
	NO_API virtual ~ADodgeballCharacter();


#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_20_PROLOG
#define FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class ADodgeballCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seonwoo_Desktop_unrealproject_Dodgeball_Source_Dodgeball_DodgeballCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
