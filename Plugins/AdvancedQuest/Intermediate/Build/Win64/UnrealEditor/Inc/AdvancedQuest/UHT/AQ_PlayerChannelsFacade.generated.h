// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_PlayerChannelsFacade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAQ_ItemData;
class UAQ_Quest;
class UObject;
enum class EAQ_CombatEventType : uint8;
enum class EAQ_EnvironmentEventType : uint8;
enum class EAQ_QuestState : uint8;
#ifdef ADVANCEDQUEST_AQ_PlayerChannelsFacade_generated_h
#error "AQ_PlayerChannelsFacade.generated.h already included, missing '#pragma once' in AQ_PlayerChannelsFacade.h"
#endif
#define ADVANCEDQUEST_AQ_PlayerChannelsFacade_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCombatEventNotify_Implementation(EAQ_CombatEventType eventType, UObject* entity, float amount) {}; \
	virtual void OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType eventType, UObject* entity) {}; \
	virtual void OnQuestEnable_Implementation(UAQ_Quest* quest) {}; \
 \
	DECLARE_FUNCTION(execOnCombatEventNotify); \
	DECLARE_FUNCTION(execOnEnvironmentEventNotify); \
	DECLARE_FUNCTION(execOnQuestEnable); \
	DECLARE_FUNCTION(execOnQuestStateChanged);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_CALLBACK_WRAPPERS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_PlayerChannelsFacade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_PlayerChannelsFacade(UAQ_PlayerChannelsFacade&&); \
	NO_API UAQ_PlayerChannelsFacade(const UAQ_PlayerChannelsFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_PlayerChannelsFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_PlayerChannelsFacade); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_PlayerChannelsFacade) \
	NO_API virtual ~UAQ_PlayerChannelsFacade();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAQ_PlayerChannelsFacade(); \
	friend struct Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics; \
public: \
	DECLARE_CLASS(UAQ_PlayerChannelsFacade, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_PlayerChannelsFacade)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAQ_PlayerChannelsFacade() {} \
public: \
	typedef UAQ_PlayerChannelsFacade UClassType; \
	typedef IAQ_PlayerChannelsFacade ThisClass; \
	static void Execute_AddItemToInvetory(UObject* O, UAQ_ItemData* item, int32 amount); \
	static void Execute_OnCombatEventNotify(UObject* O, EAQ_CombatEventType eventType, UObject* entity, float amount); \
	static void Execute_OnEnvironmentEventNotify(UObject* O, EAQ_EnvironmentEventType eventType, UObject* entity); \
	static void Execute_OnQuestEnable(UObject* O, UAQ_Quest* quest); \
	static void Execute_RemoveItemFromInvetory(UObject* O, UAQ_ItemData* item, int32 amount, bool bRemoveCompletely); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_16_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_CALLBACK_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_PlayerChannelsFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
