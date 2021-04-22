// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterSplineComponent;
#ifdef WATER_WaterBodyIslandActor_generated_h
#error "WaterBodyIslandActor.generated.h already included, missing '#pragma once' in WaterBodyIslandActor.h"
#endif
#define WATER_WaterBodyIslandActor_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWaterSpline);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWaterSpline);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBodyIsland(); \
	friend struct Z_Construct_UClass_AWaterBodyIsland_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyIsland) \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBodyIsland*>(this); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyIsland(); \
	friend struct Z_Construct_UClass_AWaterBodyIsland_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyIsland) \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBodyIsland*>(this); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyIsland(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyIsland) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyIsland); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyIsland); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyIsland(AWaterBodyIsland&&); \
	NO_API AWaterBodyIsland(const AWaterBodyIsland&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyIsland(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyIsland(AWaterBodyIsland&&); \
	NO_API AWaterBodyIsland(const AWaterBodyIsland&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyIsland); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyIsland); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyIsland)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SplineComp() { return STRUCT_OFFSET(AWaterBodyIsland, SplineComp); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_19_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyIsland."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterBodyIsland>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
