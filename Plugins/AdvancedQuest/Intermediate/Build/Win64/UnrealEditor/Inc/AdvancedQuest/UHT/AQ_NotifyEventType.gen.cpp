// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Enums/AQ_NotifyEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_NotifyEventType() {}
// Cross Module References
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_NotifyEventType;
	static UEnum* EAQ_NotifyEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_NotifyEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_NotifyEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_NotifyEventType"));
		}
		return Z_Registration_Info_UEnum_EAQ_NotifyEventType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_NotifyEventType>()
	{
		return EAQ_NotifyEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enumerators[] = {
		{ "EAQ_NotifyEventType::Kill", (int64)EAQ_NotifyEventType::Kill },
		{ "EAQ_NotifyEventType::Heal", (int64)EAQ_NotifyEventType::Heal },
		{ "EAQ_NotifyEventType::Damage", (int64)EAQ_NotifyEventType::Damage },
		{ "EAQ_NotifyEventType::Protect", (int64)EAQ_NotifyEventType::Protect },
		{ "EAQ_NotifyEventType::Collect", (int64)EAQ_NotifyEventType::Collect },
		{ "EAQ_NotifyEventType::RemovedFromInventory", (int64)EAQ_NotifyEventType::RemovedFromInventory },
		{ "EAQ_NotifyEventType::Deliver", (int64)EAQ_NotifyEventType::Deliver },
		{ "EAQ_NotifyEventType::Interact", (int64)EAQ_NotifyEventType::Interact },
		{ "EAQ_NotifyEventType::Travel", (int64)EAQ_NotifyEventType::Travel },
		{ "EAQ_NotifyEventType::MiniGame", (int64)EAQ_NotifyEventType::MiniGame },
		{ "EAQ_NotifyEventType::PlayerLevelUp", (int64)EAQ_NotifyEventType::PlayerLevelUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collect.Comment", "// Inventory\n" },
		{ "Collect.DisplayName", "Collect" },
		{ "Collect.Name", "EAQ_NotifyEventType::Collect" },
		{ "Collect.ToolTip", "Inventory" },
		{ "Comment", "/**\n *\n */" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EAQ_NotifyEventType::Damage" },
		{ "Deliver.DisplayName", "Deliver to" },
		{ "Deliver.Name", "EAQ_NotifyEventType::Deliver" },
		{ "Heal.DisplayName", "Heal" },
		{ "Heal.Name", "EAQ_NotifyEventType::Heal" },
		{ "Interact.Comment", "// Environment\n" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "EAQ_NotifyEventType::Interact" },
		{ "Interact.ToolTip", "Environment" },
		{ "Kill.Comment", "/**\n *\n */// Combat \n" },
		{ "Kill.DisplayName", "Kill" },
		{ "Kill.Name", "EAQ_NotifyEventType::Kill" },
		{ "Kill.ToolTip", "// Combat" },
		{ "MiniGame.DisplayName", "Mini-Game" },
		{ "MiniGame.Name", "EAQ_NotifyEventType::MiniGame" },
		{ "ModuleRelativePath", "Public/Enums/AQ_NotifyEventType.h" },
		{ "PlayerLevelUp.Comment", "// Stats\n" },
		{ "PlayerLevelUp.DisplayName", "Player Level Up" },
		{ "PlayerLevelUp.Name", "EAQ_NotifyEventType::PlayerLevelUp" },
		{ "PlayerLevelUp.ToolTip", "Stats" },
		{ "Protect.DisplayName", "Protect" },
		{ "Protect.Name", "EAQ_NotifyEventType::Protect" },
		{ "RemovedFromInventory.DisplayName", "Remove From Inventory" },
		{ "RemovedFromInventory.Name", "EAQ_NotifyEventType::RemovedFromInventory" },
		{ "Travel.DisplayName", "Travel" },
		{ "Travel.Name", "EAQ_NotifyEventType::Travel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_NotifyEventType",
		"EAQ_NotifyEventType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_NotifyEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_NotifyEventType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_NotifyEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h_Statics::EnumInfo[] = {
		{ EAQ_NotifyEventType_StaticEnum, TEXT("EAQ_NotifyEventType"), &Z_Registration_Info_UEnum_EAQ_NotifyEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4064980091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h_201332224(TEXT("/Script/AdvancedQuest"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_NotifyEventType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
