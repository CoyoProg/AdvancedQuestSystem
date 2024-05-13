// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSystem/AQ_QuestManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
#ifdef ADVANCEDQUEST_AQ_QuestManager_generated_h
#error "AQ_QuestManager.generated.h already included, missing '#pragma once' in AQ_QuestManager.h"
#endif
#define ADVANCEDQUEST_AQ_QuestManager_generated_h

#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_11_DELEGATE \
static inline void FOnNewDayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewDayDelegate) \
{ \
	OnNewDayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_12_DELEGATE \
static inline void FOnNewWeekDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewWeekDelegate) \
{ \
	OnNewWeekDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_SPARSE_DATA
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryQuest);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryQuest);


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_ACCESSORS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_CALLBACK_WRAPPERS
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_QuestManager(); \
	friend struct Z_Construct_UClass_UAQ_QuestManager_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestManager)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_QuestManager(); \
	friend struct Z_Construct_UClass_UAQ_QuestManager_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestManager)


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_QuestManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_QuestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestManager(UAQ_QuestManager&&); \
	NO_API UAQ_QuestManager(const UAQ_QuestManager&); \
public: \
	NO_API virtual ~UAQ_QuestManager();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestManager(UAQ_QuestManager&&); \
	NO_API UAQ_QuestManager(const UAQ_QuestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAQ_QuestManager) \
	NO_API virtual ~UAQ_QuestManager();


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_15_PROLOG
#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_RPC_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_INCLASS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_SPARSE_DATA \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_ACCESSORS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_CALLBACK_WRAPPERS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_QuestManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
