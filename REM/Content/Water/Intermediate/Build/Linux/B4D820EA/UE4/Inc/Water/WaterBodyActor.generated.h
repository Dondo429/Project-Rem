// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterWavesBase;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterSplineComponent;
#ifdef WATER_WaterBodyActor_generated_h
#error "WaterBodyActor.generated.h already included, missing '#pragma once' in WaterBodyActor.h"
#endif
#define WATER_WaterBodyActor_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FUnderwaterPostProcessSettings>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterBodyGenerator(); \
	friend struct Z_Construct_UClass_UWaterBodyGenerator_Statics; \
public: \
	DECLARE_CLASS(UWaterBodyGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBodyGenerator) \
	DECLARE_WITHIN(AWaterBody)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyGenerator(); \
	friend struct Z_Construct_UClass_UWaterBodyGenerator_Statics; \
public: \
	DECLARE_CLASS(UWaterBodyGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBodyGenerator) \
	DECLARE_WITHIN(AWaterBody)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBodyGenerator(UWaterBodyGenerator&&); \
	NO_API UWaterBodyGenerator(const UWaterBodyGenerator&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBodyGenerator(UWaterBodyGenerator&&); \
	NO_API UWaterBodyGenerator(const UWaterBodyGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyGenerator)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_150_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_153_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterBodyGenerator>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execSetWaterWaves); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execSetWaterWaves); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBody, NO_API)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBody(); \
	friend struct Z_Construct_UClass_AWaterBody_Statics; \
public: \
	DECLARE_CLASS(AWaterBody, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBody) \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBody*>(this); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBody(); \
	friend struct Z_Construct_UClass_AWaterBody_Statics; \
public: \
	DECLARE_CLASS(AWaterBody, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBody) \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBody*>(this); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBody(AWaterBody&&); \
	NO_API AWaterBody(const AWaterBody&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBody(AWaterBody&&); \
	NO_API AWaterBody(const AWaterBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBody); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBody)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bOverrideWaterMesh() { return STRUCT_OFFSET(AWaterBody, bOverrideWaterMesh); } \
	FORCEINLINE static uint32 __PPO__WaterMeshOverride() { return STRUCT_OFFSET(AWaterBody, WaterMeshOverride); } \
	FORCEINLINE static uint32 __PPO__OverlapMaterialPriority() { return STRUCT_OFFSET(AWaterBody, OverlapMaterialPriority); } \
	FORCEINLINE static uint32 __PPO__CollisionProfileName() { return STRUCT_OFFSET(AWaterBody, CollisionProfileName); } \
	FORCEINLINE static uint32 __PPO__SplineComp() { return STRUCT_OFFSET(AWaterBody, SplineComp); } \
	FORCEINLINE static uint32 __PPO__WaterSplineMetadata() { return STRUCT_OFFSET(AWaterBody, WaterSplineMetadata); } \
	FORCEINLINE static uint32 __PPO__WaterMID() { return STRUCT_OFFSET(AWaterBody, WaterMID); } \
	FORCEINLINE static uint32 __PPO__UnderwaterPostProcessMID() { return STRUCT_OFFSET(AWaterBody, UnderwaterPostProcessMID); } \
	FORCEINLINE static uint32 __PPO__Islands() { return STRUCT_OFFSET(AWaterBody, Islands); } \
	FORCEINLINE static uint32 __PPO__ExclusionVolumes() { return STRUCT_OFFSET(AWaterBody, ExclusionVolumes); } \
	FORCEINLINE static uint32 __PPO__Landscape() { return STRUCT_OFFSET(AWaterBody, Landscape); } \
	FORCEINLINE static uint32 __PPO__CurrentPostProcessSettings() { return STRUCT_OFFSET(AWaterBody, CurrentPostProcessSettings); } \
	FORCEINLINE static uint32 __PPO__bCanAffectNavigation() { return STRUCT_OFFSET(AWaterBody, bCanAffectNavigation); } \
	FORCEINLINE static uint32 __PPO__WaterNavAreaClass() { return STRUCT_OFFSET(AWaterBody, WaterNavAreaClass); } \
	FORCEINLINE static uint32 __PPO__WaterWaves() { return STRUCT_OFFSET(AWaterBody, WaterWaves); } \
	FORCEINLINE static uint32 __PPO__bHasWaveSpectrumSettings_DEPRECATED() { return STRUCT_OFFSET(AWaterBody, bHasWaveSpectrumSettings_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bHasTerrainCarvingSettingsSettings_DEPRECATED() { return STRUCT_OFFSET(AWaterBody, bHasTerrainCarvingSettingsSettings_DEPRECATED); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_207_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_210_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBody."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h


#define FOREACH_ENUM_EWATERBODYTYPE(op) \
	op(EWaterBodyType::River) \
	op(EWaterBodyType::Lake) \
	op(EWaterBodyType::Ocean) \
	op(EWaterBodyType::Transition) \
	op(EWaterBodyType::Num) 

enum class EWaterBodyType : uint8;
template<> WATER_API UEnum* StaticEnum<EWaterBodyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
