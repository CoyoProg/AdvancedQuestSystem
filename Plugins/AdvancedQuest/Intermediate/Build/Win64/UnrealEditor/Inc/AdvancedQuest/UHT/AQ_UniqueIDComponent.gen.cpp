// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/QuestSystem/AQ_UniqueIDComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_UniqueIDComponent() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_UniqueIDComponent();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_UniqueIDComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(UAQ_UniqueIDComponent::execGenerateUniqueID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateUniqueID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_UniqueIDComponent::execGetUniqueID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUniqueID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_UniqueIDComponent::execSetUniqueID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUniqueID(Z_Param_InUniqueID);
		P_NATIVE_END;
	}
	void UAQ_UniqueIDComponent::StaticRegisterNativesUAQ_UniqueIDComponent()
	{
		UClass* Class = UAQ_UniqueIDComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateUniqueID", &UAQ_UniqueIDComponent::execGenerateUniqueID },
			{ "GetUniqueID", &UAQ_UniqueIDComponent::execGetUniqueID },
			{ "SetUniqueID", &UAQ_UniqueIDComponent::execSetUniqueID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_UniqueIDComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_UniqueIDComponent, nullptr, "GenerateUniqueID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics
	{
		struct AQ_UniqueIDComponent_eventGetUniqueID_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_UniqueIDComponent_eventGetUniqueID_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_UniqueIDComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_UniqueIDComponent, nullptr, "GetUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::AQ_UniqueIDComponent_eventGetUniqueID_Parms), Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics
	{
		struct AQ_UniqueIDComponent_eventSetUniqueID_Parms
		{
			int32 InUniqueID;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InUniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::NewProp_InUniqueID = { "InUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_UniqueIDComponent_eventSetUniqueID_Parms, InUniqueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::NewProp_InUniqueID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_UniqueIDComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_UniqueIDComponent, nullptr, "SetUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::AQ_UniqueIDComponent_eventSetUniqueID_Parms), Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_UniqueIDComponent);
	UClass* Z_Construct_UClass_UAQ_UniqueIDComponent_NoRegister()
	{
		return UAQ_UniqueIDComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_UniqueIDComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UniqueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_UniqueIDComponent_GenerateUniqueID, "GenerateUniqueID" }, // 4208527602
		{ &Z_Construct_UFunction_UAQ_UniqueIDComponent_GetUniqueID, "GetUniqueID" }, // 2475424689
		{ &Z_Construct_UFunction_UAQ_UniqueIDComponent_SetUniqueID, "SetUniqueID" }, // 1731552414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestSystem/AQ_UniqueIDComponent.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_UniqueIDComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/QuestSystem/AQ_UniqueIDComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAQ_UniqueIDComponent, UniqueID), METADATA_PARAMS(Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::NewProp_UniqueID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::NewProp_UniqueID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_UniqueIDComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::ClassParams = {
		&UAQ_UniqueIDComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_UniqueIDComponent()
	{
		if (!Z_Registration_Info_UClass_UAQ_UniqueIDComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_UniqueIDComponent.OuterSingleton, Z_Construct_UClass_UAQ_UniqueIDComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_UniqueIDComponent.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_UniqueIDComponent>()
	{
		return UAQ_UniqueIDComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_UniqueIDComponent);
	UAQ_UniqueIDComponent::~UAQ_UniqueIDComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_UniqueIDComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_UniqueIDComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_UniqueIDComponent, UAQ_UniqueIDComponent::StaticClass, TEXT("UAQ_UniqueIDComponent"), &Z_Registration_Info_UClass_UAQ_UniqueIDComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_UniqueIDComponent), 566363780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_UniqueIDComponent_h_3657395911(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_UniqueIDComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_QuestSystem_AQ_UniqueIDComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
