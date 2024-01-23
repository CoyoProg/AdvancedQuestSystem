// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayersChannels/AQ_InventoryChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAQ_InventoryEventType : uint8;
#ifdef ADVANCEDQUEST_AQ_InventoryChannel_generated_h
#error "AQ_InventoryChannel.generated.h already included, missing '#pragma once' in AQ_InventoryChannel.h"
#endif
#define ADVANCEDQUEST_AQ_InventoryChannel_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInventoryEventNotify);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAQ_InventoryChannel(); \
	friend struct Z_Construct_UClass_UAQ_InventoryChannel_Statics; \
public: \
	DECLARE_CLASS(UAQ_InventoryChannel, UAQ_Channels, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), NO_API) \
	DECLARE_SERIALIZER(UAQ_InventoryChannel)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAQ_InventoryChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAQ_InventoryChannel(UAQ_InventoryChannel&&); \
	NO_API UAQ_InventoryChannel(const UAQ_InventoryChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAQ_InventoryChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_InventoryChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_InventoryChannel) \
	NO_API virtual ~UAQ_InventoryChannel();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_19_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_InventoryChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h


#define FOREACH_ENUM_EAQ_INVENTORYEVENTTYPE(op) \
	op(EAQ_InventoryEventType::Collect) \
	op(EAQ_InventoryEventType::RemoveFromInventory) 

enum class EAQ_InventoryEventType : uint8;
template<> struct TIsUEnumClass<EAQ_InventoryEventType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_InventoryEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
