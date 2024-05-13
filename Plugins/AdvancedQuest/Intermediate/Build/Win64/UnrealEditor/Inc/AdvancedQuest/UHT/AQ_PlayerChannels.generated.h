// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_PlayerChannels.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
class UAQ_SpecialEventData;
class UObject;
enum class EAQ_CombatEventType : uint8;
enum class EAQ_EnvironmentEventType : uint8;
enum class EAQ_NotifyEventType : uint8;
enum class EAQ_ObjectivesType : uint8;
struct FAQ_Objectives;
#ifdef ADVANCEDQUEST_AQ_PlayerChannels_generated_h
#error "AQ_PlayerChannels.generated.h already included, missing '#pragma once' in AQ_PlayerChannels.h"
#endif
#define ADVANCEDQUEST_AQ_PlayerChannels_generated_h

#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_20_DELEGATE \
struct _Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms \
{ \
	UObject* entity; \
	EAQ_NotifyEventType eventType; \
	float amount; \
}; \
static inline void FOnPlayerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEventDelegate, UObject* entity, EAQ_NotifyEventType eventType, float amount) \
{ \
	_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms Parms; \
	Parms.entity=entity; \
	Parms.eventType=eventType; \
	Parms.amount=amount; \
	OnPlayerEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_SPARSE_DATA
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSpecialEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnCombatEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnEnvironmentEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnQuestEnable_Implementation); \
	DECLARE_FUNCTION(execOnPlayerLevelUp); \
	DECLARE_FUNCTION(execRemoveObserver); \
	DECLARE_FUNCTION(execAddObserver);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSpecialEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnCombatEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnEnvironmentEventNotify_Implementation); \
	DECLARE_FUNCTION(execOnQuestEnable_Implementation); \
	DECLARE_FUNCTION(execOnPlayerLevelUp); \
	DECLARE_FUNCTION(execRemoveObserver); \
	DECLARE_FUNCTION(execAddObserver);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_ACCESSORS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_CALLBACK_WRAPPERS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_PlayerChannels(); \
	friend struct Z_Construct_UClass_UAQ_PlayerChannels_Statics; \
public: \
	DECLARE_CLASS(UAQ_PlayerChannels, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_PlayerChannels) \
	virtual UObject* _getUObject() const override { return const_cast<UAQ_PlayerChannels*>(this); }


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_PlayerChannels(); \
	friend struct Z_Construct_UClass_UAQ_PlayerChannels_Statics; \
public: \
	DECLARE_CLASS(UAQ_PlayerChannels, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_PlayerChannels) \
	virtual UObject* _getUObject() const override { return const_cast<UAQ_PlayerChannels*>(this); }


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_PlayerChannels(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_PlayerChannels) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_PlayerChannels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_PlayerChannels); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_PlayerChannels(UAQ_PlayerChannels&&); \
	NO_API UAQ_PlayerChannels(const UAQ_PlayerChannels&); \
public:


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_PlayerChannels(UAQ_PlayerChannels&&); \
	NO_API UAQ_PlayerChannels(const UAQ_PlayerChannels&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_PlayerChannels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_PlayerChannels); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_PlayerChannels)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_25_PROLOG
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_RPC_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_INCLASS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_INCLASS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_PlayerChannels>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
