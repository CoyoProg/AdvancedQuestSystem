// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Enums/AQ_ObjectivesType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_ObjectivesType() {}
// Cross Module References
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_ObjectivesType;
	static UEnum* EAQ_ObjectivesType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ObjectivesType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_ObjectivesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_ObjectivesType"));
		}
		return Z_Registration_Info_UEnum_EAQ_ObjectivesType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_ObjectivesType>()
	{
		return EAQ_ObjectivesType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enumerators[] = {
		{ "EAQ_ObjectivesType::Interact", (int64)EAQ_ObjectivesType::Interact },
		{ "EAQ_ObjectivesType::Collect", (int64)EAQ_ObjectivesType::Collect },
		{ "EAQ_ObjectivesType::Deliver", (int64)EAQ_ObjectivesType::Deliver },
		{ "EAQ_ObjectivesType::Kill", (int64)EAQ_ObjectivesType::Kill },
		{ "EAQ_ObjectivesType::Protect", (int64)EAQ_ObjectivesType::Protect },
		{ "EAQ_ObjectivesType::Location", (int64)EAQ_ObjectivesType::Location },
		{ "EAQ_ObjectivesType::MiniGame", (int64)EAQ_ObjectivesType::MiniGame },
		{ "EAQ_ObjectivesType::PlayerLevelUp", (int64)EAQ_ObjectivesType::PlayerLevelUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collect.Comment", "/**\n *\n */" },
		{ "Collect.DisplayName", "Collect" },
		{ "Collect.Name", "EAQ_ObjectivesType::Collect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "Deliver.Comment", "/**\n *\n */" },
		{ "Deliver.DisplayName", "Deliver" },
		{ "Deliver.Name", "EAQ_ObjectivesType::Deliver" },
		{ "Interact.Comment", "/**\n *\n */" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "EAQ_ObjectivesType::Interact" },
		{ "Kill.Comment", "/**\n *\n */" },
		{ "Kill.DisplayName", "Kill" },
		{ "Kill.Name", "EAQ_ObjectivesType::Kill" },
		{ "Location.Comment", "/**\n *\n */" },
		{ "Location.DisplayName", "Location" },
		{ "Location.Name", "EAQ_ObjectivesType::Location" },
		{ "MiniGame.Comment", "/**\n *\n */" },
		{ "MiniGame.DisplayName", "Mini-Game" },
		{ "MiniGame.Name", "EAQ_ObjectivesType::MiniGame" },
		{ "ModuleRelativePath", "Public/Enums/AQ_ObjectivesType.h" },
		{ "PlayerLevelUp.Comment", "/**\n *\n */" },
		{ "PlayerLevelUp.DisplayName", "Player Level Up" },
		{ "PlayerLevelUp.Name", "EAQ_ObjectivesType::PlayerLevelUp" },
		{ "Protect.Comment", "/**\n *\n */" },
		{ "Protect.DisplayName", "Protect" },
		{ "Protect.Name", "EAQ_ObjectivesType::Protect" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_ObjectivesType",
		"EAQ_ObjectivesType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ObjectivesType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_ObjectivesType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_ObjectivesType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier;
	static UEnum* EAQ_ObjectivesSpecifier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_ObjectivesSpecifier"));
		}
		return Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_ObjectivesSpecifier>()
	{
		return EAQ_ObjectivesSpecifier_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enumerators[] = {
		{ "EAQ_ObjectivesSpecifier::None", (int64)EAQ_ObjectivesSpecifier::None },
		{ "EAQ_ObjectivesSpecifier::Unique", (int64)EAQ_ObjectivesSpecifier::Unique },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Enums/AQ_ObjectivesType.h" },
		{ "None.DisplayName", "Default" },
		{ "None.Name", "EAQ_ObjectivesSpecifier::None" },
		{ "Unique.DisplayName", "Unique" },
		{ "Unique.Name", "EAQ_ObjectivesSpecifier::Unique" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_ObjectivesSpecifier",
		"EAQ_ObjectivesSpecifier",
		Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesSpecifier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h_Statics::EnumInfo[] = {
		{ EAQ_ObjectivesType_StaticEnum, TEXT("EAQ_ObjectivesType"), &Z_Registration_Info_UEnum_EAQ_ObjectivesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1194056288U) },
		{ EAQ_ObjectivesSpecifier_StaticEnum, TEXT("EAQ_ObjectivesSpecifier"), &Z_Registration_Info_UEnum_EAQ_ObjectivesSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 296202151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h_823714912(TEXT("/Script/AdvancedQuest"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Enums_AQ_ObjectivesType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
