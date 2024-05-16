// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Interactables/AQ_Collectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Collectable() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Collectable();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Collectable_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Interactable();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	void AAQ_Collectable::StaticRegisterNativesAAQ_Collectable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAQ_Collectable);
	UClass* Z_Construct_UClass_AAQ_Collectable_NoRegister()
	{
		return AAQ_Collectable::StaticClass();
	}
	struct Z_Construct_UClass_AAQ_Collectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAQ_Collectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAQ_Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Collectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/AQ_Collectable.h" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Collectable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Collectable_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "Advanced Quest | Item" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Collectable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Collectable_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAQ_Collectable, ItemData), Z_Construct_UClass_UAQ_ItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAQ_Collectable_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Collectable_Statics::NewProp_ItemData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAQ_Collectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Collectable_Statics::NewProp_ItemData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAQ_Collectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAQ_Collectable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAQ_Collectable_Statics::ClassParams = {
		&AAQ_Collectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAQ_Collectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Collectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAQ_Collectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Collectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAQ_Collectable()
	{
		if (!Z_Registration_Info_UClass_AAQ_Collectable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAQ_Collectable.OuterSingleton, Z_Construct_UClass_AAQ_Collectable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAQ_Collectable.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<AAQ_Collectable>()
	{
		return AAQ_Collectable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAQ_Collectable);
	AAQ_Collectable::~AAQ_Collectable() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAQ_Collectable, AAQ_Collectable::StaticClass, TEXT("AAQ_Collectable"), &Z_Registration_Info_UClass_AAQ_Collectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAQ_Collectable), 2053884156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_275053944(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Collectable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
