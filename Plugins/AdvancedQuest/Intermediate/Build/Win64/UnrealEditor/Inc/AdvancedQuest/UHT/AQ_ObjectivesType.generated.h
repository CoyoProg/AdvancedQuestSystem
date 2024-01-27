// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/AQ_ObjectivesType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDQUEST_AQ_ObjectivesType_generated_h
#error "AQ_ObjectivesType.generated.h already included, missing '#pragma once' in AQ_ObjectivesType.h"
#endif
#define ADVANCEDQUEST_AQ_ObjectivesType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h


#define FOREACH_ENUM_EAQ_OBJECTIVESTYPE(op) \
	op(EAQ_ObjectivesType::Interact) \
	op(EAQ_ObjectivesType::Collect) \
	op(EAQ_ObjectivesType::Deliver) \
	op(EAQ_ObjectivesType::Kill) \
	op(EAQ_ObjectivesType::Protect) \
	op(EAQ_ObjectivesType::Location) \
	op(EAQ_ObjectivesType::MiniGame) \
	op(EAQ_ObjectivesType::PlayerLevelUp) 

enum class EAQ_ObjectivesType : uint8;
template<> struct TIsUEnumClass<EAQ_ObjectivesType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_ObjectivesType>();

#define FOREACH_ENUM_EAQ_OBJECTIVESSPECIFIER(op) \
	op(EAQ_ObjectivesSpecifier::None) \
	op(EAQ_ObjectivesSpecifier::Unique) 

enum class EAQ_ObjectivesSpecifier : uint8;
template<> struct TIsUEnumClass<EAQ_ObjectivesSpecifier> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_ObjectivesSpecifier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
