// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_QuestManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_QuestManager() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestManager();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_QuestManager_NoRegister();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnNewDayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnNewWeekDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAQ_QuestManager::execQueryQuest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAQ_Quest**)Z_Param__Result=P_THIS->QueryQuest(Z_Param_QuestID);
		P_NATIVE_END;
	}
	static FName NAME_UAQ_QuestManager_LoadQuestData = FName(TEXT("LoadQuestData"));
	void UAQ_QuestManager::LoadQuestData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAQ_QuestManager_LoadQuestData),NULL);
	}
	static FName NAME_UAQ_QuestManager_SaveQuestData = FName(TEXT("SaveQuestData"));
	void UAQ_QuestManager::SaveQuestData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAQ_QuestManager_SaveQuestData),NULL);
	}
	void UAQ_QuestManager::StaticRegisterNativesUAQ_QuestManager()
	{
		UClass* Class = UAQ_QuestManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryQuest", &UAQ_QuestManager::execQueryQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Save-Load" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestManager, nullptr, "LoadQuestData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics
	{
		struct AQ_QuestManager_eventQueryQuest_Parms
		{
			int32 QuestID;
			UAQ_Quest* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestManager_eventQueryQuest_Parms, QuestID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_QuestManager_eventQueryQuest_Parms, ReturnValue), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::NewProp_QuestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestManager, nullptr, "QueryQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::AQ_QuestManager_eventQueryQuest_Parms), Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestManager_QueryQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestManager_QueryQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Save-Load" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_QuestManager, nullptr, "SaveQuestData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_QuestManager);
	UClass* Z_Construct_UClass_UAQ_QuestManager_NoRegister()
	{
		return UAQ_QuestManager::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_QuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataCenter_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestDataCenter_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataCenter_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QuestDataCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewDayDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewDayDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewWeekDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewWeekDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_QuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_QuestManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_QuestManager_LoadQuestData, "LoadQuestData" }, // 3634995301
		{ &Z_Construct_UFunction_UAQ_QuestManager_QueryQuest, "QueryQuest" }, // 875797855
		{ &Z_Construct_UFunction_UAQ_QuestManager_SaveQuestData, "SaveQuestData" }, // 992947828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestManager_Statics::Class_MetaDataParams[] = {
		{ "ABSTRACT", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/AQ_QuestManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_ValueProp = { "QuestDataCenter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_Key_KeyProp = { "QuestDataCenter_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_MetaData[] = {
		{ "Category", "Advanced Quest | Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter = { "QuestDataCenter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestManager, QuestDataCenter), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewDayDelegate_MetaData[] = {
		{ "Category", "Advanced Quest | Date" },
		{ "Comment", "/* Delegates */" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewDayDelegate = { "OnNewDayDelegate", nullptr, (EPropertyFlags)0x0020180000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestManager, OnNewDayDelegate), Z_Construct_UDelegateFunction_AdvancedQuest_OnNewDayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewDayDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewDayDelegate_MetaData)) }; // 4268023475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewWeekDelegate_MetaData[] = {
		{ "Category", "Advanced Quest | Date" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewWeekDelegate = { "OnNewWeekDelegate", nullptr, (EPropertyFlags)0x0020180000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_QuestManager, OnNewWeekDelegate), Z_Construct_UDelegateFunction_AdvancedQuest_OnNewWeekDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewWeekDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewWeekDelegate_MetaData)) }; // 2459498385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_QuestManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_QuestDataCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewDayDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_QuestManager_Statics::NewProp_OnNewWeekDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_QuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_QuestManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_QuestManager_Statics::ClassParams = {
		&UAQ_QuestManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_QuestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_QuestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_QuestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_QuestManager()
	{
		if (!Z_Registration_Info_UClass_UAQ_QuestManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_QuestManager.OuterSingleton, Z_Construct_UClass_UAQ_QuestManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_QuestManager.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_QuestManager>()
	{
		return UAQ_QuestManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_QuestManager);
	UAQ_QuestManager::~UAQ_QuestManager() {}
	struct Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_QuestManager, UAQ_QuestManager::StaticClass, TEXT("UAQ_QuestManager"), &Z_Registration_Info_UClass_UAQ_QuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_QuestManager), 4199855556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_3318270716(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_QuestManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
