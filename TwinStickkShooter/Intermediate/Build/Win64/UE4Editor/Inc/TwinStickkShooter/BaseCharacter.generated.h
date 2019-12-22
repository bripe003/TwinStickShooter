// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICKKSHOOTER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define TWINSTICKKSHOOTER_BaseCharacter_generated_h

#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_SPARSE_DATA
#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinStickkShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinStickkShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_9_PROLOG
#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_SPARSE_DATA \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_RPC_WRAPPERS \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_INCLASS \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_SPARSE_DATA \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWINSTICKKSHOOTER_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStickkShooter_Source_TwinStickkShooter_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
