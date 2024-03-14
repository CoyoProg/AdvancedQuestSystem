// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Enums/AQ_RequiermentEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_RequiermentEventType() {}
// Cross Module References
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_RequiermentData();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AQ_RequiermentData;
class UScriptStruct* FAQ_RequiermentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AQ_RequiermentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AQ_RequiermentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAQ_RequiermentData, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("AQ_RequiermentData"));
	}
	return Z_Registration_Info_UScriptStruct_AQ_RequiermentData.OuterSingleton;
}
template<> ADVANCEDQUEST_API UScriptStruct* StaticStruct<FAQ_RequiermentData>()
{
	return FAQ_RequiermentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EventID_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAQ_RequiermentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Requirement" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAQ_RequiermentData, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_Inner = { "QuestID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Requirement" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAQ_RequiermentData, QuestID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID_Inner = { "EventID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Requirement" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAQ_RequiermentData, EventID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_EventID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		&NewStructOps,
		"AQ_RequiermentData",
		sizeof(FAQ_RequiermentData),
		alignof(FAQ_RequiermentData),
		Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAQ_RequiermentData()
	{
		if (!Z_Registration_Info_UScriptStruct_AQ_RequiermentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AQ_RequiermentData.InnerSingleton, Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AQ_RequiermentData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_RequiermentEventType;
	static UEnum* EAQ_RequiermentEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_RequiermentEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_RequiermentEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_RequiermentEventType"));
		}
		return Z_Registration_Info_UEnum_EAQ_RequiermentEventType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_RequiermentEventType>()
	{
		return EAQ_RequiermentEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enumerators[] = {
		{ "EAQ_RequiermentEventType::Level", (int64)EAQ_RequiermentEventType::Level },
		{ "EAQ_RequiermentEventType::Quest", (int64)EAQ_RequiermentEventType::Quest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "Level.Comment", "/**\n *\n */" },
		{ "Level.DisplayName", "Level Requierment" },
		{ "Level.Name", "EAQ_RequiermentEventType::Level" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
		{ "Quest.Comment", "/**\n *\n */" },
		{ "Quest.DisplayName", "Quest Requierment" },
		{ "Quest.Name", "EAQ_RequiermentEventType::Quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_RequiermentEventType",
		"EAQ_RequiermentEventType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_RequiermentEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_RequiermentEventType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_RequiermentEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::EnumInfo[] = {
		{ EAQ_RequiermentEventType_StaticEnum, TEXT("EAQ_RequiermentEventType"), &Z_Registration_Info_UEnum_EAQ_RequiermentEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68243071U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo[] = {
		{ FAQ_RequiermentData::StaticStruct, Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewStructOps, TEXT("AQ_RequiermentData"), &Z_Registration_Info_UScriptStruct_AQ_RequiermentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAQ_RequiermentData), 2980894582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_1086744711(TEXT("/Script/AdvancedQuest"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
