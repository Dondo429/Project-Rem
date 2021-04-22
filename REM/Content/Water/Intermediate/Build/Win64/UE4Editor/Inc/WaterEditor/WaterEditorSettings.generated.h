// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATEREDITOR_WaterEditorSettings_generated_h
#error "WaterEditorSettings.generated.h already included, missing '#pragma once' in WaterEditorSettings.h"
#endif
#define WATEREDITOR_WaterEditorSettings_generated_h

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyIslandDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__WaterMesh() { return STRUCT_OFFSET(FWaterBodyCustomDefaults, WaterMesh); } \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyCustomDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyOceanDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyLakeDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__RiverToOceanTransitionMaterial() { return STRUCT_OFFSET(FWaterBodyRiverDefaults, RiverToOceanTransitionMaterial); } \
	FORCEINLINE static uint32 __PPO__RiverToLakeTransitionMaterial() { return STRUCT_OFFSET(FWaterBodyRiverDefaults, RiverToLakeTransitionMaterial); } \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyRiverDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__WaterMaterial() { return STRUCT_OFFSET(FWaterBodyDefaults, WaterMaterial); } \
	FORCEINLINE static uint32 __PPO__UnderwaterPostProcessMaterial() { return STRUCT_OFFSET(FWaterBodyDefaults, UnderwaterPostProcessMaterial); }


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBrushActorDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterEditorSettings(); \
	friend struct Z_Construct_UClass_UWaterEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UWaterEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUWaterEditorSettings(); \
	friend struct Z_Construct_UClass_UWaterEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UWaterEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterEditorSettings(UWaterEditorSettings&&); \
	NO_API UWaterEditorSettings(const UWaterEditorSettings&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterEditorSettings(UWaterEditorSettings&&); \
	NO_API UWaterEditorSettings(const UWaterEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterEditorSettings)


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaterManagerClassPath() { return STRUCT_OFFSET(UWaterEditorSettings, WaterManagerClassPath); } \
	FORCEINLINE static uint32 __PPO__DefaultBrushAngleFalloffMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushAngleFalloffMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultBrushIslandFalloffMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushIslandFalloffMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultBrushWidthFalloffMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushWidthFalloffMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultBrushWeightmapMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushWeightmapMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultCacheDistanceFieldCacheMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultCacheDistanceFieldCacheMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultCompositeWaterBodyTextureMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultCompositeWaterBodyTextureMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultFinalizeVelocityHeightMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultFinalizeVelocityHeightMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultJumpFloodStepMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultJumpFloodStepMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultBlurEdgesMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultBlurEdgesMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultFindEdgesMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultFindEdgesMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultDrawCanvasMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultDrawCanvasMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultRenderRiverSplineDepthsMaterial() { return STRUCT_OFFSET(UWaterEditorSettings, DefaultRenderRiverSplineDepthsMaterial); }


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_151_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class UWaterEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
