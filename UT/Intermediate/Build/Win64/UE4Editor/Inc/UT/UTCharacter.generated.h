// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UT_UTCharacter_generated_h
#error "UTCharacter.generated.h already included, missing '#pragma once' in UTCharacter.h"
#endif
#define UT_UTCharacter_generated_h

#define UT_Source_UT_UTCharacter_h_14_RPC_WRAPPERS
#define UT_Source_UT_UTCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define UT_Source_UT_UTCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUTCharacter(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTCharacter(); \
public: \
	DECLARE_CLASS(AUTCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_UTCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAUTCharacter(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTCharacter(); \
public: \
	DECLARE_CLASS(AUTCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_UTCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUTCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUTCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTCharacter(AUTCharacter&&); \
	NO_API AUTCharacter(const AUTCharacter&); \
public:


#define UT_Source_UT_UTCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTCharacter(AUTCharacter&&); \
	NO_API AUTCharacter(const AUTCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUTCharacter)


#define UT_Source_UT_UTCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUTCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUTCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUTCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUTCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUTCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUTCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUTCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUTCharacter, L_MotionController); }


#define UT_Source_UT_UTCharacter_h_11_PROLOG
#define UT_Source_UT_UTCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTCharacter_h_14_RPC_WRAPPERS \
	UT_Source_UT_UTCharacter_h_14_INCLASS \
	UT_Source_UT_UTCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UT_Source_UT_UTCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UT_Source_UT_UTCharacter_h_14_INCLASS_NO_PURE_DECLS \
	UT_Source_UT_UTCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UT_Source_UT_UTCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
