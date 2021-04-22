// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterSplineMetadata_generated_h
#error "WaterSplineMetadata.generated.h already included, missing '#pragma once' in WaterSplineMetadata.h"
#endif
#define WATER_WaterSplineMetadata_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FWaterSplineCurveDefaults>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterSplineMetadata(); \
	friend struct Z_Construct_UClass_UWaterSplineMetadata_Statics; \
public: \
	DECLARE_CLASS(UWaterSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSplineMetadata)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSplineMetadata(); \
	friend struct Z_Construct_UClass_UWaterSplineMetadata_Statics; \
public: \
	DECLARE_CLASS(UWaterSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSplineMetadata)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineMetadata) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSplineMetadata); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineMetadata); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSplineMetadata(UWaterSplineMetadata&&); \
	NO_API UWaterSplineMetadata(const UWaterSplineMetadata&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSplineMetadata(UWaterSplineMetadata&&); \
	NO_API UWaterSplineMetadata(const UWaterSplineMetadata&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSplineMetadata); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineMetadata)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaterVelocity_DEPRECATED() { return STRUCT_OFFSET(UWaterSplineMetadata, WaterVelocity_DEPRECATED); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_36_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterSplineMetadata."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterSplineMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
