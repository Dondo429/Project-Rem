// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REM_REMGameModeBase_generated_h
#error "REMGameModeBase.generated.h already included, missing '#pragma once' in REMGameModeBase.h"
#endif
#define REM_REMGameModeBase_generated_h

#define REM_Bug_Source_REM_REMGameModeBase_h_15_SPARSE_DATA
#define REM_Bug_Source_REM_REMGameModeBase_h_15_RPC_WRAPPERS
#define REM_Bug_Source_REM_REMGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define REM_Bug_Source_REM_REMGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAREMGameModeBase(); \
	friend struct Z_Construct_UClass_AREMGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AREMGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/REM"), NO_API) \
	DECLARE_SERIALIZER(AREMGameModeBase)


#define REM_Bug_Source_REM_REMGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAREMGameModeBase(); \
	friend struct Z_Construct_UClass_AREMGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AREMGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/REM"), NO_API) \
	DECLARE_SERIALIZER(AREMGameModeBase)


#define REM_Bug_Source_REM_REMGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AREMGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AREMGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AREMGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AREMGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AREMGameModeBase(AREMGameModeBase&&); \
	NO_API AREMGameModeBase(const AREMGameModeBase&); \
public:


#define REM_Bug_Source_REM_REMGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AREMGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AREMGameModeBase(AREMGameModeBase&&); \
	NO_API AREMGameModeBase(const AREMGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AREMGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AREMGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AREMGameModeBase)


#define REM_Bug_Source_REM_REMGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define REM_Bug_Source_REM_REMGameModeBase_h_12_PROLOG
#define REM_Bug_Source_REM_REMGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REM_Bug_Source_REM_REMGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	REM_Bug_Source_REM_REMGameModeBase_h_15_SPARSE_DATA \
	REM_Bug_Source_REM_REMGameModeBase_h_15_RPC_WRAPPERS \
	REM_Bug_Source_REM_REMGameModeBase_h_15_INCLASS \
	REM_Bug_Source_REM_REMGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REM_Bug_Source_REM_REMGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REM_Bug_Source_REM_REMGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	REM_Bug_Source_REM_REMGameModeBase_h_15_SPARSE_DATA \
	REM_Bug_Source_REM_REMGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	REM_Bug_Source_REM_REMGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	REM_Bug_Source_REM_REMGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REM_API UClass* StaticClass<class AREMGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REM_Bug_Source_REM_REMGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
