// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSystem/AQ_Quest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
class UAQ_SpecialEventData;
class UObject;
enum class EAQ_NotifyEventType : uint8;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_Quest_generated_h
#error "AQ_Quest.generated.h already included, missing '#pragma once' in AQ_Quest.h"
#endif
#define ADVANCEDQUEST_AQ_Quest_generated_h

#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_25_DELEGATE \
struct _Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms \
{ \
	UAQ_Quest* QuestUpdate; \
	EAQ_QuestState QuestState; \
}; \
static inline void FQuestStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestStateChangedDelegate, UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) \
{ \
	_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms Parms; \
	Parms.QuestUpdate=QuestUpdate; \
	Parms.QuestState=QuestState; \
	QuestStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_26_DELEGATE \
struct _Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms \
{ \
	UAQ_Quest* QuestUpdate; \
}; \
static inline void FObjectivesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectivesUpdatedDelegate, UAQ_Quest* QuestUpdate) \
{ \
	_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms Parms; \
	Parms.QuestUpdate=QuestUpdate; \
	ObjectivesUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_27_DELEGATE \
struct _Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms \
{ \
	UAQ_Quest* QuestUpdate; \
}; \
static inline void FQuestRequirementMetDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestRequirementMetDelegate, UAQ_Quest* QuestUpdate) \
{ \
	_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms Parms; \
	Parms.QuestUpdate=QuestUpdate; \
	QuestRequirementMetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_SPARSE_DATA
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNewDay); \
	DECLARE_FUNCTION(execOnLevelRequirementChange); \
	DECLARE_FUNCTION(execOnEventRequirementChange); \
	DECLARE_FUNCTION(execOnQuestRequirementChange); \
	DECLARE_FUNCTION(execOnNotify); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execResetObjectives); \
	DECLARE_FUNCTION(execResetQuest); \
	DECLARE_FUNCTION(execDisableQuest); \
	DECLARE_FUNCTION(execEnableQuest);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNewDay); \
	DECLARE_FUNCTION(execOnLevelRequirementChange); \
	DECLARE_FUNCTION(execOnEventRequirementChange); \
	DECLARE_FUNCTION(execOnQuestRequirementChange); \
	DECLARE_FUNCTION(execOnNotify); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execResetObjectives); \
	DECLARE_FUNCTION(execResetQuest); \
	DECLARE_FUNCTION(execDisableQuest); \
	DECLARE_FUNCTION(execEnableQuest);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_ACCESSORS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_Quest(); \
	friend struct Z_Construct_UClass_UAQ_Quest_Statics; \
public: \
	DECLARE_CLASS(UAQ_Quest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_Quest)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_Quest(); \
	friend struct Z_Construct_UClass_UAQ_Quest_Statics; \
public: \
	DECLARE_CLASS(UAQ_Quest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_Quest)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_Quest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_Quest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_Quest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_Quest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_Quest(UAQ_Quest&&); \
	NO_API UAQ_Quest(const UAQ_Quest&); \
public:


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_Quest(UAQ_Quest&&); \
	NO_API UAQ_Quest(const UAQ_Quest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_Quest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_Quest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_Quest)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_32_PROLOG
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_RPC_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_INCLASS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_INCLASS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_Quest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h


#define FOREACH_ENUM_EAQ_QUESTSTATE(op) \
	op(EAQ_QuestState::Active) \
	op(EAQ_QuestState::Pending) \
	op(EAQ_QuestState::Valid) \
	op(EAQ_QuestState::Archive) \
	op(EAQ_QuestState::Failed) 

enum class EAQ_QuestState : uint8;
template<> struct TIsUEnumClass<EAQ_QuestState> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_QuestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
