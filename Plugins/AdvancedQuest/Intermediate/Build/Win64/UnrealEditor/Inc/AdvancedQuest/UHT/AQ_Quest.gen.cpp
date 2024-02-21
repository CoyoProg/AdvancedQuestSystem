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
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestData_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_QuestState;
	static UEnum* EAQ_QuestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_QuestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_QuestState"));
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
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EAQ_QuestState::Active" },
		{ "Archive.DisplayName", "Archive" },
		{ "Archive.Name", "EAQ_QuestState::Archive" },
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EAQ_QuestState::Failed" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "Pending.DisplayName", "Pending" },
		{ "Pending.Name", "EAQ_QuestState::Pending" },
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
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_QuestState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_QuestType;
	static UEnum* EAQ_QuestType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_QuestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_QuestType"));
		}
		return Z_Registration_Info_UEnum_EAQ_QuestType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_QuestType>()
	{
		return EAQ_QuestType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enumerators[] = {
		{ "EAQ_QuestType::Daily", (int64)EAQ_QuestType::Daily },
		{ "EAQ_QuestType::Weekly", (int64)EAQ_QuestType::Weekly },
		{ "EAQ_QuestType::MainQuest", (int64)EAQ_QuestType::MainQuest },
		{ "EAQ_QuestType::SideQuest", (int64)EAQ_QuestType::SideQuest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Added for future implementation*/" },
		{ "Daily.DisplayName", "Daily Quest" },
		{ "Daily.Name", "EAQ_QuestType::Daily" },
		{ "MainQuest.DisplayName", "Main Quest" },
		{ "MainQuest.Name", "EAQ_QuestType::MainQuest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "SideQuest.DisplayName", "Side Quest" },
		{ "SideQuest.Name", "EAQ_QuestType::SideQuest" },
		{ "ToolTip", "Added for future implementation" },
		{ "Weekly.DisplayName", "Weekly Quest" },
		{ "Weekly.Name", "EAQ_QuestType::Weekly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_QuestType",
		"EAQ_QuestType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_QuestType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_QuestType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_QuestType.InnerSingleton;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(nullptr, 0) }; // 1583766727
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "QuestStateChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_QuestStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::NewProp_QuestUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "ObjectivesUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventObjectivesUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_ObjectivesUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::NewProp_QuestUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "QuestRequirementMetDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventQuestRequirementMetDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_QuestRequirementMetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
		P_GET_OBJECT(UAQ_Quest,Z_Param_questUpdateP);
		P_GET_ENUM(EAQ_QuestState,Z_Param_questStateP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestRequirementChange(Z_Param_questUpdateP,EAQ_QuestState(Z_Param_questStateP));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_Quest::execOnNotify)
	{
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_ENUM(EAQ_NotifyEventType,Z_Param_eventTypeP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotify(Z_Param_entity,EAQ_NotifyEventType(Z_Param_eventTypeP),Z_Param_amount);
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
			{ "OnNotify", &UAQ_Quest::execOnNotify },
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "DisableQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_DisableQuest_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "EnableQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_EnableQuest_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnLevelRequirementChange_Parms, PlayerLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::NewProp_PlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "OnLevelRequirementChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::AQ_Quest_eventOnLevelRequirementChange_Parms), Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics
	{
		struct AQ_Quest_eventOnNotify_Parms
		{
			UObject* entity;
			EAQ_NotifyEventType eventTypeP;
			float amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventTypeP_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventTypeP;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_eventTypeP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_eventTypeP = { "eventTypeP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnNotify_Parms, eventTypeP), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(nullptr, 0) }; // 4210330728
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnNotify_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_eventTypeP_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_eventTypeP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Event Listeners */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "ToolTip", "Event Listeners" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "OnNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::AQ_Quest_eventOnNotify_Parms), Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_Quest_OnNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Quest_OnNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics
	{
		struct AQ_Quest_eventOnQuestRequirementChange_Parms
		{
			UAQ_Quest* questUpdateP;
			EAQ_QuestState questStateP;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_questUpdateP;
		static const UECodeGen_Private::FBytePropertyParams NewProp_questStateP_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_questStateP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questUpdateP = { "questUpdateP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnQuestRequirementChange_Parms, questUpdateP), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questStateP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questStateP = { "questStateP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_Quest_eventOnQuestRequirementChange_Parms, questStateP), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(nullptr, 0) }; // 1583766727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questUpdateP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questStateP_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::NewProp_questStateP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "OnQuestRequirementChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::AQ_Quest_eventOnQuestRequirementChange_Parms), Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "QuestFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_QuestFailed_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "ResetObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_ResetObjectives_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Quest, nullptr, "ResetQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Quest_ResetQuest_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectivesCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectivesCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayQuestLog_MetaData[];
#endif
		static void NewProp_bIsDisplayQuestLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayQuestLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayQuestTracker_MetaData[];
#endif
		static void NewProp_bIsDisplayQuestTracker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayQuestTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexQuestTracker_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexQuestTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequirementMet_MetaData[];
#endif
		static void NewProp_bIsRequirementMet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequirementMet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_Quest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_Quest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_Quest_DisableQuest, "DisableQuest" }, // 3496998491
		{ &Z_Construct_UFunction_UAQ_Quest_EnableQuest, "EnableQuest" }, // 3573683529
		{ &Z_Construct_UFunction_UAQ_Quest_OnLevelRequirementChange, "OnLevelRequirementChange" }, // 2080967878
		{ &Z_Construct_UFunction_UAQ_Quest_OnNotify, "OnNotify" }, // 1027516544
		{ &Z_Construct_UFunction_UAQ_Quest_OnQuestRequirementChange, "OnQuestRequirementChange" }, // 2065268371
		{ &Z_Construct_UFunction_UAQ_Quest_QuestFailed, "QuestFailed" }, // 2405879149
		{ &Z_Construct_UFunction_UAQ_Quest_ResetObjectives, "ResetObjectives" }, // 84688834
		{ &Z_Construct_UFunction_UAQ_Quest_ResetQuest, "ResetQuest" }, // 2441055720
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/AQ_Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "Comment", "/* Quest Data */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "ToolTip", "Quest Data" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_Quest, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_MetaData)) }; // 1583766727
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType = { "QuestType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_Quest, QuestType), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestType, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType_MetaData)) }; // 4289939705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_Quest, QuestData), Z_Construct_UClass_UAQ_QuestData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted = { "ObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_Quest, ObjectivesCompleted), METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "Comment", "/* Display Properties */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "ToolTip", "Display Properties" },
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsDisplayQuestLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog = { "bIsDisplayQuestLog", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsDisplayQuestTracker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker = { "bIsDisplayQuestTracker", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuestTracker_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuestTracker = { "IndexQuestTracker", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_Quest, IndexQuestTracker), METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuestTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuestTracker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "Comment", "/* Requirements */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_Quest.h" },
		{ "ToolTip", "Requirements" },
	};
#endif
	void Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_SetBit(void* Obj)
	{
		((UAQ_Quest*)Obj)->bIsRequirementMet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet = { "bIsRequirementMet", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAQ_Quest), &Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_Quest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_QuestData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_ObjectivesCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsDisplayQuestTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_IndexQuestTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_Quest_Statics::NewProp_bIsRequirementMet,
	};
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Quest_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo[] = {
		{ EAQ_QuestState_StaticEnum, TEXT("EAQ_QuestState"), &Z_Registration_Info_UEnum_EAQ_QuestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1583766727U) },
		{ EAQ_QuestType_StaticEnum, TEXT("EAQ_QuestType"), &Z_Registration_Info_UEnum_EAQ_QuestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4289939705U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_Quest, UAQ_Quest::StaticClass, TEXT("UAQ_Quest"), &Z_Registration_Info_UClass_UAQ_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_Quest), 3957132583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_284752313(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_Quest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
