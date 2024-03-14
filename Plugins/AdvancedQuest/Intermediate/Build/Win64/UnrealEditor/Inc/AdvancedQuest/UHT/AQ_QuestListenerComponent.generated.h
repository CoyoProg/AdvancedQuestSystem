// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSystem/AQ_QuestListenerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_QuestListenerComponent_generated_h
#error "AQ_QuestListenerComponent.generated.h already included, missing '#pragma once' in AQ_QuestListenerComponent.h"
#endif
#define ADVANCEDQUEST_AQ_QuestListenerComponent_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_9_DELEGATE \
struct _Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms \
{ \
	UAQ_Quest* questUpdate; \
	EAQ_QuestState QuestState; \
}; \
static inline void FOnQuestStateChangedListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStateChangedListenerDelegate, UAQ_Quest* questUpdate, EAQ_QuestState QuestState) \
{ \
	_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms Parms; \
	Parms.questUpdate=questUpdate; \
	Parms.QuestState=QuestState; \
	OnQuestStateChangedListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindFunctionsToQuestDelegates); \
	DECLARE_FUNCTION(execOnQuestStateChangedWrapper);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindFunctionsToQuestDelegates); \
	DECLARE_FUNCTION(execOnQuestStateChangedWrapper);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_QuestListenerComponent(); \
	friend struct Z_Construct_UClass_UAQ_QuestListenerComponent_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestListenerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestListenerComponent)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_QuestListenerComponent(); \
	friend struct Z_Construct_UClass_UAQ_QuestListenerComponent_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestListenerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestListenerComponent)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_QuestListenerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_QuestListenerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestListenerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestListenerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestListenerComponent(UAQ_QuestListenerComponent&&); \
	NO_API UAQ_QuestListenerComponent(const UAQ_QuestListenerComponent&); \
public: \
	NO_API virtual ~UAQ_QuestListenerComponent();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestListenerComponent(UAQ_QuestListenerComponent&&); \
	NO_API UAQ_QuestListenerComponent(const UAQ_QuestListenerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestListenerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestListenerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_QuestListenerComponent) \
	NO_API virtual ~UAQ_QuestListenerComponent();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_13_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_RPC_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_INCLASS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_QuestListenerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
