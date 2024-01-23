// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Quest() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Observer_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestData_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_QuestState;
	static UEnum* EAQ_QuestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_QuestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_QuestState"));
		}
		return Z_Registration_Info_UEnum_EAQ_QuestState.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_QuestState>()
	{
		return EAQ_QuestState_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enumerators[] = {
		{ "EAQ_QuestState::Active", (int64)EAQ_QuestState::Active },
		{ "EAQ_QuestState::Pending", (int64)EAQ_QuestState::Pending },
		{ "EAQ_QuestState::Valid", (int64)EAQ_QuestState::Valid },
		{ "EAQ_QuestState::Archive", (int64)EAQ_QuestState::Archive },
		{ "EAQ_QuestState::Failed", (int64)EAQ_QuestState::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/**\n *\n */" },
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EAQ_QuestState::Active" },
		{ "Archive.Comment", "/**\n *\n */" },
		{ "Archive.DisplayName", "Archive" },
		{ "Archive.Name", "EAQ_QuestState::Archive" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "Failed.Comment", "/**\n *\n */" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EAQ_QuestState::Failed" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "Pending.Comment", "/**\n *\n */" },
		{ "Pending.DisplayName", "Pending" },
		{ "Pending.Name", "EAQ_QuestState::Pending" },
		{ "Valid.Comment", "/**\n *\n */" },
		{ "Valid.DisplayName", "Valid" },
		{ "Valid.Name", "EAQ_QuestState::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_QuestState",
		"EAQ_QuestState",
		Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 3956977008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "QuestStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FQuestStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestStateChangedDelegate, UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	struct _Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms
	{
		UAQ_Quest* QuestUpdate;
		EAQ_QuestState QuestState;
	};
	_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms Parms;
	Parms.QuestUpdate=QuestUpdate;
	Parms.QuestState=QuestState;
	QuestStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms
		{
			UAQ_Quest* QuestUpdate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "ObjectivesUpdatedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FObjectivesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectivesUpdatedDelegate, UAQ_Quest* QuestUpdate)
{
	struct _Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms
	{
		UAQ_Quest* QuestUpdate;
	};
	_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms Parms;
	Parms.QuestUpdate=QuestUpdate;
	ObjectivesUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms
		{
			UAQ_Quest* QuestUpdate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::NewProp_QuestUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "QuestRequirementMetDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FQuestRequirementMetDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuestRequirementMetDelegate, UAQ_Quest* QuestUpdate)
{
	struct _Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms
	{
		UAQ_Quest* QuestUpdate;
	};
	_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms Parms;
	Parms.QuestUpdate=QuestUpdate;
	QuestRequirementMetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAQ_Quest::execOnLevelRequirementChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelRequirementChange(Z_Param_PlayerLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execOnQuestRequirementChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestRequirementChange(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execQuestFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execResetObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execResetQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execDisableQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execEnableQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableQuest();
		P_NATIVE_END;
	}
	void UAQ_Quest::StaticRegisterNativesUAQ_Quest()
	{
		UClass* Class = UAQ_Quest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableQuest", &UAQ_Quest::execDisableQuest },
			{ "EnableQuest", &UAQ_Quest::execEnableQuest },
			{ "OnLevelRequirementChange", &UAQ_Quest::execOnLevelRequirementChange },
			{ "OnQuestRequirementChange", &UAQ_Quest::execOnQuestRequirementChange },
			{ "QuestFailed", &UAQ_Quest::execQuestFailed },
			{ "ResetObjectives", &UAQ_Quest::execResetObjectives },
			{ "ResetQuest", &UAQ_Quest::execResetQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "DisableQuest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_DisableQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "EnableQuest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_EnableQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics
	{
		struct AQ_Quest_eventOnLevelRequirementChange_Parms
		{
			int32 PlayerLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Quest_eventOnLevelRequirementChange_Parms, PlayerLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::NewProp_PlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "OnLevelRequirementChange", nullptr, nullptr, Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::AQ_Quest_eventOnLevelRequirementChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::AQ_Quest_eventOnLevelRequirementChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics
	{
		struct AQ_Quest_eventOnQuestRequirementChange_Parms
		{
			int32 QuestID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Quest_eventOnQuestRequirementChange_Parms, QuestID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_QuestID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "OnQuestRequirementChange", nullptr, nullptr, Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::AQ_Quest_eventOnQuestRequirementChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::AQ_Quest_eventOnQuestRequirementChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "QuestFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_QuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "ResetObjectives", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_ResetObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "ResetQuest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_ResetQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_Quest);
	UClass* Z_Construct_UClass_UAQ_Quest_NoRegister()
	{
		return UAQ_Quest::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_Quest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectivesCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectivesCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayJournal_MetaData[];
#endif
		static void NewProp_bIsDisplayJournal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayJournal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayQuickJournal_MetaData[];
#endif
		static void NewProp_bIsDisplayQuickJournal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayQuickJournal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexQuickDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexQuickDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequirementMet_MetaData[];
#endif
		static void NewProp_bIsRequirementMet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequirementMet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_Quest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_Quest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_Quest_DisableQuest, "DisableQuest" }, // 3499880422
		{ &Z_Construct_UFunction_UAQ_Quest_EnableQuest, "EnableQuest" }, // 2726572292
		{ &Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange, "OnLevelRequirementChange" }, // 3219024469
		{ &Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange, "OnQuestRequirementChange" }, // 1594367742
		{ &Z_Construct_UFunction_UAQ_Quest_QuestFailed, "QuestFailed" }, // 2402528187
		{ &Z_Construct_UFunction_UAQ_Quest_ResetObjectives, "ResetObjectives" }, // 2519636557
		{ &Z_Construct_UFunction_UAQ_Quest_ResetQuest, "ResetQuest" }, // 3379498425
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "QuestSystem/AQ_Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Quest Data */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quest Data" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_Quest, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData) }; // 3956977008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_Quest, QuestData), Z_Construct_UClass_UAQ_QuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted = { "ObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_Quest, ObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Display Properties */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display Properties" },
#endif
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsDisplayJournal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal = { "bIsDisplayJournal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsDisplayQuickJournal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal = { "bIsDisplayQuickJournal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuickDisplay_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuickDisplay = { "IndexQuickDisplay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_Quest, IndexQuickDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuickDisplay_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuickDisplay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Requirements */" },
#endif
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requirements" },
#endif
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsRequirementMet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet = { "bIsRequirementMet", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData), Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_Quest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayJournal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuickJournal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuickDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAQ_Quest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAQ_Observer_NoRegister, (int32)VTABLE_OFFSET(UAQ_Quest, IAQ_Observer), false },  // 3860254833
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_Quest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_Quest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_Quest_Statics::ClassParams = {
		&UAQ_Quest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_Quest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_Quest()
	{
		if (!Z_Registration_Info_UClass_UAQ_Quest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_Quest.OuterSingleton, Z_Construct_UClass_UAQ_Quest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_Quest.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_Quest>()
	{
		return UAQ_Quest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_Quest);
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo[] = {
		{ EAQ_QuestState_StaticEnum, TEXT("EAQ_QuestState"), &Z_Registration_Info_UEnum_EAQ_QuestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3956977008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_Quest, UAQ_Quest::StaticClass, TEXT("UAQ_Quest"), &Z_Registration_Info_UClass_UAQ_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_Quest), 4293692683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_2218080615(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
