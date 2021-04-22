// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
#ifdef WATEREDITOR_JumpFloodComponent2D_generated_h
#error "JumpFloodComponent2D.generated.h already included, missing '#pragma once' in JumpFloodComponent2D.h"
#endif
#define WATEREDITOR_JumpFloodComponent2D_generated_h

#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execFindEdges_Debug); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execJumpFlood); \
	DECLARE_FUNCTION(execAssignRenderTargets); \
	DECLARE_FUNCTION(execCreateMIDs);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execFindEdges_Debug); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execJumpFlood); \
	DECLARE_FUNCTION(execAssignRenderTargets); \
	DECLARE_FUNCTION(execCreateMIDs);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJumpFloodComponent2D(); \
	friend struct Z_Construct_UClass_UJumpFloodComponent2D_Statics; \
public: \
	DECLARE_CLASS(UJumpFloodComponent2D, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UJumpFloodComponent2D)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJumpFloodComponent2D(); \
	friend struct Z_Construct_UClass_UJumpFloodComponent2D_Statics; \
public: \
	DECLARE_CLASS(UJumpFloodComponent2D, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UJumpFloodComponent2D)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJumpFloodComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpFloodComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJumpFloodComponent2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpFloodComponent2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJumpFloodComponent2D(UJumpFloodComponent2D&&); \
	NO_API UJumpFloodComponent2D(const UJumpFloodComponent2D&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJumpFloodComponent2D(UJumpFloodComponent2D&&); \
	NO_API UJumpFloodComponent2D(const UJumpFloodComponent2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJumpFloodComponent2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpFloodComponent2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpFloodComponent2D)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RTA() { return STRUCT_OFFSET(UJumpFloodComponent2D, RTA); } \
	FORCEINLINE static uint32 __PPO__RTB() { return STRUCT_OFFSET(UJumpFloodComponent2D, RTB); } \
	FORCEINLINE static uint32 __PPO__JumpStepMID() { return STRUCT_OFFSET(UJumpFloodComponent2D, JumpStepMID); } \
	FORCEINLINE static uint32 __PPO__FindEdgesMID() { return STRUCT_OFFSET(UJumpFloodComponent2D, FindEdgesMID); } \
	FORCEINLINE static uint32 __PPO__BlurEdgesMID() { return STRUCT_OFFSET(UJumpFloodComponent2D, BlurEdgesMID); } \
	FORCEINLINE static uint32 __PPO__RequiredPasses() { return STRUCT_OFFSET(UJumpFloodComponent2D, RequiredPasses); } \
	FORCEINLINE static uint32 __PPO__CompletedPasses() { return STRUCT_OFFSET(UJumpFloodComponent2D, CompletedPasses); } \
	FORCEINLINE static uint32 __PPO__CompletedBlurPasses() { return STRUCT_OFFSET(UJumpFloodComponent2D, CompletedBlurPasses); }


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_12_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class UJumpFloodComponent2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
