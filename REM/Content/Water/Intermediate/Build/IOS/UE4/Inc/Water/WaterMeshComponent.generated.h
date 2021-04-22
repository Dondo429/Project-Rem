// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterMeshComponent_generated_h
#error "WaterMeshComponent.generated.h already included, missing '#pragma once' in WaterMeshComponent.h"
#endif
#define WATER_WaterMeshComponent_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterMeshComponent(); \
	friend struct Z_Construct_UClass_UWaterMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterMeshComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWaterMeshComponent(); \
	friend struct Z_Construct_UClass_UWaterMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterMeshComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterMeshComponent(UWaterMeshComponent&&); \
	NO_API UWaterMeshComponent(const UWaterMeshComponent&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterMeshComponent(UWaterMeshComponent&&); \
	NO_API UWaterMeshComponent(const UWaterMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterMeshComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TessellationFactor() { return STRUCT_OFFSET(UWaterMeshComponent, TessellationFactor); } \
	FORCEINLINE static uint32 __PPO__LODScale() { return STRUCT_OFFSET(UWaterMeshComponent, LODScale); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_20_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
