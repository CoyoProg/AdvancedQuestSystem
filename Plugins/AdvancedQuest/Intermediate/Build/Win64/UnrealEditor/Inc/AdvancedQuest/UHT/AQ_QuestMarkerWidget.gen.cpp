// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestMarkerWidget() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestMarkerWidget();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestMarkerWidget_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct AQ_QuestMarkerWidget_eventSetImageQuest_Parms
	{
		bool isEnded;
		EAQ_QuestType questType;
	};
	static FName NAME_UAQ_QuestMarkerWidget_SetImageQuest = FName(TEXT("SetImageQuest"));
	void UAQ_QuestMarkerWidget::SetImageQuest(bool isEnded, EAQ_QuestType questType)
	{
		AQ_QuestMarkerWidget_eventSetImageQuest_Parms Parms;
		Parms.isEnded=isEnded ? true : false;
		Parms.questType=questType;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_QuestMarkerWidget_SetImageQuest),&Parms);
	}
	void UAQ_QuestMarkerWidget::StaticRegisterNativesUAQ_QuestMarkerWidget()
	{
	}
	struct Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics
	{
		static void NewProp_isEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isEnded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_questType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_questType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_isEnded_SetBit(void* Obj)
	{
		((AQ_QuestMarkerWidget_eventSetImageQuest_Parms*)Obj)->isEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_isEnded = { "isEnded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AQ_QuestMarkerWidget_eventSetImageQuest_Parms), &Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_isEnded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_questType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_questType = { "questType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestMarkerWidget_eventSetImageQuest_Parms, questType), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType, METADATA_PARAMS(nullptr, 0) }; // 2952427223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_isEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_questType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::NewProp_questType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "CPP_Default_questType", "MainQuest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestMarkerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestMarkerWidget, nullptr, "SetImageQuest", nullptr, nullptr, sizeof(AQ_QuestMarkerWidget_eventSetImageQuest_Parms), Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestMarkerWidget);
	UClass* Z_Construct_UClass_UAQ_QuestMarkerWidget_NoRegister()
	{
		return UAQ_QuestMarkerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_QuestMarkerWidget_SetImageQuest, "SetImageQuest" }, // 2435125107
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/AQ_QuestMarkerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestMarkerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestMarkerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::ClassParams = {
		&UAQ_QuestMarkerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_QuestMarkerWidget()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestMarkerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestMarkerWidget.OuterSingleton, Z_Construct_UClass_UAQ_QuestMarkerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestMarkerWidget.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestMarkerWidget>()
	{
		return UAQ_QuestMarkerWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestMarkerWidget);
	UAQ_QuestMarkerWidget::~UAQ_QuestMarkerWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestMarkerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestMarkerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestMarkerWidget, UAQ_QuestMarkerWidget::StaticClass, TEXT("UAQ_QuestMarkerWidget"), &Z_Registration_Info_UClass_UAQ_QuestMarkerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestMarkerWidget), 3781394019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestMarkerWidget_h_1808504432(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestMarkerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestMarkerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
