// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestListenerComponent() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestListenerComponent();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestListenerComponent_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestManager_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms
		{
			UAQ_Quest* questUpdate;
			EAQ_QuestState QuestState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_questUpdate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_questUpdate = { "questUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms, questUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 3956977008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_questUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnQuestStateChangedListenerDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQuestStateChangedListenerDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStateChangedListenerDelegate, UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	struct _Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms
	{
		UAQ_Quest* questUpdate;
		EAQ_QuestState QuestState;
	};
	_Script_AdvancedQuest_eventOnQuestStateChangedListenerDelegate_Parms Parms;
	Parms.questUpdate=questUpdate;
	Parms.QuestState=QuestState;
	OnQuestStateChangedListenerDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAQ_QuestListenerComponent::execBindFunctionsToQuestDelegates)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindFunctionsToQuestDelegates(Z_Param_quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestListenerComponent::execOnQuestStateChangedWrapper)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_questUpdate);
		P_GET_ENUM(EAQ_QuestState,Z_Param_QuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStateChangedWrapper(Z_Param_questUpdate,EAQ_QuestState(Z_Param_QuestState));
		P_NATIVE_END;
	}
	void UAQ_QuestListenerComponent::StaticRegisterNativesUAQ_QuestListenerComponent()
	{
		UClass* Class = UAQ_QuestListenerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindFunctionsToQuestDelegates", &UAQ_QuestListenerComponent::execBindFunctionsToQuestDelegates },
			{ "OnQuestStateChangedWrapper", &UAQ_QuestListenerComponent::execOnQuestStateChangedWrapper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics
	{
		struct AQ_QuestListenerComponent_eventBindFunctionsToQuestDelegates_Parms
		{
			UAQ_Quest* quest;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestListenerComponent_eventBindFunctionsToQuestDelegates_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestListenerComponent, nullptr, "BindFunctionsToQuestDelegates", nullptr, nullptr, Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::AQ_QuestListenerComponent_eventBindFunctionsToQuestDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::AQ_QuestListenerComponent_eventBindFunctionsToQuestDelegates_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics
	{
		struct AQ_QuestListenerComponent_eventOnQuestStateChangedWrapper_Parms
		{
			UAQ_Quest* questUpdate;
			EAQ_QuestState QuestState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_questUpdate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_questUpdate = { "questUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestListenerComponent_eventOnQuestStateChangedWrapper_Parms, questUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestListenerComponent_eventOnQuestStateChangedWrapper_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 3956977008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_questUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestListenerComponent, nullptr, "OnQuestStateChangedWrapper", nullptr, nullptr, Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::AQ_QuestListenerComponent_eventOnQuestStateChangedWrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::AQ_QuestListenerComponent_eventOnQuestStateChangedWrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestListenerComponent);
	UClass* Z_Construct_UClass_UAQ_QuestListenerComponent_NoRegister()
	{
		return UAQ_QuestListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_QuestListenerComponent_BindFunctionsToQuestDelegates, "BindFunctionsToQuestDelegates" }, // 3755466954
		{ &Z_Construct_UFunction_UAQ_QuestListenerComponent_OnQuestStateChangedWrapper, "OnQuestStateChangedWrapper" }, // 3314691504
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestSystem/AQ_QuestListenerComponent.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* References */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestListenerComponent, QuestManager), Z_Construct_UClass_UAQ_QuestManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_QuestManager_MetaData), Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_QuestManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_OnQuestStateChanged_MetaData[] = {
		{ "Category", "Advanced Quest | Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this delegate to be able to update actors in blueprint\n// when OnQuestStateChanged is triggered\n" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this delegate to be able to update actors in blueprint\nwhen OnQuestStateChanged is triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_OnQuestStateChanged = { "OnQuestStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestListenerComponent, OnQuestStateChanged), Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestStateChangedListenerDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_OnQuestStateChanged_MetaData), Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_OnQuestStateChanged_MetaData) }; // 4101912129
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_QuestManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::NewProp_OnQuestStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestListenerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::ClassParams = {
		&UAQ_QuestListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_QuestListenerComponent()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestListenerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestListenerComponent.OuterSingleton, Z_Construct_UClass_UAQ_QuestListenerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestListenerComponent.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestListenerComponent>()
	{
		return UAQ_QuestListenerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestListenerComponent);
	UAQ_QuestListenerComponent::~UAQ_QuestListenerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestListenerComponent, UAQ_QuestListenerComponent::StaticClass, TEXT("UAQ_QuestListenerComponent"), &Z_Registration_Info_UClass_UAQ_QuestListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestListenerComponent), 1809865667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_2102900154(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestListenerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
