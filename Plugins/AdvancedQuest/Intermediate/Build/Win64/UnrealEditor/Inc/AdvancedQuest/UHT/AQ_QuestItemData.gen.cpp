// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/DataAssets/AQ_QuestItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestItemData() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestItemData();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestItemData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	void UAQ_QuestItemData::StaticRegisterNativesUAQ_QuestItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestItemData);
	UClass* Z_Construct_UClass_UAQ_QuestItemData_NoRegister()
	{
		return UAQ_QuestItemData::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAQ_ItemData,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestItemData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestItemData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/AQ_QuestItemData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_QuestItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestItemData_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_QuestItemData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_QuestItemData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestItemData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestItemData_Statics::NewProp_QuestID_MetaData), Z_Construct_UClass_UAQ_QuestItemData_Statics::NewProp_QuestID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestItemData_Statics::NewProp_QuestID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestItemData_Statics::ClassParams = {
		&UAQ_QuestItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAQ_QuestItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_QuestItemData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestItemData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_QuestItemData()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestItemData.OuterSingleton, Z_Construct_UClass_UAQ_QuestItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestItemData.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestItemData>()
	{
		return UAQ_QuestItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestItemData);
	UAQ_QuestItemData::~UAQ_QuestItemData() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_QuestItemData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_QuestItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestItemData, UAQ_QuestItemData::StaticClass, TEXT("UAQ_QuestItemData"), &Z_Registration_Info_UClass_UAQ_QuestItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestItemData), 3070310903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_QuestItemData_h_2093087879(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_QuestItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_QuestItemData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
