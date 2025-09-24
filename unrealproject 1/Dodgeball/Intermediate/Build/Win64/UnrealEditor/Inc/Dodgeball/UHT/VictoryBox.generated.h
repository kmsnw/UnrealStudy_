// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DODGEBALL_VictoryBox_generated_h
#error "VictoryBox.generated.h already included, missing '#pragma once' in VictoryBox.h"
#endif
#define DODGEBALL_VictoryBox_generated_h

#define FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVictoryBox(AVictoryBox&&); \
	AVictoryBox(const AVictoryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryBox) \
	NO_API virtual ~AVictoryBox();


#define FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_9_PROLOG
#define FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class AVictoryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seonwoo_Desktop_GitHub__UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
