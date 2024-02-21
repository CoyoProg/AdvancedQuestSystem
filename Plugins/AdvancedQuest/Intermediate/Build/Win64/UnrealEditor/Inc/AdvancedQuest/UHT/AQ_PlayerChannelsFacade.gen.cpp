// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_PlayerChannelsFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_PlayerChannelsFacade() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_ItemData_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(IAQ_PlayerChannelsFacade::execOnCombatEventNotify)
	{
		P_GET_ENUM(EAQ_CombatEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCombatEventNotify_Implementation(EAQ_CombatEventType(Z_Param_eventType),Z_Param_entity,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_PlayerChannelsFacade::execOnEnvironmentEventNotify)
	{
		P_GET_ENUM(EAQ_EnvironmentEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType(Z_Param_eventType),Z_Param_entity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_PlayerChannelsFacade::execOnQuestEnable)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestEnable_Implementation(Z_Param_quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_PlayerChannelsFacade::execOnQuestStateChanged)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_QuestUpdate);
		P_GET_ENUM(EAQ_QuestState,Z_Param_QuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStateChanged(Z_Param_QuestUpdate,EAQ_QuestState(Z_Param_QuestState));
		P_NATIVE_END;
	}
	struct AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms
	{
		UAQ_ItemData* item;
		int32 amount;
	};
	struct AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms
	{
		EAQ_CombatEventType eventType;
		UObject* entity;
		float amount;
	};
	struct AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms
	{
		EAQ_EnvironmentEventType eventType;
		UObject* entity;
	};
	struct AQ_PlayerChannelsFacade_eventOnQuestEnable_Parms
	{
		UAQ_Quest* quest;
	};
	struct AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms
	{
		UAQ_ItemData* item;
		int32 amount;
		bool bRemoveCompletely;
	};
	void IAQ_PlayerChannelsFacade::AddItemToInvetory(UAQ_ItemData* item, int32 amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddItemToInvetory instead.");
	}
	void IAQ_PlayerChannelsFacade::OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCombatEventNotify instead.");
	}
	void IAQ_PlayerChannelsFacade::OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnvironmentEventNotify instead.");
	}
	void IAQ_PlayerChannelsFacade::OnQuestEnable(UAQ_Quest* quest)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnQuestEnable instead.");
	}
	void IAQ_PlayerChannelsFacade::RemoveItemFromInvetory(UAQ_ItemData* item, int32 amount, bool bRemoveCompletely)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveItemFromInvetory instead.");
	}
	void UAQ_PlayerChannelsFacade::StaticRegisterNativesUAQ_PlayerChannelsFacade()
	{
		UClass* Class = UAQ_PlayerChannelsFacade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCombatEventNotify", &IAQ_PlayerChannelsFacade::execOnCombatEventNotify },
			{ "OnEnvironmentEventNotify", &IAQ_PlayerChannelsFacade::execOnEnvironmentEventNotify },
			{ "OnQuestEnable", &IAQ_PlayerChannelsFacade::execOnQuestEnable },
			{ "OnQuestStateChanged", &IAQ_PlayerChannelsFacade::execOnQuestStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms, item), Z_Construct_UClass_UAQ_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Inventory" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "AddItemToInvetory", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::PropPointers), sizeof(AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics
	{
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType, METADATA_PARAMS(0, nullptr) }; // 940911391
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "CPP_Default_amount", "1.000000" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "OnCombatEventNotify", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::PropPointers), sizeof(AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType, METADATA_PARAMS(0, nullptr) }; // 3658687028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::NewProp_entity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "OnEnvironmentEventNotify", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::PropPointers), sizeof(AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnQuestEnable_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Events */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "OnQuestEnable", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::PropPointers), sizeof(AQ_PlayerChannelsFacade_eventOnQuestEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannelsFacade_eventOnQuestEnable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics
	{
		struct AQ_PlayerChannelsFacade_eventOnQuestStateChanged_Parms
		{
			UAQ_Quest* QuestUpdate;
			EAQ_QuestState QuestState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestUpdate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnQuestStateChanged_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventOnQuestStateChanged_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 859247259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "OnQuestStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::AQ_PlayerChannelsFacade_eventOnQuestStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::AQ_PlayerChannelsFacade_eventOnQuestStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static void NewProp_bRemoveCompletely_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveCompletely;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms, item), Z_Construct_UClass_UAQ_ItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms, amount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_bRemoveCompletely_SetBit(void* Obj)
	{
		((AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms*)Obj)->bRemoveCompletely = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_bRemoveCompletely = { "bRemoveCompletely", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms), &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_bRemoveCompletely_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::NewProp_bRemoveCompletely,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Inventory" },
		{ "CPP_Default_bRemoveCompletely", "false" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_PlayerChannelsFacade, nullptr, "RemoveItemFromInvetory", nullptr, nullptr, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::PropPointers), sizeof(AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_PlayerChannelsFacade);
	UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister()
	{
		return UAQ_PlayerChannelsFacade::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_AddItemToInvetory, "AddItemToInvetory" }, // 2504845915
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnCombatEventNotify, "OnCombatEventNotify" }, // 2999826337
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify, "OnEnvironmentEventNotify" }, // 4193625795
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestEnable, "OnQuestEnable" }, // 2790544711
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_OnQuestStateChanged, "OnQuestStateChanged" }, // 137162743
		{ &Z_Construct_UFunction_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory, "RemoveItemFromInvetory" }, // 891266647
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_PlayerChannelsFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAQ_PlayerChannelsFacade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::ClassParams = {
		&UAQ_PlayerChannelsFacade::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade()
	{
		if (!Z_Registration_Info_UClass_UAQ_PlayerChannelsFacade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_PlayerChannelsFacade.OuterSingleton, Z_Construct_UClass_UAQ_PlayerChannelsFacade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_PlayerChannelsFacade.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_PlayerChannelsFacade>()
	{
		return UAQ_PlayerChannelsFacade::StaticClass();
	}
	UAQ_PlayerChannelsFacade::UAQ_PlayerChannelsFacade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_PlayerChannelsFacade);
	UAQ_PlayerChannelsFacade::~UAQ_PlayerChannelsFacade() {}
	static FName NAME_UAQ_PlayerChannelsFacade_AddItemToInvetory = FName(TEXT("AddItemToInvetory"));
	void IAQ_PlayerChannelsFacade::Execute_AddItemToInvetory(UObject* O, UAQ_ItemData* item, int32 amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_PlayerChannelsFacade::StaticClass()));
		AQ_PlayerChannelsFacade_eventAddItemToInvetory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_PlayerChannelsFacade_AddItemToInvetory);
		if (Func)
		{
			Parms.item=item;
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAQ_PlayerChannelsFacade_OnCombatEventNotify = FName(TEXT("OnCombatEventNotify"));
	void IAQ_PlayerChannelsFacade::Execute_OnCombatEventNotify(UObject* O, EAQ_CombatEventType eventType, UObject* entity, float amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_PlayerChannelsFacade::StaticClass()));
		AQ_PlayerChannelsFacade_eventOnCombatEventNotify_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_PlayerChannelsFacade_OnCombatEventNotify);
		if (Func)
		{
			Parms.eventType=eventType;
			Parms.entity=entity;
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_PlayerChannelsFacade*)(O->GetNativeInterfaceAddress(UAQ_PlayerChannelsFacade::StaticClass())))
		{
			I->OnCombatEventNotify_Implementation(eventType,entity,amount);
		}
	}
	static FName NAME_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify = FName(TEXT("OnEnvironmentEventNotify"));
	void IAQ_PlayerChannelsFacade::Execute_OnEnvironmentEventNotify(UObject* O, EAQ_EnvironmentEventType eventType, UObject* entity)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_PlayerChannelsFacade::StaticClass()));
		AQ_PlayerChannelsFacade_eventOnEnvironmentEventNotify_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_PlayerChannelsFacade_OnEnvironmentEventNotify);
		if (Func)
		{
			Parms.eventType=eventType;
			Parms.entity=entity;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_PlayerChannelsFacade*)(O->GetNativeInterfaceAddress(UAQ_PlayerChannelsFacade::StaticClass())))
		{
			I->OnEnvironmentEventNotify_Implementation(eventType,entity);
		}
	}
	static FName NAME_UAQ_PlayerChannelsFacade_OnQuestEnable = FName(TEXT("OnQuestEnable"));
	void IAQ_PlayerChannelsFacade::Execute_OnQuestEnable(UObject* O, UAQ_Quest* quest)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_PlayerChannelsFacade::StaticClass()));
		AQ_PlayerChannelsFacade_eventOnQuestEnable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_PlayerChannelsFacade_OnQuestEnable);
		if (Func)
		{
			Parms.quest=quest;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_PlayerChannelsFacade*)(O->GetNativeInterfaceAddress(UAQ_PlayerChannelsFacade::StaticClass())))
		{
			I->OnQuestEnable_Implementation(quest);
		}
	}
	static FName NAME_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory = FName(TEXT("RemoveItemFromInvetory"));
	void IAQ_PlayerChannelsFacade::Execute_RemoveItemFromInvetory(UObject* O, UAQ_ItemData* item, int32 amount, bool bRemoveCompletely)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_PlayerChannelsFacade::StaticClass()));
		AQ_PlayerChannelsFacade_eventRemoveItemFromInvetory_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_PlayerChannelsFacade_RemoveItemFromInvetory);
		if (Func)
		{
			Parms.item=item;
			Parms.amount=amount;
			Parms.bRemoveCompletely=bRemoveCompletely;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_PlayerChannelsFacade, UAQ_PlayerChannelsFacade::StaticClass, TEXT("UAQ_PlayerChannelsFacade"), &Z_Registration_Info_UClass_UAQ_PlayerChannelsFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_PlayerChannelsFacade), 1915454216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_1868179751(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_PlayerChannelsFacade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
