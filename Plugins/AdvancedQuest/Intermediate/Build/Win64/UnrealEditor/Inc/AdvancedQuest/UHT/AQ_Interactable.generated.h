// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/AQ_Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_Interactable_generated_h
#error "AQ_Interactable.generated.h already included, missing '#pragma once' in AQ_Interactable.h"
#endif
#define ADVANCEDQUEST_AQ_Interactable_generated_h

#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_SPARSE_DATA
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuestStateChanged); \
	DECLARE_FUNCTION(execEnableParticles);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuestStateChanged); \
	DECLARE_FUNCTION(execEnableParticles);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_ACCESSORS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_CALLBACK_WRAPPERS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAQ_Interactable(); \
	friend struct Z_Construct_UClass_AAQ_Interactable_Statics; \
public: \
	DECLARE_CLASS(AAQ_Interactable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(AAQ_Interactable) \
	virtual UObject* _getUObject() const override { return const_cast<AAQ_Interactable*>(this); }


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAQ_Interactable(); \
	friend struct Z_Construct_UClass_AAQ_Interactable_Statics; \
public: \
	DECLARE_CLASS(AAQ_Interactable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(AAQ_Interactable) \
	virtual UObject* _getUObject() const override { return const_cast<AAQ_Interactable*>(this); }


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAQ_Interactable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAQ_Interactable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAQ_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAQ_Interactable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAQ_Interactable(AAQ_Interactable&&); \
	NO_API AAQ_Interactable(const AAQ_Interactable&); \
public: \
	NO_API virtual ~AAQ_Interactable();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAQ_Interactable(AAQ_Interactable&&); \
	NO_API AAQ_Interactable(const AAQ_Interactable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAQ_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAQ_Interactable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAQ_Interactable) \
	NO_API virtual ~AAQ_Interactable();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_10_PROLOG
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_RPC_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_INCLASS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_INCLASS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class AAQ_Interactable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
