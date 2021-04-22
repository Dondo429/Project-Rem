// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSphericalPontoon;
struct FVector;
#ifdef WATER_BuoyancyComponent_generated_h
#error "BuoyancyComponent.generated.h already included, missing '#pragma once' in BuoyancyComponent.h"
#endif
#define WATER_BuoyancyComponent_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuoyancyData_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FBuoyancyData>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalPontoon_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FSphericalPontoon>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_177_DELEGATE \
struct _Script_Water_eventOnPontoonExitedWater_Parms \
{ \
	FSphericalPontoon Pontoon; \
}; \
static inline void FOnPontoonExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonExitedWater, FSphericalPontoon const& Pontoon) \
{ \
	_Script_Water_eventOnPontoonExitedWater_Parms Parms; \
	Parms.Pontoon=Pontoon; \
	OnPontoonExitedWater.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_176_DELEGATE \
struct _Script_Water_eventOnPontoonEnteredWater_Parms \
{ \
	FSphericalPontoon Pontoon; \
}; \
static inline void FOnPontoonEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonEnteredWater, FSphericalPontoon const& Pontoon) \
{ \
	_Script_Water_eventOnPontoonEnteredWater_Parms Parms; \
	Parms.Pontoon=Pontoon; \
	OnPontoonEnteredWater.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastWaterSurfaceInfo); \
	DECLARE_FUNCTION(execOnPontoonExitedWater); \
	DECLARE_FUNCTION(execOnPontoonEnteredWater); \
	DECLARE_FUNCTION(execIsInWaterBody);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastWaterSurfaceInfo); \
	DECLARE_FUNCTION(execOnPontoonExitedWater); \
	DECLARE_FUNCTION(execOnPontoonEnteredWater); \
	DECLARE_FUNCTION(execIsInWaterBody);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBuoyancyComponent, NO_API)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancyComponent) \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancyComponent) \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuoyancyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyancyComponent(UBuoyancyComponent&&); \
	NO_API UBuoyancyComponent(const UBuoyancyComponent&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyancyComponent(UBuoyancyComponent&&); \
	NO_API UBuoyancyComponent(const UBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyComponent)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWaterBodies() { return STRUCT_OFFSET(UBuoyancyComponent, CurrentWaterBodies); } \
	FORCEINLINE static uint32 __PPO__SimulatingComponent() { return STRUCT_OFFSET(UBuoyancyComponent, SimulatingComponent); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_179_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UBuoyancyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
