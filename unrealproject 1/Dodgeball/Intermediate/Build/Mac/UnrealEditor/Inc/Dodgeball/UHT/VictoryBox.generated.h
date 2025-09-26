// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBox.h"

#ifdef DODGEBALL_VictoryBox_generated_h
#error "VictoryBox.generated.h already included, missing '#pragma once' in VictoryBox.h"
#endif
#define DODGEBALL_VictoryBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AVictoryBox **************************************************************
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap);


DODGEBALL_API UClass* Z_Construct_UClass_AVictoryBox_NoRegister();

#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DODGEBALL_API UClass* Z_Construct_UClass_AVictoryBox_NoRegister(); \
public: \
	DECLARE_CLASS2(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), Z_Construct_UClass_AVictoryBox_NoRegister) \
	DECLARE_SERIALIZER(AVictoryBox)


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVictoryBox(AVictoryBox&&) = delete; \
	AVictoryBox(const AVictoryBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryBox) \
	NO_API virtual ~AVictoryBox();


#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_9_PROLOG
#define FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVictoryBox;

// ********** End Class AVictoryBox ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kmsnw_Documents_GitHub_UnrealStudy__unrealproject_1_Dodgeball_Source_Dodgeball_VictoryBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
