// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Coin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_012025_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define BOMBERMAN_012025_Coin_generated_h

#define FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoin(ACoin&&); \
	ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin) \
	NO_API virtual ~ACoin();


#define FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_9_PROLOG
#define FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class ACoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
