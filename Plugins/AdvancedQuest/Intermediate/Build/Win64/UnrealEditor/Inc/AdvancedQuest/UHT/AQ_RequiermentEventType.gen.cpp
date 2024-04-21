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
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_SpecialEventData_NoRegister();
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
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QuestID_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpecialEvents_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialEvents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpecialEvents;
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
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_ValueProp = { "QuestID", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_Key_KeyProp = { "QuestID_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Requirement" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAQ_RequiermentData, QuestID), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_ValueProp = { "SpecialEvents", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_Key_KeyProp = { "SpecialEvents_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAQ_SpecialEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_MetaData[] = {
		{ "Category", "Advanced Quest | Quest | Requirement" },
		{ "ModuleRelativePath", "Public/Enums/AQ_RequiermentEventType.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents = { "SpecialEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAQ_RequiermentData, SpecialEvents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_PlayerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_QuestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewProp_SpecialEvents,
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
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo[] = {
		{ FAQ_RequiermentData::StaticStruct, Z_Construct_UScriptStruct_FAQ_RequiermentData_Statics::NewStructOps, TEXT("AQ_RequiermentData"), &Z_Registration_Info_UScriptStruct_AQ_RequiermentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAQ_RequiermentData), 3391048052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_2461475312(TEXT("/Script/AdvancedQuest"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_RequiermentEventType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
