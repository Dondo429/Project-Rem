// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterMeshActor_generated_h
#error "WaterMeshActor.generated.h already included, missing '#pragma once' in WaterMeshActor.h"
#endif
#define WATER_WaterMeshActor_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterMeshActor(); \
	friend struct Z_Construct_UClass_AWaterMeshActor_Statics; \
public: \
	DECLARE_CLASS(AWaterMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterMeshActor)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWaterMeshActor(); \
	friend struct Z_Construct_UClass_AWaterMeshActor_Statics; \
public: \
	DECLARE_CLASS(AWaterMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterMeshActor)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterMeshActor(AWaterMeshActor&&); \
	NO_API AWaterMeshActor(const AWaterMeshActor&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterMeshActor(AWaterMeshActor&&); \
	NO_API AWaterMeshActor(const AWaterMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterMeshActor)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaterMesh() { return STRUCT_OFFSET(AWaterMeshActor, WaterMesh); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_11_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
