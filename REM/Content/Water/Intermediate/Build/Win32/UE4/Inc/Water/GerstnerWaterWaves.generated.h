// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGerstnerWave;
#ifdef WATER_GerstnerWaterWaves_generated_h
#error "GerstnerWaterWaves.generated.h already included, missing '#pragma once' in GerstnerWaterWaves.h"
#endif
#define WATER_GerstnerWaterWaves_generated_h

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FGerstnerWaveOctave>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGerstnerWave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FGerstnerWave>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_RPC_WRAPPERS \
	virtual void GenerateGerstnerWaves_Implementation(TArray<FGerstnerWave>& OutWaves) const; \
 \
	DECLARE_FUNCTION(execGenerateGerstnerWaves);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateGerstnerWaves);


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_EVENT_PARMS \
	struct GerstnerWaterWaveGeneratorBase_eventGenerateGerstnerWaves_Parms \
	{ \
		TArray<FGerstnerWave> OutWaves; \
	};


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_CALLBACK_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorBase(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorBase)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorBase(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorBase)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(UGerstnerWaterWaveGeneratorBase&&); \
	WATER_API UGerstnerWaterWaveGeneratorBase(const UGerstnerWaterWaveGeneratorBase&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(UGerstnerWaterWaveGeneratorBase&&); \
	WATER_API UGerstnerWaterWaveGeneratorBase(const UGerstnerWaterWaveGeneratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorBase)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_81_PROLOG \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_EVENT_PARMS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorBase>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSimple)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSimple)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSimple) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSimple); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSimple); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(UGerstnerWaterWaveGeneratorSimple&&); \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const UGerstnerWaterWaveGeneratorSimple&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(UGerstnerWaterWaveGeneratorSimple&&); \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const UGerstnerWaterWaveGeneratorSimple&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSimple); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSimple)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_96_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorSimple>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSpectrum)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSpectrum)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSpectrum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSpectrum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSpectrum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(UGerstnerWaterWaveGeneratorSpectrum&&); \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const UGerstnerWaterWaveGeneratorSpectrum&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(UGerstnerWaterWaveGeneratorSpectrum&&); \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const UGerstnerWaterWaveGeneratorSpectrum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSpectrum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSpectrum)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_151_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorSpectrum>();

#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_RPC_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaves(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaves_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaves, UWaterWaves, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaves)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaves(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaves_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaves, UWaterWaves, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaves)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaves(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaves) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaves); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaves); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaves(UGerstnerWaterWaves&&); \
	WATER_API UGerstnerWaterWaves(const UGerstnerWaterWaves&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaves(UGerstnerWaterWaves&&); \
	WATER_API UGerstnerWaterWaves(const UGerstnerWaterWaves&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaves); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaves); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGerstnerWaterWaves)


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GerstnerWaves() { return STRUCT_OFFSET(UGerstnerWaterWaves, GerstnerWaves); } \
	FORCEINLINE static uint32 __PPO__MaxWaveHeight() { return STRUCT_OFFSET(UGerstnerWaterWaves, MaxWaveHeight); }


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_166_PROLOG
#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaves>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h


#define FOREACH_ENUM_EWAVESPECTRUMTYPE(op) \
	op(EWaveSpectrumType::Phillips) \
	op(EWaveSpectrumType::PiersonMoskowitz) \
	op(EWaveSpectrumType::JONSWAP) 

enum class EWaveSpectrumType : uint8;
template<> WATER_API UEnum* StaticEnum<EWaveSpectrumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
