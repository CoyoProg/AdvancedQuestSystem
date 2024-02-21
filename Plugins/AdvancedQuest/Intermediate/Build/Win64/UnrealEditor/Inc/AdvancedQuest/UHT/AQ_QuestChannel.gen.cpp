// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_QuestChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestChannel() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_BookQuest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestChannel();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestChannel_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms, PlayerLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::NewProp_PlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_QuestChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "LevelRequirementChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_LevelRequirementChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLevelRequirementChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LevelRequirementChangedDelegate, int32 PlayerLevel)
{
	struct _Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms
	{
		int32 PlayerLevel;
	};
	_Script_AdvancedQuest_eventLevelRequirementChangedDelegate_Parms Parms;
	Parms.PlayerLevel=PlayerLevel;
	LevelRequirementChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAQ_QuestChannel::execOnQuestUpdate)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_QuestUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestUpdate(Z_Param_QuestUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_QuestChannel::execOnQuestStateChanged)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_QuestUpdate);
		P_GET_ENUM(EAQ_QuestState,Z_Param_QuestState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStateChanged(Z_Param_QuestUpdate,EAQ_QuestState(Z_Param_QuestState));
		P_NATIVE_END;
	}
	void UAQ_QuestChannel::StaticRegisterNativesUAQ_QuestChannel()
	{
		UClass* Class = UAQ_QuestChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuestStateChanged", &UAQ_QuestChannel::execOnQuestStateChanged },
			{ "OnQuestUpdate", &UAQ_QuestChannel::execOnQuestUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics
	{
		struct AQ_QuestChannel_eventOnQuestStateChanged_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestChannel_eventOnQuestStateChanged_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestChannel_eventOnQuestStateChanged_Parms, QuestState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 859247259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::NewProp_QuestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delegates */" },
#endif
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_QuestChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestChannel, nullptr, "OnQuestStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::AQ_QuestChannel_eventOnQuestStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::AQ_QuestChannel_eventOnQuestStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics
	{
		struct AQ_QuestChannel_eventOnQuestUpdate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::NewProp_QuestUpdate = { "QuestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_QuestChannel_eventOnQuestUpdate_Parms, QuestUpdate), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::NewProp_QuestUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_QuestChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestChannel, nullptr, "OnQuestUpdate", nullptr, nullptr, Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::AQ_QuestChannel_eventOnQuestUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::AQ_QuestChannel_eventOnQuestUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestChannel);
	UClass* Z_Construct_UClass_UAQ_QuestChannel_NoRegister()
	{
		return UAQ_QuestChannel::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_QuestChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_QuestChannel_OnQuestStateChanged, "OnQuestStateChanged" }, // 358515257
		{ &Z_Construct_UFunction_UAQ_QuestChannel_OnQuestUpdate, "OnQuestUpdate" }, // 382025335
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestChannel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayersChannels/AQ_QuestChannel.h" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_QuestChannel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestChannel_Statics::NewProp_QuestWidgets_MetaData[] = {
		{ "Category", "Advanced Quest | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_QuestChannel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestChannel_Statics::NewProp_QuestWidgets = { "QuestWidgets", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAQ_QuestChannel, QuestWidgets), Z_Construct_UClass_UAQ_BookQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::NewProp_QuestWidgets_MetaData), Z_Construct_UClass_UAQ_QuestChannel_Statics::NewProp_QuestWidgets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestChannel_Statics::NewProp_QuestWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestChannel_Statics::ClassParams = {
		&UAQ_QuestChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_QuestChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_QuestChannel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestChannel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAQ_QuestChannel()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestChannel.OuterSingleton, Z_Construct_UClass_UAQ_QuestChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestChannel.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestChannel>()
	{
		return UAQ_QuestChannel::StaticClass();
	}
	UAQ_QuestChannel::UAQ_QuestChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestChannel);
	UAQ_QuestChannel::~UAQ_QuestChannel() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestChannel, UAQ_QuestChannel::StaticClass, TEXT("UAQ_QuestChannel"), &Z_Registration_Info_UClass_UAQ_QuestChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestChannel), 648633366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_174288061(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_QuestChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
