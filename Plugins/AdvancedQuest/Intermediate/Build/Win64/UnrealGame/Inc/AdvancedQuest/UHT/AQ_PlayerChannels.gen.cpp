// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_PlayerChannels.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_PlayerChannels() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_CombatChannel_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_EnvironmentChannel_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_InventoryChannel_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannels();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannels_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestChannel_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_Objectives();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms
		{
			UObject* entity;
			EAQ_NotifyEventType eventType;
			float amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(0, nullptr) }; // 390537601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnPlayerEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnPlayerEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEventDelegate, UObject* entity, EAQ_NotifyEventType eventType, float amount)
{
	struct _Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms
	{
		UObject* entity;
		EAQ_NotifyEventType eventType;
		float amount;
	};
	_Script_AdvancedQuest_eventOnPlayerEventDelegate_Parms Parms;
	Parms.entity=entity;
	Parms.eventType=eventType;
	Parms.amount=amount;
	OnPlayerEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execOnCombatEventNotify_Implementation)
	{
		P_GET_ENUM(EAQ_CombatEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCombatEventNotify_Implementation(EAQ_CombatEventType(Z_Param_eventType),Z_Param_entity,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execOnEnvironmentEventNotify_Implementation)
	{
		P_GET_ENUM(EAQ_EnvironmentEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType(Z_Param_eventType),Z_Param_entity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execOnQuestEnable_Implementation)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEnable_Implementation(Z_Param_quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execOnPlayerLevelUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLevelUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execRemoveObserver)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_entity);
		P_GET_ENUM(EAQ_ObjectivesType,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObserver(Z_Param_entity,EAQ_ObjectivesType(Z_Param_eventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_PlayerChannels::execAddObserver)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_entity);
		P_GET_ENUM(EAQ_ObjectivesType,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObserver(Z_Param_entity,EAQ_ObjectivesType(Z_Param_eventType));
		P_NATIVE_END;
	}
	struct AQ_PlayerChannels_eventCheckForPlayerStats_Parms
	{
		FAQ_Objectives currentObjective;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		AQ_PlayerChannels_eventCheckForPlayerStats_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AQ_PlayerChannels_eventCheckInventoryForItem_Parms
	{
		FAQ_Objectives currentObjective;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		AQ_PlayerChannels_eventCheckInventoryForItem_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AQ_PlayerChannels_eventOnQuestEnded_Parms
	{
		UAQ_Quest* quest;
	};
	static FName NAME_UAQ_PlayerChannels_CheckForPlayerStats = FName(TEXT("CheckForPlayerStats"));
	int32 UAQ_PlayerChannels::CheckForPlayerStats(FAQ_Objectives currentObjective)
	{
		AQ_PlayerChannels_eventCheckForPlayerStats_Parms Parms;
		Parms.currentObjective=currentObjective;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_PlayerChannels_CheckForPlayerStats),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAQ_PlayerChannels_CheckInventoryForItem = FName(TEXT("CheckInventoryForItem"));
	int32 UAQ_PlayerChannels::CheckInventoryForItem(FAQ_Objectives currentObjective)
	{
		AQ_PlayerChannels_eventCheckInventoryForItem_Parms Parms;
		Parms.currentObjective=currentObjective;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_PlayerChannels_CheckInventoryForItem),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAQ_PlayerChannels_LoadInventory = FName(TEXT("LoadInventory"));
	void UAQ_PlayerChannels::LoadInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAQ_PlayerChannels_LoadInventory),NULL);
	}
	static FName NAME_UAQ_PlayerChannels_OnQuestEnded = FName(TEXT("OnQuestEnded"));
	void UAQ_PlayerChannels::OnQuestEnded(UAQ_Quest* quest)
	{
		AQ_PlayerChannels_eventOnQuestEnded_Parms Parms;
		Parms.quest=quest;
		ProcessEvent(FindFunctionChecked(NAME_UAQ_PlayerChannels_OnQuestEnded),&Parms);
	}
	static FName NAME_UAQ_PlayerChannels_SaveInventory = FName(TEXT("SaveInventory"));
	void UAQ_PlayerChannels::SaveInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAQ_PlayerChannels_SaveInventory),NULL);
	}
	void UAQ_PlayerChannels::StaticRegisterNativesUAQ_PlayerChannels()
	{
		UClass* Class = UAQ_PlayerChannels::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObserver", &UAQ_PlayerChannels::execAddObserver },
			{ "OnCombatEventNotify_Implementation", &UAQ_PlayerChannels::execOnCombatEventNotify_Implementation },
			{ "OnEnvironmentEventNotify_Implementation", &UAQ_PlayerChannels::execOnEnvironmentEventNotify_Implementation },
			{ "OnPlayerLevelUp", &UAQ_PlayerChannels::execOnPlayerLevelUp },
			{ "OnQuestEnable_Implementation", &UAQ_PlayerChannels::execOnQuestEnable_Implementation },
			{ "RemoveObserver", &UAQ_PlayerChannels::execRemoveObserver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics
	{
		struct AQ_PlayerChannels_eventAddObserver_Parms
		{
			UAQ_Quest* entity;
			EAQ_ObjectivesType eventType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventAddObserver_Parms, entity), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventAddObserver_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType, METADATA_PARAMS(0, nullptr) }; // 1194056288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::NewProp_eventType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add Observer to the corresponding channel */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Observer to the corresponding channel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "AddObserver", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::AQ_PlayerChannels_eventAddObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::AQ_PlayerChannels_eventAddObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentObjective;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::NewProp_currentObjective = { "currentObjective", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventCheckForPlayerStats_Parms, currentObjective), Z_Construct_UScriptStruct_FAQ_Objectives, METADATA_PARAMS(0, nullptr) }; // 1614143856
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventCheckForPlayerStats_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::NewProp_currentObjective,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is implemented in blueprint \n" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is implemented in blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "CheckForPlayerStats", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::PropPointers), sizeof(AQ_PlayerChannels_eventCheckForPlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannels_eventCheckForPlayerStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentObjective;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::NewProp_currentObjective = { "currentObjective", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventCheckInventoryForItem_Parms, currentObjective), Z_Construct_UScriptStruct_FAQ_Objectives, METADATA_PARAMS(0, nullptr) }; // 1614143856
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventCheckInventoryForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::NewProp_currentObjective,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Checkers for Quests */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkers for Quests" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "CheckInventoryForItem", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::PropPointers), sizeof(AQ_PlayerChannels_eventCheckInventoryForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannels_eventCheckInventoryForItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Save-Load" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "LoadInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics
	{
		struct AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms
		{
			EAQ_CombatEventType eventType;
			UObject* entity;
			float amount;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType, METADATA_PARAMS(0, nullptr) }; // 940911391
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "OnCombatEventNotify_Implementation", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::AQ_PlayerChannels_eventOnCombatEventNotify_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics
	{
		struct AQ_PlayerChannels_eventOnEnvironmentEventNotify_Implementation_Parms
		{
			EAQ_EnvironmentEventType eventType;
			UObject* entity;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnEnvironmentEventNotify_Implementation_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType, METADATA_PARAMS(0, nullptr) }; // 3658687028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnEnvironmentEventNotify_Implementation_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::NewProp_entity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "OnEnvironmentEventNotify_Implementation", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::AQ_PlayerChannels_eventOnEnvironmentEventNotify_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::AQ_PlayerChannels_eventOnEnvironmentEventNotify_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "OnPlayerLevelUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics
	{
		struct AQ_PlayerChannels_eventOnQuestEnable_Implementation_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnQuestEnable_Implementation_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "OnQuestEnable_Implementation", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::AQ_PlayerChannels_eventOnQuestEnable_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::AQ_PlayerChannels_eventOnQuestEnable_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventOnQuestEnded_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "OnQuestEnded", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::PropPointers), sizeof(AQ_PlayerChannels_eventOnQuestEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannels_eventOnQuestEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics
	{
		struct AQ_PlayerChannels_eventRemoveObserver_Parms
		{
			UAQ_Quest* entity;
			EAQ_ObjectivesType eventType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventRemoveObserver_Parms, entity), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannels_eventRemoveObserver_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_ObjectivesType, METADATA_PARAMS(0, nullptr) }; // 1194056288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::NewProp_eventType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove Observer to the corresponding channel */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Observer to the corresponding channel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "RemoveObserver", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::AQ_PlayerChannels_eventRemoveObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::AQ_PlayerChannels_eventRemoveObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Save-Load" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Those functions should be in the Inventory Component\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Those functions should be in the Inventory Component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannels, nullptr, "SaveInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_PlayerChannels);
	UClass* Z_Construct_UClass_UAQ_PlayerChannels_NoRegister()
	{
		return UAQ_PlayerChannels::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_PlayerChannels_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookQuestWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BookQuestWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenJournalAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenJournalAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveQuestsAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveQuestsAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvironmentChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_PlayerChannels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_PlayerChannels_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_AddObserver, "AddObserver" }, // 4165518852
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_CheckForPlayerStats, "CheckForPlayerStats" }, // 3048577669
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_CheckInventoryForItem, "CheckInventoryForItem" }, // 417694976
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_LoadInventory, "LoadInventory" }, // 3858095848
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_OnCombatEventNotify_Implementation, "OnCombatEventNotify_Implementation" }, // 2700841367
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_OnEnvironmentEventNotify_Implementation, "OnEnvironmentEventNotify_Implementation" }, // 3075685420
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_OnPlayerLevelUp, "OnPlayerLevelUp" }, // 3136496715
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnable_Implementation, "OnQuestEnable_Implementation" }, // 3968377662
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_OnQuestEnded, "OnQuestEnded" }, // 1329828710
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_RemoveObserver, "RemoveObserver" }, // 2716915249
		{ &Z_Construct_UFunction_UAQ_PlayerChannels_SaveInventory, "SaveInventory" }, // 2266732025
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::Class_MetaDataParams[] = {
		{ "ABSTRACT", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PlayersChannels/AQ_PlayerChannels.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_BookQuestWidget_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Book Quest Template */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Book Quest Template" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_BookQuestWidget = { "BookQuestWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, BookQuestWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_BookQuestWidget_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_BookQuestWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_OpenJournalAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Advanced Quest | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Controllers */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controllers" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_OpenJournalAction = { "OpenJournalAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, OpenJournalAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_OpenJournalAction_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_OpenJournalAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_SaveQuestsAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Advanced Quest | Inputs" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_SaveQuestsAction = { "SaveQuestsAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, SaveQuestsAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_SaveQuestsAction_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_SaveQuestsAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_InventoryChannel_MetaData[] = {
		{ "Category", "Advanced Quest | Channels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Player Channels */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Channels" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_InventoryChannel = { "InventoryChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, InventoryChannel), Z_Construct_UClass_UAQ_InventoryChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_InventoryChannel_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_InventoryChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_EnvironmentChannel_MetaData[] = {
		{ "Category", "Advanced Quest | Channels" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_EnvironmentChannel = { "EnvironmentChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, EnvironmentChannel), Z_Construct_UClass_UAQ_EnvironmentChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_EnvironmentChannel_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_EnvironmentChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_CombatChannel_MetaData[] = {
		{ "Category", "Advanced Quest | Channels" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_CombatChannel = { "CombatChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, CombatChannel), Z_Construct_UClass_UAQ_CombatChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_CombatChannel_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_CombatChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_QuestChannel_MetaData[] = {
		{ "Category", "Advanced Quest | Channels" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_QuestChannel = { "QuestChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, QuestChannel), Z_Construct_UClass_UAQ_QuestChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_QuestChannel_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_QuestChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "Advanced Quest | Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Player Stats */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Stats" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_PlayerChannels, PlayerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_PlayerLevel_MetaData), Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_PlayerLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_PlayerChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_BookQuestWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_OpenJournalAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_SaveQuestsAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_InventoryChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_EnvironmentChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_CombatChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_QuestChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_PlayerChannels_Statics::NewProp_PlayerLevel,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister, (int32)VTABLE_OFFSET(UAQ_PlayerChannels, IAQ_PlayerChannelsFacade), false },  // 4043822297
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_PlayerChannels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_PlayerChannels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_PlayerChannels_Statics::ClassParams = {
		&UAQ_PlayerChannels::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_PlayerChannels_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_PlayerChannels_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannels_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_PlayerChannels()
	{
		if (!Z_Registration_Info_UClass_UAQ_PlayerChannels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_PlayerChannels.OuterSingleton, Z_Construct_UClass_UAQ_PlayerChannels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_PlayerChannels.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_PlayerChannels>()
	{
		return UAQ_PlayerChannels::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_PlayerChannels);
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_PlayerChannels, UAQ_PlayerChannels::StaticClass, TEXT("UAQ_PlayerChannels"), &Z_Registration_Info_UClass_UAQ_PlayerChannels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_PlayerChannels), 2656564600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_1365329702(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannels_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
