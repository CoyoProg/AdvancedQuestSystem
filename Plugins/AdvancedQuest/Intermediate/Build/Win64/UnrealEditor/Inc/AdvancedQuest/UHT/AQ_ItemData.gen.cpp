// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/DataAssets/AQ_ItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_ItemData() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_ItemType;
	static UEnum* EAQ_ItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_ItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_ItemType"));
		}
		return Z_Registration_Info_UEnum_EAQ_ItemType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_ItemType>()
	{
		return EAQ_ItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enumerators[] = {
		{ "EAQ_ItemType::Default", (int64)EAQ_ItemType::Default },
		{ "EAQ_ItemType::Ressource", (int64)EAQ_ItemType::Ressource },
		{ "EAQ_ItemType::Quest", (int64)EAQ_ItemType::Quest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.DisplayName", "World Item" },
		{ "Default.Name", "EAQ_ItemType::Default" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_ItemData.h" },
		{ "Quest.DisplayName", "Quest Item" },
		{ "Quest.Name", "EAQ_ItemType::Quest" },
		{ "Ressource.DisplayName", "Ressource Item" },
		{ "Ressource.Name", "EAQ_ItemType::Ressource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_ItemType",
		"EAQ_ItemType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_ItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_ItemType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_ItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_ItemType.InnerSingleton;
	}
	void UAQ_ItemData::StaticRegisterNativesUAQ_ItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_ItemData);
	UClass* Z_Construct_UClass_UAQ_ItemData_NoRegister()
	{
		return UAQ_ItemData::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_ItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[];
#endif
		static void NewProp_bIsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_ItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_ItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/AQ_ItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_ItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_Sprite_MetaData[] = {
		{ "Category", "Advanced Quest | Item" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_ItemData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_ItemData, Sprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_Sprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Advanced Quest | Item" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_ItemData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_ItemData, ItemName), METADATA_PARAMS(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Advanced Quest | Item" },
		{ "ModuleRelativePath", "Public/DataAssets/AQ_ItemData.h" },
	};
#endif
	void Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
	{
		((UAQ_ItemData*)Obj)->bIsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAQ_ItemData), &Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_ItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_Sprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_ItemData_Statics::NewProp_bIsStackable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_ItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_ItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_ItemData_Statics::ClassParams = {
		&UAQ_ItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAQ_ItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_ItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_ItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_ItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_ItemData()
	{
		if (!Z_Registration_Info_UClass_UAQ_ItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_ItemData.OuterSingleton, Z_Construct_UClass_UAQ_ItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_ItemData.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_ItemData>()
	{
		return UAQ_ItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_ItemData);
	UAQ_ItemData::~UAQ_ItemData() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::EnumInfo[] = {
		{ EAQ_ItemType_StaticEnum, TEXT("EAQ_ItemType"), &Z_Registration_Info_UEnum_EAQ_ItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2962085323U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_ItemData, UAQ_ItemData::StaticClass, TEXT("UAQ_ItemData"), &Z_Registration_Info_UClass_UAQ_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_ItemData), 2373981154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_1759974567(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_DataAssets_AQ_ItemData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
