// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class AWaterBody;
#ifdef WATER_NiagaraWaterFunctionLibrary_generated_h
#error "NiagaraWaterFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraWaterFunctionLibrary.h"
#endif
#define WATER_NiagaraWaterFunctionLibrary_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWaterBody);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWaterBody);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraWaterFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraWaterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraWaterFunctionLibrary)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraWaterFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraWaterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraWaterFunctionLibrary)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraWaterFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraWaterFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraWaterFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraWaterFunctionLibrary(UNiagaraWaterFunctionLibrary&&); \
	NO_API UNiagaraWaterFunctionLibrary(const UNiagaraWaterFunctionLibrary&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraWaterFunctionLibrary(UNiagaraWaterFunctionLibrary&&); \
	NO_API UNiagaraWaterFunctionLibrary(const UNiagaraWaterFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraWaterFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraWaterFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraWaterFunctionLibrary)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_14_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UNiagaraWaterFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
