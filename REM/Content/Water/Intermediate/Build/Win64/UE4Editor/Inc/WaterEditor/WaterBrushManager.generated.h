// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class AActor;
class UWaterBodyBrushCacheContainer;
struct FWaterBodyBrushCache;
#ifdef WATEREDITOR_WaterBrushManager_generated_h
#error "WaterBrushManager.generated.h already included, missing '#pragma once' in WaterBrushManager.h"
#endif
#define WATEREDITOR_WaterBrushManager_generated_h

#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_RPC_WRAPPERS \
	virtual void SortWaterBodiesForBrushRender_Implementation(TArray<AWaterBody*>& InOutWaterBodies) const; \
 \
	DECLARE_FUNCTION(execSortWaterBodiesForBrushRender); \
	DECLARE_FUNCTION(execGetWaterCacheKey); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execForceUpdate);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SortWaterBodiesForBrushRender_Implementation(TArray<AWaterBody*>& InOutWaterBodies) const; \
 \
	DECLARE_FUNCTION(execSortWaterBodiesForBrushRender); \
	DECLARE_FUNCTION(execGetWaterCacheKey); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execForceUpdate);


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_EVENT_PARMS \
	struct WaterBrushManager_eventSortWaterBodiesForBrushRender_Parms \
	{ \
		TArray<AWaterBody*> InOutWaterBodies; \
	};


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_CALLBACK_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBrushManager, NO_API)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBrushManager(); \
	friend struct Z_Construct_UClass_AWaterBrushManager_Statics; \
public: \
	DECLARE_CLASS(AWaterBrushManager, AWaterLandscapeBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterBrushManager) \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_ARCHIVESERIALIZER


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBrushManager(); \
	friend struct Z_Construct_UClass_AWaterBrushManager_Statics; \
public: \
	DECLARE_CLASS(AWaterBrushManager, AWaterLandscapeBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterBrushManager) \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_ARCHIVESERIALIZER


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBrushManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBrushManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBrushManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBrushManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBrushManager(AWaterBrushManager&&); \
	NO_API AWaterBrushManager(const AWaterBrushManager&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBrushManager(AWaterBrushManager&&); \
	NO_API AWaterBrushManager(const AWaterBrushManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBrushManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBrushManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBrushManager)


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_29_PROLOG \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_EVENT_PARMS


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_33_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class AWaterBrushManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
