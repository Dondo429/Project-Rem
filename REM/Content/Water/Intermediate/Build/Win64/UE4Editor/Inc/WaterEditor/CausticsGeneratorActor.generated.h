// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHierarchicalInstancedStaticMeshComponent;
#ifdef WATEREDITOR_CausticsGeneratorActor_generated_h
#error "CausticsGeneratorActor.generated.h already included, missing '#pragma once' in CausticsGeneratorActor.h"
#endif
#define WATEREDITOR_CausticsGeneratorActor_generated_h

#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_SPARSE_DATA
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_RPC_WRAPPERS \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execSpawnCausticParticleGrid); \
	DECLARE_FUNCTION(execSpawnWaterPreviewGrid); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execEditorTick);


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execSpawnCausticParticleGrid); \
	DECLARE_FUNCTION(execSpawnWaterPreviewGrid); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execEditorTick);


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_EVENT_PARMS \
	struct CausticsGeneratorActor_eventEditorTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_CALLBACK_WRAPPERS
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACausticsGeneratorActor(); \
	friend struct Z_Construct_UClass_ACausticsGeneratorActor_Statics; \
public: \
	DECLARE_CLASS(ACausticsGeneratorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(ACausticsGeneratorActor)


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACausticsGeneratorActor(); \
	friend struct Z_Construct_UClass_ACausticsGeneratorActor_Statics; \
public: \
	DECLARE_CLASS(ACausticsGeneratorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(ACausticsGeneratorActor)


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACausticsGeneratorActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACausticsGeneratorActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACausticsGeneratorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACausticsGeneratorActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACausticsGeneratorActor(ACausticsGeneratorActor&&); \
	NO_API ACausticsGeneratorActor(const ACausticsGeneratorActor&); \
public:


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACausticsGeneratorActor(ACausticsGeneratorActor&&); \
	NO_API ACausticsGeneratorActor(const ACausticsGeneratorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACausticsGeneratorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACausticsGeneratorActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACausticsGeneratorActor)


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_15_PROLOG \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_EVENT_PARMS


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_RPC_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_INCLASS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_SPARSE_DATA \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class ACausticsGeneratorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
