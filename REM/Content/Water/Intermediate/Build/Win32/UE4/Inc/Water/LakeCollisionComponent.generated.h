// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_LakeCollisionComponent_generated_h
#error "LakeCollisionComponent.generated.h already included, missing '#pragma once' in LakeCollisionComponent.h"
#endif
#define WATER_LakeCollisionComponent_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULakeCollisionComponent(); \
	friend struct Z_Construct_UClass_ULakeCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULakeCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(ULakeCollisionComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULakeCollisionComponent(); \
	friend struct Z_Construct_UClass_ULakeCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULakeCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(ULakeCollisionComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULakeCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULakeCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULakeCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULakeCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULakeCollisionComponent(ULakeCollisionComponent&&); \
	NO_API ULakeCollisionComponent(const ULakeCollisionComponent&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULakeCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULakeCollisionComponent(ULakeCollisionComponent&&); \
	NO_API ULakeCollisionComponent(const ULakeCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULakeCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULakeCollisionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULakeCollisionComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedBodySetup() { return STRUCT_OFFSET(ULakeCollisionComponent, CachedBodySetup); } \
	FORCEINLINE static uint32 __PPO__BoxExtent() { return STRUCT_OFFSET(ULakeCollisionComponent, BoxExtent); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_10_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LakeCollisionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class ULakeCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
