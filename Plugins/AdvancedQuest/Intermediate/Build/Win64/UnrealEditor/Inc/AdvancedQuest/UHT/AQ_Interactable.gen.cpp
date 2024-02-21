// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Interactables/AQ_Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Interactable() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Interactable();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Interactable_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_IInteractable_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Quest_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(AAQ_Interactable::execOnQuestStateChanged)
	{
		P_GET_OBJECT(UAQ_Quest,Z_Param_quest);
		P_GET_ENUM(EAQ_QuestState,Z_Param_questState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStateChanged(Z_Param_quest,EAQ_QuestState(Z_Param_questState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAQ_Interactable::execEnableParticles)
	{
		P_GET_UBOOL(Z_Param_isEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableParticles(Z_Param_isEnable);
		P_NATIVE_END;
	}
	static FName NAME_AAQ_Interactable_ResetToInitialState = FName(TEXT("ResetToInitialState"));
	void AAQ_Interactable::ResetToInitialState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAQ_Interactable_ResetToInitialState),NULL);
	}
	static FName NAME_AAQ_Interactable_SaveInitialState = FName(TEXT("SaveInitialState"));
	void AAQ_Interactable::SaveInitialState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAQ_Interactable_SaveInitialState),NULL);
	}
	void AAQ_Interactable::StaticRegisterNativesAAQ_Interactable()
	{
		UClass* Class = AAQ_Interactable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableParticles", &AAQ_Interactable::execEnableParticles },
			{ "OnQuestStateChanged", &AAQ_Interactable::execOnQuestStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics
	{
		struct AQ_Interactable_eventEnableParticles_Parms
		{
			bool isEnable;
		};
		static void NewProp_isEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::NewProp_isEnable_SetBit(void* Obj)
	{
		((AQ_Interactable_eventEnableParticles_Parms*)Obj)->isEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::NewProp_isEnable = { "isEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AQ_Interactable_eventEnableParticles_Parms), &Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::NewProp_isEnable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::NewProp_isEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Interactable" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAQ_Interactable, nullptr, "EnableParticles", nullptr, nullptr, Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::AQ_Interactable_eventEnableParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::AQ_Interactable_eventEnableParticles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAQ_Interactable_EnableParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAQ_Interactable_EnableParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics
	{
		struct AQ_Interactable_eventOnQuestStateChanged_Parms
		{
			UAQ_Quest* quest;
			EAQ_QuestState questState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_quest;
		static const UECodeGen_Private::FBytePropertyParams NewProp_questState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_questState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_quest = { "quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Interactable_eventOnQuestStateChanged_Parms, quest), Z_Construct_UClass_UAQ_Quest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_questState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_questState = { "questState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Interactable_eventOnQuestStateChanged_Parms, questState), Z_Construct_UEnum_AdvancedQuest_EAQ_QuestState, METADATA_PARAMS(0, nullptr) }; // 859247259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_quest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_questState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::NewProp_questState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delegates */" },
#endif
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAQ_Interactable, nullptr, "OnQuestStateChanged", nullptr, nullptr, Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::AQ_Interactable_eventOnQuestStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::AQ_Interactable_eventOnQuestStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Interactable | Reset" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAQ_Interactable, nullptr, "ResetToInitialState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Interactable| Reset" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAQ_Interactable, nullptr, "SaveInitialState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAQ_Interactable_SaveInitialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAQ_Interactable_SaveInitialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAQ_Interactable);
	UClass* Z_Construct_UClass_AAQ_Interactable_NoRegister()
	{
		return AAQ_Interactable::StaticClass();
	}
	struct Z_Construct_UClass_AAQ_Interactable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSleeping_MetaData[];
#endif
		static void NewProp_bIsSleeping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSleeping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialStateSaved_MetaData[];
#endif
		static void NewProp_bIsInitialStateSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialStateSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuestActor_MetaData[];
#endif
		static void NewProp_bIsQuestActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuestActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAQ_Interactable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAQ_Interactable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAQ_Interactable_EnableParticles, "EnableParticles" }, // 596488896
		{ &Z_Construct_UFunction_AAQ_Interactable_OnQuestStateChanged, "OnQuestStateChanged" }, // 3056399334
		{ &Z_Construct_UFunction_AAQ_Interactable_ResetToInitialState, "ResetToInitialState" }, // 2620367541
		{ &Z_Construct_UFunction_AAQ_Interactable_SaveInitialState, "SaveInitialState" }, // 1753744330
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/AQ_Interactable.h" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "Advanced Quest | Interactable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Components */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Interactable, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_NiagaraComponent_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_NiagaraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Advanced Quest | Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Interactable, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Advanced Quest | Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Interactable, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_SceneRoot_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_SceneRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping_MetaData[] = {
		{ "Category", "Advanced Quest | Interactable" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	void Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping_SetBit(void* Obj)
	{
		((AAQ_Interactable*)Obj)->bIsSleeping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping = { "bIsSleeping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAQ_Interactable), &Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved_MetaData[] = {
		{ "Category", "Advanced Quest | Interactable | Reset" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	void Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved_SetBit(void* Obj)
	{
		((AAQ_Interactable*)Obj)->bIsInitialStateSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved = { "bIsInitialStateSaved", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAQ_Interactable), &Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	void Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor_SetBit(void* Obj)
	{
		((AAQ_Interactable*)Obj)->bIsQuestActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor = { "bIsQuestActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAQ_Interactable), &Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditCondition", "bIsQuestActor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_Interactable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Interactable, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_QuestID_MetaData), Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_QuestID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAQ_Interactable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsSleeping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsInitialStateSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_bIsQuestActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Interactable_Statics::NewProp_QuestID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAQ_Interactable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAQ_IInteractable_NoRegister, (int32)VTABLE_OFFSET(AAQ_Interactable, IAQ_IInteractable), false },  // 1604001344
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAQ_Interactable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAQ_Interactable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAQ_Interactable_Statics::ClassParams = {
		&AAQ_Interactable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAQ_Interactable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::Class_MetaDataParams), Z_Construct_UClass_AAQ_Interactable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Interactable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAQ_Interactable()
	{
		if (!Z_Registration_Info_UClass_AAQ_Interactable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAQ_Interactable.OuterSingleton, Z_Construct_UClass_AAQ_Interactable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAQ_Interactable.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<AAQ_Interactable>()
	{
		return AAQ_Interactable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAQ_Interactable);
	AAQ_Interactable::~AAQ_Interactable() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAQ_Interactable, AAQ_Interactable::StaticClass, TEXT("AAQ_Interactable"), &Z_Registration_Info_UClass_AAQ_Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAQ_Interactable), 2192700507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_1372224570(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
