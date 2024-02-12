// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_CombatChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAQ_CombatEventType : uint8;
enum class EAQ_NotifyEventType : uint8;
#ifdef ADVANCEDQUEST_AQ_CombatChannel_generated_h
#error "AQ_CombatChannel.generated.h already included, missing '#pragma once' in AQ_CombatChannel.h"
#endif
#define ADVANCEDQUEST_AQ_CombatChannel_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_19_DELEGATE \
ADVANCEDQUEST_API void FOnCombatEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCombatEventDelegate, UObject* entity, EAQ_NotifyEventType eventType, float amount);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCombatEventNotify);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_CombatChannel(); \
	friend struct Z_Construct_UClass_UAQ_CombatChannel_Statics; \
public: \
	DECLARE_CLASS(UAQ_CombatChannel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_CombatChannel)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_CombatChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_CombatChannel(UAQ_CombatChannel&&); \
	NO_API UAQ_CombatChannel(const UAQ_CombatChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_CombatChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_CombatChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_CombatChannel) \
	NO_API virtual ~UAQ_CombatChannel();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_24_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_CombatChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h


#define FOREACH_ENUM_EAQ_COMBATEVENTTYPE(op) \
	op(EAQ_CombatEventType::Kill) \
	op(EAQ_CombatEventType::Heal) \
	op(EAQ_CombatEventType::Damage) \
	op(EAQ_CombatEventType::Protect) 

enum class EAQ_CombatEventType : uint8;
template<> struct TIsUEnumClass<EAQ_CombatEventType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_CombatEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
