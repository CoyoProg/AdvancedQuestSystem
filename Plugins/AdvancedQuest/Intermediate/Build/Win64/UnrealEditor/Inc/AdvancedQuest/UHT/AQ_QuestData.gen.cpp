// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestData.h"
#include "AdvancedQuest/Public/Enums/AQ_RequiermentEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestData() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestData();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestData_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_Objectives();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_RequiermentData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AQ_Objectives;
class UScriptStruct* FAQ_Objectives::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AQ_Objectives.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AQ_Objectives.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAQ_Objectives, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("AQ_Objectives"));
	}
	return Z_Registration_Info_UScriptStruct_AQ_Objectives.OuterSingleton;
}
template<> ADVANCEDQUEST_API UScriptStruct* StaticStruct<FAQ_Objectives>()
{
	return FAQ_Objectives::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAQ_Objectives_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_objectiveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectiveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_objectiveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectiveSummary_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_objectiveSummary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isUnique_MetaData[];
#endif
		static void NewProp_isUnique_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUnique;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uniqueObjectID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_uniqueObjectID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountNeeded_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amountNeeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isObjectiveComplete_MetaData[];
#endif
		static void NewProp_isObjectiveComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isObjectiveComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAQ_Objectives>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Objectives specificities */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objectives specificities" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType = { "objectiveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, objectiveType), Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType_MetaData) }; // 1194056288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectTarget_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "EditCondition", "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectTarget = { "objectTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, objectTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectTarget_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_itemTarget_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "EditCondition", "objectiveType == EAQ_ObjectivesType::Collect || objectiveType == EAQ_ObjectivesType::Deliver" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_itemTarget = { "itemTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, itemTarget), Z_Construct_UClass_UAQ_ItemData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_itemTarget_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_itemTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveSummary_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveSummary = { "objectiveSummary", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, objectiveSummary), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveSummary_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveSummary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the goal is a unique target*/" },
#endif
		{ "EditCondition", "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the goal is a unique target" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique_SetBit(void* Obj)
	{
		((FAQ_Objectives*)Obj)->isUnique = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique = { "isUnique", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAQ_Objectives), &Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_uniqueObjectID_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "EditCondition", "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_uniqueObjectID = { "uniqueObjectID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, uniqueObjectID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_uniqueObjectID_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_uniqueObjectID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_amountNeeded_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount needed to complete the objective */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount needed to complete the objective" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_amountNeeded = { "amountNeeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, amountNeeded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_amountNeeded_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_amountNeeded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_CurrentAmount_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_CurrentAmount = { "CurrentAmount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAQ_Objectives, CurrentAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_CurrentAmount_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_CurrentAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Data" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete_SetBit(void* Obj)
	{
		((FAQ_Objectives*)Obj)->isObjectiveComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete = { "isObjectiveComplete", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAQ_Objectives), &Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete_MetaData), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAQ_Objectives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_itemTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_objectiveSummary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isUnique,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_uniqueObjectID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_amountNeeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_CurrentAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewProp_isObjectiveComplete,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAQ_Objectives_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		&NewStructOps,
		"AQ_Objectives",
		Z_Construct_UScriptStruct_FAQ_Objectives_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::PropPointers),
		sizeof(FAQ_Objectives),
		alignof(FAQ_Objectives),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAQ_Objectives_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_Objectives_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAQ_Objectives()
	{
		if (!Z_Registration_Info_UScriptStruct_AQ_Objectives.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AQ_Objectives.InnerSingleton, Z_Construct_UScriptStruct_FAQ_Objectives_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AQ_Objectives.InnerSingleton;
	}
	void UAQ_QuestData::StaticRegisterNativesUAQ_QuestData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestData);
	UClass* Z_Construct_UClass_UAQ_QuestData_NoRegister()
	{
		return UAQ_QuestData::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_questTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_questTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_questDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_questDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_questSummary_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_questSummary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_questRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_questRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requirementsProgression_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_requirementsProgression;
		static const UECodeGen_Private::FStructPropertyParams NewProp_objectives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objectives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xpReward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xpReward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goldReward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_goldReward;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemsReward_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsReward_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_itemsReward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "QuestSystem/AQ_QuestData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questTitle_MetaData[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Quest properties */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quest properties" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questTitle = { "questTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, questTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questTitle_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questDescription_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questDescription = { "questDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, questDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questDescription_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questSummary_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questSummary = { "questSummary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, questSummary), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questSummary_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questSummary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_QuestID_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_QuestID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questRequirements_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questRequirements = { "questRequirements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, questRequirements), Z_Construct_UScriptStruct_FAQ_RequiermentData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questRequirements_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questRequirements_MetaData) }; // 2724767121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_requirementsProgression_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_requirementsProgression = { "requirementsProgression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, requirementsProgression), Z_Construct_UScriptStruct_FAQ_RequiermentData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_requirementsProgression_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_requirementsProgression_MetaData) }; // 2724767121
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives_Inner = { "objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAQ_Objectives, METADATA_PARAMS(0, nullptr) }; // 1614143856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives_MetaData[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Objectives */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objectives" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives = { "objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives_MetaData) }; // 1614143856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_xpReward_MetaData[] = {
		{ "Category", "Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rewards */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewards" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_xpReward = { "xpReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, xpReward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_xpReward_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_xpReward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_goldReward_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_goldReward = { "goldReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, goldReward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_goldReward_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_goldReward_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward_Inner = { "itemsReward", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAQ_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward = { "itemsReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestData, itemsReward), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward_MetaData), Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questSummary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_QuestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_questRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_requirementsProgression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_objectives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_xpReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_goldReward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestData_Statics::NewProp_itemsReward,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestData_Statics::ClassParams = {
		&UAQ_QuestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAQ_QuestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_QuestData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_QuestData()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestData.OuterSingleton, Z_Construct_UClass_UAQ_QuestData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestData.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestData>()
	{
		return UAQ_QuestData::StaticClass();
	}
	UAQ_QuestData::UAQ_QuestData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestData);
	UAQ_QuestData::~UAQ_QuestData() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ScriptStructInfo[] = {
		{ FAQ_Objectives::StaticStruct, Z_Construct_UScriptStruct_FAQ_Objectives_Statics::NewStructOps, TEXT("AQ_Objectives"), &Z_Registration_Info_UScriptStruct_AQ_Objectives, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAQ_Objectives), 1614143856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestData, UAQ_QuestData::StaticClass, TEXT("UAQ_QuestData"), &Z_Registration_Info_UClass_UAQ_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestData), 3218243745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_3082827311(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
