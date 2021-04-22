// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterSubsystem_generated_h
#error "WaterSubsystem.generated.h already included, missing '#pragma once' in WaterSubsystem.h"
#endif
#define WATER_WaterSubsystem_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_17_DELEGATE \
static inline void FOnWaterScalabilityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWaterScalabilityChanged) \
{ \
	OnWaterScalabilityChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_16_DELEGATE \
struct _Script_Water_eventOnCameraUnderwaterStateChanged_Parms \
{ \
	bool bIsUnderWater; \
	float DepthUnderwater; \
}; \
static inline void FOnCameraUnderwaterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraUnderwaterStateChanged, bool bIsUnderWater, float DepthUnderwater) \
{ \
	_Script_Water_eventOnCameraUnderwaterStateChanged_Parms Parms; \
	Parms.bIsUnderWater=bIsUnderWater ? true : false; \
	Parms.DepthUnderwater=DepthUnderwater; \
	OnCameraUnderwaterStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanTotalHeight); \
	DECLARE_FUNCTION(execGetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanBaseHeight); \
	DECLARE_FUNCTION(execPrintToWaterLog); \
	DECLARE_FUNCTION(execGetCameraUnderwaterDepth); \
	DECLARE_FUNCTION(execGetSmoothedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetWaterTimeSeconds); \
	DECLARE_FUNCTION(execIsWaterRenderingEnabled); \
	DECLARE_FUNCTION(execGetShallowWaterSimulationRenderTargetSize); \
	DECLARE_FUNCTION(execGetShallowWaterMaxImpulseForces); \
	DECLARE_FUNCTION(execGetShallowWaterMaxDynamicForces); \
	DECLARE_FUNCTION(execIsUnderwaterPostProcessEnabled); \
	DECLARE_FUNCTION(execIsShallowWaterSimulationEnabled);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanTotalHeight); \
	DECLARE_FUNCTION(execGetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanBaseHeight); \
	DECLARE_FUNCTION(execPrintToWaterLog); \
	DECLARE_FUNCTION(execGetCameraUnderwaterDepth); \
	DECLARE_FUNCTION(execGetSmoothedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetWaterTimeSeconds); \
	DECLARE_FUNCTION(execIsWaterRenderingEnabled); \
	DECLARE_FUNCTION(execGetShallowWaterSimulationRenderTargetSize); \
	DECLARE_FUNCTION(execGetShallowWaterMaxImpulseForces); \
	DECLARE_FUNCTION(execGetShallowWaterMaxDynamicForces); \
	DECLARE_FUNCTION(execIsUnderwaterPostProcessEnabled); \
	DECLARE_FUNCTION(execIsShallowWaterSimulationEnabled);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterSubsystem(); \
	friend struct Z_Construct_UClass_UWaterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaterSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSubsystem)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSubsystem(); \
	friend struct Z_Construct_UClass_UWaterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaterSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSubsystem)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSubsystem(UWaterSubsystem&&); \
	NO_API UWaterSubsystem(const UWaterSubsystem&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSubsystem(UWaterSubsystem&&); \
	NO_API UWaterSubsystem(const UWaterSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterSubsystem)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaterMeshActor() { return STRUCT_OFFSET(UWaterSubsystem, WaterMeshActor); } \
	FORCEINLINE static uint32 __PPO__MaterialParameterCollection() { return STRUCT_OFFSET(UWaterSubsystem, MaterialParameterCollection); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_58_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
