// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UT_UTProjectile_generated_h
#error "UTProjectile.generated.h already included, missing '#pragma once' in UTProjectile.h"
#endif
#define UT_UTProjectile_generated_h

#define UT_Source_UT_UTProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UT_Source_UT_UTProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UT_Source_UT_UTProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUTProjectile(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTProjectile(); \
public: \
	DECLARE_CLASS(AUTProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UT_Source_UT_UTProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUTProjectile(); \
	friend UT_API class UClass* Z_Construct_UClass_AUTProjectile(); \
public: \
	DECLARE_CLASS(AUTProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(AUTProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UT_Source_UT_UTProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUTProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUTProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTProjectile(AUTProjectile&&); \
	NO_API AUTProjectile(const AUTProjectile&); \
public:


#define UT_Source_UT_UTProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUTProjectile(AUTProjectile&&); \
	NO_API AUTProjectile(const AUTProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUTProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUTProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUTProjectile)


#define UT_Source_UT_UTProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUTProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUTProjectile, ProjectileMovement); }


#define UT_Source_UT_UTProjectile_h_9_PROLOG
#define UT_Source_UT_UTProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTProjectile_h_12_RPC_WRAPPERS \
	UT_Source_UT_UTProjectile_h_12_INCLASS \
	UT_Source_UT_UTProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UT_Source_UT_UTProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_UTProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_UTProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UT_Source_UT_UTProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UT_Source_UT_UTProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UT_Source_UT_UTProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
