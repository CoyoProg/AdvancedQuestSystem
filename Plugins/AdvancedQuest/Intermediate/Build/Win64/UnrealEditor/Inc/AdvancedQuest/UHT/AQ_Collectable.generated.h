// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/AQ_Collectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDQUEST_AQ_Collectable_generated_h
#error "AQ_Collectable.generated.h already included, missing '#pragma once' in AQ_Collectable.h"
#endif
#define ADVANCEDQUEST_AQ_Collectable_generated_h

#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_SPARSE_DATA
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_RPC_WRAPPERS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_ACCESSORS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAQ_Collectable(); \
	friend struct Z_Construct_UClass_AAQ_Collectable_Statics; \
public: \
	DECLARE_CLASS(AAQ_Collectable, AAQ_Interactable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(AAQ_Collectable)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAQ_Collectable(); \
	friend struct Z_Construct_UClass_AAQ_Collectable_Statics; \
public: \
	DECLARE_CLASS(AAQ_Collectable, AAQ_Interactable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(AAQ_Collectable)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAQ_Collectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAQ_Collectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAQ_Collectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAQ_Collectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAQ_Collectable(AAQ_Collectable&&); \
	NO_API AAQ_Collectable(const AAQ_Collectable&); \
public: \
	NO_API virtual ~AAQ_Collectable();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAQ_Collectable(AAQ_Collectable&&); \
	NO_API AAQ_Collectable(const AAQ_Collectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAQ_Collectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAQ_Collectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAQ_Collectable) \
	NO_API virtual ~AAQ_Collectable();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_10_PROLOG
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_RPC_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_INCLASS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_INCLASS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class AAQ_Collectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
