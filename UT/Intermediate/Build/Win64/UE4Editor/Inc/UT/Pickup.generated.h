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
struct FHitResult;
#ifdef UT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define UT_Pickup_generated_h

#define UT_Source_UT_Pickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerEnterPickupBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerEnterPickupBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UT_Source_UT_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerEnterPickupBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerEnterPickupBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UT_Source_UT_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend UT_API class UClass* Z_Construct_UClass_APickup(); \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend UT_API class UClass* Z_Construct_UClass_APickup(); \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UT"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UT_Source_UT_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define UT_Source_UT_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define UT_Source_UT_Pickup_h_12_PRIVATE_PROPERTY_OFFSET
#define UT_Source_UT_Pickup_h_9_PROLOG
#define UT_Source_UT_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_Pickup_h_12_RPC_WRAPPERS \
	UT_Source_UT_Pickup_h_12_INCLASS \
	UT_Source_UT_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UT_Source_UT_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UT_Source_UT_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UT_Source_UT_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UT_Source_UT_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	UT_Source_UT_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UT_Source_UT_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
