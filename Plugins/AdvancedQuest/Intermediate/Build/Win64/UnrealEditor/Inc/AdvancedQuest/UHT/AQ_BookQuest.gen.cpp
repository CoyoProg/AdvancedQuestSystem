// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_BookQuest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_BookQuest() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_BookQuest();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_BookQuest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnQuestEnableDelegate_Parms
		{
			UAQ_Quest* InQuest;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::NewProp_InQuest = { "InQuest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnQuestEnableDelegate_Parms, InQuest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::NewProp_InQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnQuestEnableDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnQuestEnableDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAQ_BookQuest::execOnQuestEnableBroadcast)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEnableBroadcast(Z_Param_quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_BookQuest::execCloseAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_BookQuest::execOpenQuestGiverSummary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenQuestGiverSummary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_BookQuest::execOpenQuestLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenQuestLog();
		P_NATIVE_END;
	}
	struct AQ_BookQuest_eventAddQuest_Parms
	{
		UAQ_Quest* quest;
	};
	struct AQ_BookQuest_eventDisplayQuestGiverSummary_Parms
	{
		TArray<UAQ_Quest*> questsToDisplay;
	};
	struct AQ_BookQuest_eventOnLoadQuests_Parms
	{
		UAQ_Quest* quest;
	};
	struct AQ_BookQuest_eventRemoveQuest_Parms
	{
		UAQ_Quest* quest;
	};
	struct AQ_BookQuest_eventUpdateQuestWidgets_Parms
	{
		UAQ_Quest* quest;
	};
	static FName NAME_UAQ_BookQuest_AddQuest = FName(TEXT("AddQuest"));
	void UAQ_BookQuest::AddQuest(UAQ_Quest* quest)
	{
		AQ_BookQuest_eventAddQuest_Parms Parms;
		Parms.quest=quest;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_BookQuest_AddQuest),&Parms);
	}
	static FName NAME_UAQ_BookQuest_DisplayQuestGiverSummary = FName(TEXT("DisplayQuestGiverSummary"));
	void UAQ_BookQuest::DisplayQuestGiverSummary(TArray<UAQ_Quest*> const& questsToDisplay)
	{
		AQ_BookQuest_eventDisplayQuestGiverSummary_Parms Parms;
		Parms.questsToDisplay=questsToDisplay;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_BookQuest_DisplayQuestGiverSummary),&Parms);
	}
	static FName NAME_UAQ_BookQuest_OnLoadQuests = FName(TEXT("OnLoadQuests"));
	void UAQ_BookQuest::OnLoadQuests(UAQ_Quest* quest)
	{
		AQ_BookQuest_eventOnLoadQuests_Parms Parms;
		Parms.quest=quest;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_BookQuest_OnLoadQuests),&Parms);
	}
	static FName NAME_UAQ_BookQuest_RemoveQuest = FName(TEXT("RemoveQuest"));
	void UAQ_BookQuest::RemoveQuest(UAQ_Quest* quest)
	{
		AQ_BookQuest_eventRemoveQuest_Parms Parms;
		Parms.quest=quest;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_BookQuest_RemoveQuest),&Parms);
	}
	static FName NAME_UAQ_BookQuest_UpdateQuestWidgets = FName(TEXT("UpdateQuestWidgets"));
	void UAQ_BookQuest::UpdateQuestWidgets(UAQ_Quest* quest)
	{
		AQ_BookQuest_eventUpdateQuestWidgets_Parms Parms;
		Parms.quest=quest;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_BookQuest_UpdateQuestWidgets),&Parms);
	}
	void UAQ_BookQuest::StaticRegisterNativesUAQ_BookQuest()
	{
		UClass* Class = UAQ_BookQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseAll", &UAQ_BookQuest::execCloseAll },
			{ "OnQuestEnableBroadcast", &UAQ_BookQuest::execOnQuestEnableBroadcast },
			{ "OpenQuestGiverSummary", &UAQ_BookQuest::execOpenQuestGiverSummary },
			{ "OpenQuestLog", &UAQ_BookQuest::execOpenQuestLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventAddQuest_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "AddQuest", nullptr, nullptr, sizeof(AQ_BookQuest_eventAddQuest_Parms), Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_AddQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_AddQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "CloseAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_CloseAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_CloseAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_questsToDisplay_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_questsToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_questsToDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay_Inner = { "questsToDisplay", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay = { "questsToDisplay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventDisplayQuestGiverSummary_Parms, questsToDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::NewProp_questsToDisplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "DisplayQuestGiverSummary", nullptr, nullptr, sizeof(AQ_BookQuest_eventDisplayQuestGiverSummary_Parms), Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventOnLoadQuests_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Save-Load" },
		{ "Comment", "/* Load Save */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
		{ "ToolTip", "Load Save" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "OnLoadQuests", nullptr, nullptr, sizeof(AQ_BookQuest_eventOnLoadQuests_Parms), Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics
	{
		struct AQ_BookQuest_eventOnQuestEnableBroadcast_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventOnQuestEnableBroadcast_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "OnQuestEnableBroadcast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::AQ_BookQuest_eventOnQuestEnableBroadcast_Parms), Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "OpenQuestGiverSummary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "OpenQuestLog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventRemoveQuest_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "RemoveQuest", nullptr, nullptr, sizeof(AQ_BookQuest_eventRemoveQuest_Parms), Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_BookQuest_eventUpdateQuestWidgets_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_BookQuest, nullptr, "UpdateQuestWidgets", nullptr, nullptr, sizeof(AQ_BookQuest_eventUpdateQuestWidgets_Parms), Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_BookQuest);
	UClass* Z_Construct_UClass_UAQ_BookQuest_NoRegister()
	{
		return UAQ_BookQuest::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_BookQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestLogWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestLogWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestGiverWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestGiverWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestEnableDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestEnableDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_BookQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_BookQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_BookQuest_AddQuest, "AddQuest" }, // 2665817136
		{ &Z_Construct_UFunction_UAQ_BookQuest_CloseAll, "CloseAll" }, // 105459539
		{ &Z_Construct_UFunction_UAQ_BookQuest_DisplayQuestGiverSummary, "DisplayQuestGiverSummary" }, // 2474325240
		{ &Z_Construct_UFunction_UAQ_BookQuest_OnLoadQuests, "OnLoadQuests" }, // 1617136078
		{ &Z_Construct_UFunction_UAQ_BookQuest_OnQuestEnableBroadcast, "OnQuestEnableBroadcast" }, // 3576235871
		{ &Z_Construct_UFunction_UAQ_BookQuest_OpenQuestGiverSummary, "OpenQuestGiverSummary" }, // 4212756086
		{ &Z_Construct_UFunction_UAQ_BookQuest_OpenQuestLog, "OpenQuestLog" }, // 4254250447
		{ &Z_Construct_UFunction_UAQ_BookQuest_RemoveQuest, "RemoveQuest" }, // 803185805
		{ &Z_Construct_UFunction_UAQ_BookQuest_UpdateQuestWidgets, "UpdateQuestWidgets" }, // 2903304989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::Class_MetaDataParams[] = {
		{ "ABSTRACT", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "QuestSystem/AQ_BookQuest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestLogWidget_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "/* Widgets */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
		{ "ToolTip", "Widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestLogWidget = { "QuestLogWidget", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_BookQuest, QuestLogWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestLogWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestLogWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestGiverWidget_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestGiverWidget = { "QuestGiverWidget", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_BookQuest, QuestGiverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestGiverWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestGiverWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "/* Quests */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
		{ "ToolTip", "Quests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_BookQuest, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "/* References */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_BookQuest, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_OnQuestEnableDelegate_MetaData[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "Comment", "/* Delegates */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_BookQuest.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_OnQuestEnableDelegate = { "OnQuestEnableDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_BookQuest, OnQuestEnableDelegate), Z_Construct_UDelegateFunction_AdvancedQuest_OnQuestEnableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_OnQuestEnableDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_OnQuestEnableDelegate_MetaData)) }; // 2301116404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_BookQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestLogWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_QuestGiverWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_Quests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_BookQuest_Statics::NewProp_OnQuestEnableDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_BookQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_BookQuest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_BookQuest_Statics::ClassParams = {
		&UAQ_BookQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_BookQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_BookQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_BookQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_BookQuest()
	{
		if (!Z_Registration_Info_UClass_UAQ_BookQuest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_BookQuest.OuterSingleton, Z_Construct_UClass_UAQ_BookQuest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_BookQuest.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_BookQuest>()
	{
		return UAQ_BookQuest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_BookQuest);
	UAQ_BookQuest::~UAQ_BookQuest() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_BookQuest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_BookQuest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_BookQuest, UAQ_BookQuest::StaticClass, TEXT("UAQ_BookQuest"), &Z_Registration_Info_UClass_UAQ_BookQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_BookQuest), 3859978156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_BookQuest_h_3743235278(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_BookQuest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_BookQuest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
