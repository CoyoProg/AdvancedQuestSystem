// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_EnvironmentChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAQ_EnvironmentEventType : uint8;
enum class EAQ_NotifyEventType : uint8;
#ifdef ADVANCEDQUEST_AQ_EnvironmentChannel_generated_h
#error "AQ_EnvironmentChannel.generated.h already included, missing '#pragma once' in AQ_EnvironmentChannel.h"
#endif
#define ADVANCEDQUEST_AQ_EnvironmentChannel_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_18_DELEGATE \
struct _Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms \
{ \
	UObject* entity; \
	EAQ_NotifyEventType eventType; \
	float amount; \
}; \
static inline void FOnEnvironmentEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvironmentEventDelegate, UObject* entity, EAQ_NotifyEventType eventType, float amount) \
{ \
	_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms Parms; \
	Parms.entity=entity; \
	Parms.eventType=eventType; \
	Parms.amount=amount; \
	OnEnvironmentEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnvironmentEventNotify);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnvironmentEventNotify);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_EnvironmentChannel(); \
	friend struct Z_Construct_UClass_UAQ_EnvironmentChannel_Statics; \
public: \
	DECLARE_CLASS(UAQ_EnvironmentChannel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_EnvironmentChannel)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAQ_EnvironmentChannel(); \
	friend struct Z_Construct_UClass_UAQ_EnvironmentChannel_Statics; \
public: \
	DECLARE_CLASS(UAQ_EnvironmentChannel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_EnvironmentChannel)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_EnvironmentChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_EnvironmentChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_EnvironmentChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_EnvironmentChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_EnvironmentChannel(UAQ_EnvironmentChannel&&); \
	NO_API UAQ_EnvironmentChannel(const UAQ_EnvironmentChannel&); \
public: \
	NO_API virtual ~UAQ_EnvironmentChannel();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_EnvironmentChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_EnvironmentChannel(UAQ_EnvironmentChannel&&); \
	NO_API UAQ_EnvironmentChannel(const UAQ_EnvironmentChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_EnvironmentChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_EnvironmentChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_EnvironmentChannel) \
	NO_API virtual ~UAQ_EnvironmentChannel();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_23_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_RPC_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_INCLASS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_EnvironmentChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h


#define FOREACH_ENUM_EAQ_ENVIRONMENTEVENTTYPE(op) \
	op(EAQ_EnvironmentEventType::Interact) \
	op(EAQ_EnvironmentEventType::Travel) \
	op(EAQ_EnvironmentEventType::MiniGame) 

enum class EAQ_EnvironmentEventType : uint8;
template<> struct TIsUEnumClass<EAQ_EnvironmentEventType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_EnvironmentEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
