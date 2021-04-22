// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterRuntimeSettings_generated_h
#error "WaterRuntimeSettings.generated.h already included, missing '#pragma once' in WaterRuntimeSettings.h"
#endif
#define WATER_WaterRuntimeSettings_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterRuntimeSettings(); \
	friend struct Z_Construct_UClass_UWaterRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWaterRuntimeSettings(); \
	friend struct Z_Construct_UClass_UWaterRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterRuntimeSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterRuntimeSettings(UWaterRuntimeSettings&&); \
	NO_API UWaterRuntimeSettings(const UWaterRuntimeSettings&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterRuntimeSettings(UWaterRuntimeSettings&&); \
	NO_API UWaterRuntimeSettings(const UWaterRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterRuntimeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterRuntimeSettings)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultWaterCollisionProfileName() { return STRUCT_OFFSET(UWaterRuntimeSettings, DefaultWaterCollisionProfileName); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_17_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
