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
class UObject;
enum class EAQ_NotifyEventType : uint8;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_Quest_generated_h
#error "AQ_Quest.generated.h already included, missing '#pragma once' in AQ_Quest.h"
#endif
#define ADVANCEDQUEST_AQ_Quest_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_27_DELEGATE \
ADVANCEDQUEST_API void FQuestStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestStateChangedDelegate, UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_28_DELEGATE \
ADVANCEDQUEST_API void FObjectivesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectivesUpdatedDelegate, UAQ_Quest* QuestUpdate);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_29_DELEGATE \
ADVANCEDQUEST_API void FQuestRequirementMetDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestRequirementMetDelegate, UAQ_Quest* QuestUpdate);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelRequirementChange); \
	DECLARE_FUNCTION(execOnQuestRequirementChange); \
	DECLARE_FUNCTION(execOnNotify); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execResetObjectives); \
	DECLARE_FUNCTION(execResetQuest); \
	DECLARE_FUNCTION(execDisableQuest); \
	DECLARE_FUNCTION(execEnableQuest);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_Quest(); \
	friend struct Z_Construct_UClass_UAQ_Quest_Statics; \
public: \
	DECLARE_CLASS(UAQ_Quest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_Quest)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_Quest(UAQ_Quest&&); \
	NO_API UAQ_Quest(const UAQ_Quest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_Quest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_Quest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_Quest)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_34_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_Quest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h


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
