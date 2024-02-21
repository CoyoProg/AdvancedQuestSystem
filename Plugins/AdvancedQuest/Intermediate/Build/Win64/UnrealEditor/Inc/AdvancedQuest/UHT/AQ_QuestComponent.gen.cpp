// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestComponent() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestComponent();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestComponent_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestManager_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver;
class UScriptStruct* FAQ_IsGiverOrReceiver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("AQ_IsGiverOrReceiver"));
	}
	return Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.OuterSingleton;
}
template<> ADVANCEDQUEST_API UScriptStruct* StaticStruct<FAQ_IsGiverOrReceiver>()
{
	return FAQ_IsGiverOrReceiver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuestReceiver_MetaData[];
#endif
		static void NewProp_bIsQuestReceiver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuestReceiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuestGiver_MetaData[];
#endif
		static void NewProp_bIsQuestGiver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuestGiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAQ_IsGiverOrReceiver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver_SetBit(void* Obj)
	{
		((FAQ_IsGiverOrReceiver*)Obj)->bIsQuestReceiver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver = { "bIsQuestReceiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAQ_IsGiverOrReceiver), &Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver_SetBit(void* Obj)
	{
		((FAQ_IsGiverOrReceiver*)Obj)->bIsQuestGiver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver = { "bIsQuestGiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAQ_IsGiverOrReceiver), &Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewProp_bIsQuestGiver,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		&NewStructOps,
		"AQ_IsGiverOrReceiver",
		sizeof(FAQ_IsGiverOrReceiver),
		alignof(FAQ_IsGiverOrReceiver),
		Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver()
	{
		if (!Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.InnerSingleton, Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnStateChangedBueprintDelegate_Parms
		{
			EAQ_QuestState QuestState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnStateChangedBueprintDelegate_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(nullptr, 0) }; // 1583766727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnStateChangedBueprintDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnStateChangedBueprintDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execRerunScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RerunScript();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execUpdateQuestMarker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQuestMarker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execSetQuestMarker)
	{
		P_GET_UBOOL(Z_Param_isMarkerVisible);
		P_GET_UBOOL(Z_Param_isQuestValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestMarker(Z_Param_isMarkerVisible,Z_Param_isQuestValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execInteract)
	{
		P_GET_TINTERFACE_REF(IAQ_PlayerChannelsFacade,Z_Param_Out_PlayerChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_Out_PlayerChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execOnQuestRequirementMet)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestRequirementMet(Z_Param_quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestComponent::execOnQuestStateChangedWrapper)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_questUpdate);
		P_GET_ENUM(EAQ_QuestState,Z_Param_QuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStateChangedWrapper(Z_Param_questUpdate,EAQ_QuestState(Z_Param_QuestState));
		P_NATIVE_END;
	}
	void UAQ_QuestComponent::StaticRegisterNativesUAQ_QuestComponent()
	{
		UClass* Class = UAQ_QuestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &UAQ_QuestComponent::execInteract },
			{ "OnQuestRequirementMet", &UAQ_QuestComponent::execOnQuestRequirementMet },
			{ "OnQuestStateChangedWrapper", &UAQ_QuestComponent::execOnQuestStateChangedWrapper },
			{ "RerunScript", &UAQ_QuestComponent::execRerunScript },
			{ "SetQuestMarker", &UAQ_QuestComponent::execSetQuestMarker },
			{ "UpdateQuestMarker", &UAQ_QuestComponent::execUpdateQuestMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics
	{
		struct AQ_QuestComponent_eventInteract_Parms
		{
			TScriptInterface<IAQ_PlayerChannelsFacade> PlayerChannel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerChannel_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlayerChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::NewProp_PlayerChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::NewProp_PlayerChannel = { "PlayerChannel", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestComponent_eventInteract_Parms, PlayerChannel), Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::NewProp_PlayerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::NewProp_PlayerChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::NewProp_PlayerChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "Comment", "/* Interaction */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "Interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "Interact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::AQ_QuestComponent_eventInteract_Parms), Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics
	{
		struct AQ_QuestComponent_eventOnQuestRequirementMet_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestComponent_eventOnQuestRequirementMet_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::NewProp_quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "OnQuestRequirementMet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::AQ_QuestComponent_eventOnQuestRequirementMet_Parms), Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics
	{
		struct AQ_QuestComponent_eventOnQuestStateChangedWrapper_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_questUpdate = { "questUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestComponent_eventOnQuestStateChangedWrapper_Parms, questUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestComponent_eventOnQuestStateChangedWrapper_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(nullptr, 0) }; // 1583766727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_questUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "OnQuestStateChangedWrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::AQ_QuestComponent_eventOnQuestStateChangedWrapper_Parms), Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Debug" },
		{ "Comment", "/* DEBUG */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "DEBUG" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "RerunScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_RerunScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_RerunScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics
	{
		struct AQ_QuestComponent_eventSetQuestMarker_Parms
		{
			bool isMarkerVisible;
			bool isQuestValid;
		};
		static void NewProp_isMarkerVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMarkerVisible;
		static void NewProp_isQuestValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isQuestValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isMarkerVisible_SetBit(void* Obj)
	{
		((AQ_QuestComponent_eventSetQuestMarker_Parms*)Obj)->isMarkerVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isMarkerVisible = { "isMarkerVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AQ_QuestComponent_eventSetQuestMarker_Parms), &Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isMarkerVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isQuestValid_SetBit(void* Obj)
	{
		((AQ_QuestComponent_eventSetQuestMarker_Parms*)Obj)->isQuestValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isQuestValid = { "isQuestValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AQ_QuestComponent_eventSetQuestMarker_Parms), &Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isQuestValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isMarkerVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::NewProp_isQuestValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "SetQuestMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::AQ_QuestComponent_eventSetQuestMarker_Parms), Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestComponent, nullptr, "UpdateQuestMarker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestComponent);
	UClass* Z_Construct_UClass_UAQ_QuestComponent_NoRegister()
	{
		return UAQ_QuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestsList_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestsList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestsList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QuestsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsComponentSilent_MetaData[];
#endif
		static void NewProp_bIsComponentSilent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComponentSilent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestMarkerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestMarkerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestMarkerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestMarkerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zOffset;
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
	UObject* (*const Z_Construct_UClass_UAQ_QuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_QuestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_QuestComponent_Interact, "Interact" }, // 4240062160
		{ &Z_Construct_UFunction_UAQ_QuestComponent_OnQuestRequirementMet, "OnQuestRequirementMet" }, // 3233459685
		{ &Z_Construct_UFunction_UAQ_QuestComponent_OnQuestStateChangedWrapper, "OnQuestStateChangedWrapper" }, // 1466831928
		{ &Z_Construct_UFunction_UAQ_QuestComponent_RerunScript, "RerunScript" }, // 714523530
		{ &Z_Construct_UFunction_UAQ_QuestComponent_SetQuestMarker, "SetQuestMarker" }, // 2448421268
		{ &Z_Construct_UFunction_UAQ_QuestComponent_UpdateQuestMarker, "UpdateQuestMarker" }, // 2662775819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::Class_MetaDataParams[] = {
		{ "ABSTRACT", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/AQ_QuestComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_ValueProp = { "QuestsList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver, METADATA_PARAMS(nullptr, 0) }; // 1810159506
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_Key_KeyProp = { "QuestsList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "Comment", "/* Quests */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "Quests" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList = { "QuestsList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, QuestsList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_MetaData)) }; // 1810159506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent_SetBit(void* Obj)
	{
		((UAQ_QuestComponent*)Obj)->bIsComponentSilent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent = { "bIsComponentSilent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAQ_QuestComponent), &Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerClass_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "/* Widgets */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "Widgets" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerClass = { "QuestMarkerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, QuestMarkerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerMaterial_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerMaterial = { "QuestMarkerMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, QuestMarkerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_zOffset_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "// You can adjust this value if the quest Marker looks too low or to high of the actor\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "You can adjust this value if the quest Marker looks too low or to high of the actor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, zOffset), METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_zOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_zOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, QuestManager), Z_Construct_UClass_UAQ_QuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_OnQuestStateChanged_MetaData[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "Comment", "// Use this delegate to be able to update actors in blueprint\n// when OnQuestStateChanged is triggered\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestComponent.h" },
		{ "ToolTip", "Use this delegate to be able to update actors in blueprint\nwhen OnQuestStateChanged is triggered" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_OnQuestStateChanged = { "OnQuestStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestComponent, OnQuestStateChanged), Z_Construct_UDelegateFunction_AdvancedQuest_OnStateChangedBueprintDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_OnQuestStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_OnQuestStateChanged_MetaData)) }; // 18666912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_bIsComponentSilent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestMarkerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_zOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_QuestManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestComponent_Statics::NewProp_OnQuestStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestComponent_Statics::ClassParams = {
		&UAQ_QuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_QuestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_QuestComponent()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestComponent.OuterSingleton, Z_Construct_UClass_UAQ_QuestComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestComponent.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestComponent>()
	{
		return UAQ_QuestComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestComponent);
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ScriptStructInfo[] = {
		{ FAQ_IsGiverOrReceiver::StaticStruct, Z_Construct_UScriptStruct_FAQ_IsGiverOrReceiver_Statics::NewStructOps, TEXT("AQ_IsGiverOrReceiver"), &Z_Registration_Info_UScriptStruct_AQ_IsGiverOrReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAQ_IsGiverOrReceiver), 1810159506U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestComponent, UAQ_QuestComponent::StaticClass, TEXT("UAQ_QuestComponent"), &Z_Registration_Info_UClass_UAQ_QuestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestComponent), 3446049043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_3073510239(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
