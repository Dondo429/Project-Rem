// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterBodyLakeActor_generated_h
#error "WaterBodyLakeActor.generated.h already included, missing '#pragma once' in WaterBodyLakeActor.h"
#endif
#define WATER_WaterBodyLakeActor_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULakeGenerator(); \
	friend struct Z_Construct_UClass_ULakeGenerator_Statics; \
public: \
	DECLARE_CLASS(ULakeGenerator, UWaterBodyGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(ULakeGenerator)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULakeGenerator(); \
	friend struct Z_Construct_UClass_ULakeGenerator_Statics; \
public: \
	DECLARE_CLASS(ULakeGenerator, UWaterBodyGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(ULakeGenerator)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API ULakeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULakeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, ULakeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULakeGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API ULakeGenerator(ULakeGenerator&&); \
	WATER_API ULakeGenerator(const ULakeGenerator&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API ULakeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API ULakeGenerator(ULakeGenerator&&); \
	WATER_API ULakeGenerator(const ULakeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, ULakeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULakeGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULakeGenerator)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LakeMeshComp() { return STRUCT_OFFSET(ULakeGenerator, LakeMeshComp); } \
	FORCEINLINE static uint32 __PPO__LakeCollisionComp_DEPRECATED() { return STRUCT_OFFSET(ULakeGenerator, LakeCollisionComp_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__LakeCollision() { return STRUCT_OFFSET(ULakeGenerator, LakeCollision); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_14_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LakeGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class ULakeGenerator>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBodyLake(); \
	friend struct Z_Construct_UClass_AWaterBodyLake_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyLake, AWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyLake)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyLake(); \
	friend struct Z_Construct_UClass_AWaterBodyLake_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyLake, AWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyLake)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyLake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyLake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyLake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyLake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyLake(AWaterBodyLake&&); \
	NO_API AWaterBodyLake(const AWaterBodyLake&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyLake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyLake(AWaterBodyLake&&); \
	NO_API AWaterBodyLake(const AWaterBodyLake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyLake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyLake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyLake)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LakeGenerator() { return STRUCT_OFFSET(AWaterBodyLake, LakeGenerator); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_38_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyLake."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterBodyLake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
