// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterBrushActorInterface_generated_h
#error "WaterBrushActorInterface.generated.h already included, missing '#pragma once' in WaterBrushActorInterface.h"
#endif
#define WATER_WaterBrushActorInterface_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBrushActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBrushActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBrushActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBrushActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBrushActorInterface(UWaterBrushActorInterface&&); \
	NO_API UWaterBrushActorInterface(const UWaterBrushActorInterface&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBrushActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBrushActorInterface(UWaterBrushActorInterface&&); \
	NO_API UWaterBrushActorInterface(const UWaterBrushActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBrushActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBrushActorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBrushActorInterface)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWaterBrushActorInterface(); \
	friend struct Z_Construct_UClass_UWaterBrushActorInterface_Statics; \
public: \
	DECLARE_CLASS(UWaterBrushActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBrushActorInterface)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWaterBrushActorInterface() {} \
public: \
	typedef UWaterBrushActorInterface UClassType; \
	typedef IWaterBrushActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IWaterBrushActorInterface() {} \
public: \
	typedef UWaterBrushActorInterface UClassType; \
	typedef IWaterBrushActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_17_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterBrushActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
