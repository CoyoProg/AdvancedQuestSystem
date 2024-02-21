// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSystem/AQ_QuestComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAQ_PlayerChannelsFacade;
class UAQ_Quest;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_QuestComponent_generated_h
#error "AQ_QuestComponent.generated.h already included, missing '#pragma once' in AQ_QuestComponent.h"
#endif
#define ADVANCEDQUEST_AQ_QuestComponent_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics; \
	ADVANCEDQUEST_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDQUEST_API UScriptStruct* StaticStruct<struct FAQ_IsGiverOrReceiver>();

#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_27_DELEGATE \
struct _Script_AdvancedQuest_eventOnStateChangedBueprintDelegate_Parms \
{ \
	EAQ_QuestState QuestState; \
}; \
static inline void FOnStateChangedBueprintDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStateChangedBueprintDelegate, EAQ_QuestState QuestState) \
{ \
	_Script_AdvancedQuest_eventOnStateChangedBueprintDelegate_Parms Parms; \
	Parms.QuestState=QuestState; \
	OnStateChangedBueprintDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRerunScript); \
	DECLARE_FUNCTION(execUpdateQuestMarker); \
	DECLARE_FUNCTION(execSetQuestMarker); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execOnQuestRequirementMet); \
	DECLARE_FUNCTION(execOnQuestStateChangedWrapper);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRerunScript); \
	DECLARE_FUNCTION(execUpdateQuestMarker); \
	DECLARE_FUNCTION(execSetQuestMarker); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execOnQuestRequirementMet); \
	DECLARE_FUNCTION(execOnQuestStateChangedWrapper);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_QuestComponent(); \
	friend struct Z_Construct_UClass_UAQ_QuestComponent_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestComponent)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_QuestComponent(); \
	friend struct Z_Construct_UClass_UAQ_QuestComponent_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestComponent)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_QuestComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_QuestComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestComponent(UAQ_QuestComponent&&); \
	NO_API UAQ_QuestComponent(const UAQ_QuestComponent&); \
public:


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestComponent(UAQ_QuestComponent&&); \
	NO_API UAQ_QuestComponent(const UAQ_QuestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_QuestComponent)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_29_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_RPC_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_INCLASS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_QuestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
