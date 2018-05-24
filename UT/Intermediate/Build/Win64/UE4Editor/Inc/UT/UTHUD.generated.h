// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UT_UTHUD_generated_h
#error "UTHUD.generated.h already included, missing '#pragma once' in UTHUD.h"
#endif
#define UT_UTHUD_generated_h

#define UT_Source_UT_UTHUD_h_12_RPC_WRAPPERS
#define UT_Source_UT_UTHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UT_Source_UT_UTHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUTHUD(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTHUD(); \
public: \
	DECLARE_CLASS(AUTHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_UTHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUTHUD(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTHUD(); \
public: \
	DECLARE_CLASS(AUTHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_UTHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUTHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUTHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTHUD(AUTHUD&&); \
	NO_API AUTHUD(const AUTHUD&); \
public:


#define UT_Source_UT_UTHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTHUD(AUTHUD&&); \
	NO_API AUTHUD(const AUTHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUTHUD)


#define UT_Source_UT_UTHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define UT_Source_UT_UTHUD_h_9_PROLOG
#define UT_Source_UT_UTHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTHUD_h_12_RPC_WRAPPERS \
	UT_Source_UT_UTHUD_h_12_INCLASS \
	UT_Source_UT_UTHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UT_Source_UT_UTHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UT_Source_UT_UTHUD_h_12_INCLASS_NO_PURE_DECLS \
	UT_Source_UT_UTHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UT_Source_UT_UTHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
