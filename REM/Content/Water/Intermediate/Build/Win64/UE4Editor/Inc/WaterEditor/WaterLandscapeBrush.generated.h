// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
class AActor;
class UObject;
class AWaterBody;
class IWaterBrushActorInterface;
class AWaterBodyIsland;
#ifdef WATEREDITOR_WaterLandscapeBrush_generated_h
#error "WaterLandscapeBrush.generated.h already included, missing '#pragma once' in WaterLandscapeBrush.h"
#endif
#define WATEREDITOR_WaterLandscapeBrush_generated_h

#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_RPC_WRAPPERS \
	virtual void BlueprintOnRenderTargetTexturesUpdated_Implementation(UTexture2D* VelocityTexture); \
	virtual void BlueprintGetRenderTargets_Implementation(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget); \
	virtual void BlueprintWaterBodyChanged_Implementation(AActor* Actor); \
	virtual void BlueprintWaterBodiesChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execForceWaterTextureUpdate); \
	DECLARE_FUNCTION(execBlueprintOnRenderTargetTexturesUpdated); \
	DECLARE_FUNCTION(execBlueprintGetRenderTargets); \
	DECLARE_FUNCTION(execClearActorCache); \
	DECLARE_FUNCTION(execGetActorCache); \
	DECLARE_FUNCTION(execSetActorCache); \
	DECLARE_FUNCTION(execClearWaterBodyCache); \
	DECLARE_FUNCTION(execGetWaterBodyCache); \
	DECLARE_FUNCTION(execSetWaterBodyCache); \
	DECLARE_FUNCTION(execBlueprintWaterBodyChanged); \
	DECLARE_FUNCTION(execBlueprintWaterBodiesChanged); \
	DECLARE_FUNCTION(execGetActorsAffectingLandscape); \
	DECLARE_FUNCTION(execGetWaterBodyIslands); \
	DECLARE_FUNCTION(execGetWaterBodies);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BlueprintOnRenderTargetTexturesUpdated_Implementation(UTexture2D* VelocityTexture); \
	virtual void BlueprintGetRenderTargets_Implementation(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget); \
	virtual void BlueprintWaterBodyChanged_Implementation(AActor* Actor); \
	virtual void BlueprintWaterBodiesChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execForceWaterTextureUpdate); \
	DECLARE_FUNCTION(execBlueprintOnRenderTargetTexturesUpdated); \
	DECLARE_FUNCTION(execBlueprintGetRenderTargets); \
	DECLARE_FUNCTION(execClearActorCache); \
	DECLARE_FUNCTION(execGetActorCache); \
	DECLARE_FUNCTION(execSetActorCache); \
	DECLARE_FUNCTION(execClearWaterBodyCache); \
	DECLARE_FUNCTION(execGetWaterBodyCache); \
	DECLARE_FUNCTION(execSetWaterBodyCache); \
	DECLARE_FUNCTION(execBlueprintWaterBodyChanged); \
	DECLARE_FUNCTION(execBlueprintWaterBodiesChanged); \
	DECLARE_FUNCTION(execGetActorsAffectingLandscape); \
	DECLARE_FUNCTION(execGetWaterBodyIslands); \
	DECLARE_FUNCTION(execGetWaterBodies);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_EVENT_PARMS \
	struct WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms \
	{ \
		UTextureRenderTarget2D* InHeightRenderTarget; \
		UTextureRenderTarget2D* OutVelocityRenderTarget; \
	}; \
	struct WaterLandscapeBrush_eventBlueprintOnRenderTargetTexturesUpdated_Parms \
	{ \
		UTexture2D* VelocityTexture; \
	}; \
	struct WaterLandscapeBrush_eventBlueprintWaterBodyChanged_Parms \
	{ \
		AActor* Actor; \
	};


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_CALLBACK_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterLandscapeBrush(); \
	friend struct Z_Construct_UClass_AWaterLandscapeBrush_Statics; \
public: \
	DECLARE_CLASS(AWaterLandscapeBrush, ALandscapeBlueprintBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterLandscapeBrush)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAWaterLandscapeBrush(); \
	friend struct Z_Construct_UClass_AWaterLandscapeBrush_Statics; \
public: \
	DECLARE_CLASS(AWaterLandscapeBrush, ALandscapeBlueprintBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterLandscapeBrush)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterLandscapeBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLandscapeBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLandscapeBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLandscapeBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLandscapeBrush(AWaterLandscapeBrush&&); \
	NO_API AWaterLandscapeBrush(const AWaterLandscapeBrush&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLandscapeBrush(AWaterLandscapeBrush&&); \
	NO_API AWaterLandscapeBrush(const AWaterLandscapeBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLandscapeBrush); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLandscapeBrush); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLandscapeBrush)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Cache() { return STRUCT_OFFSET(AWaterLandscapeBrush, Cache); }


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_17_PROLOG \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_EVENT_PARMS


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class AWaterLandscapeBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
