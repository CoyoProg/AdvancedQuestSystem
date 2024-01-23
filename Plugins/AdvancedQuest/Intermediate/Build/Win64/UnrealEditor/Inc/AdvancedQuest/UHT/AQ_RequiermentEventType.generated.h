// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/AQ_RequiermentEventType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDQUEST_AQ_RequiermentEventType_generated_h
#error "AQ_RequiermentEventType.generated.h already included, missing '#pragma once' in AQ_RequiermentEventType.h"
#endif
#define ADVANCEDQUEST_AQ_RequiermentEventType_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics; \
	ADVANCEDQUEST_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDQUEST_API UScriptStruct* StaticStruct<struct FAQ_RequiermentData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h


#define FOREACH_ENUM_EAQ_REQUIERMENTEVENTTYPE(op) \
	op(EAQ_RequiermentEventType::Level) \
	op(EAQ_RequiermentEventType::Quest) 

enum class EAQ_RequiermentEventType : uint8;
template<> struct TIsUEnumClass<EAQ_RequiermentEventType> { enum { Value = true }; };
template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_RequiermentEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
