// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/AQ_NotifyEventType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDQUEST_AQ_NotifyEventType_generated_h
#error "AQ_NotifyEventType.generated.h already included, missing '#pragma once' in AQ_NotifyEventType.h"
#endif
#define ADVANCEDQUEST_AQ_NotifyEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h


#define FOREACH_ENUM_EAQ_NOTIFYEVENTTYPE(op) \
	op(EAQ_NotifyEventType::Kill) \
	op(EAQ_NotifyEventType::Heal) \
	op(EAQ_NotifyEventType::Damage) \
	op(EAQ_NotifyEventType::Protect) \
	op(EAQ_NotifyEventType::Collect) \
	op(EAQ_NotifyEventType::RemovedFromInventory) \
	op(EAQ_NotifyEventType::Deliver) \
	op(EAQ_NotifyEventType::Interact) \
	op(EAQ_NotifyEventType::Travel) \
	op(EAQ_NotifyEventType::MiniGame) \
	op(EAQ_NotifyEventType::PlayerLevelUp) 

enum class EAQ_NotifyEventType : uint8;
template<> struct TIsUEnumClass<EAQ_NotifyEventType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_NotifyEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
