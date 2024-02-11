// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_QuestChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_Quest;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_QuestChannel_generated_h
#error "AQ_QuestChannel.generated.h already included, missing '#pragma once' in AQ_QuestChannel.h"
#endif
#define ADVANCEDQUEST_AQ_QuestChannel_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_17_DELEGATE \
ADVANCEDQUEST_API void FQuestRequirementChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestRequirementChangedDelegate, int32 QuestID);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_18_DELEGATE \
ADVANCEDQUEST_API void FLevelRequirementChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LevelRequirementChangedDelegate, int32 PlayerLevel);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuestRequirementMet); \
	DECLARE_FUNCTION(execOnQuestUpdate); \
	DECLARE_FUNCTION(execOnQuestStateChanged);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_QuestChannel(); \
	friend struct Z_Construct_UClass_UAQ_QuestChannel_Statics; \
public: \
	DECLARE_CLASS(UAQ_QuestChannel, UAQ_Channels, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_QuestChannel)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_QuestChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_QuestChannel(UAQ_QuestChannel&&); \
	NO_API UAQ_QuestChannel(const UAQ_QuestChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_QuestChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_QuestChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_QuestChannel) \
	NO_API virtual ~UAQ_QuestChannel();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_23_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_QuestChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
