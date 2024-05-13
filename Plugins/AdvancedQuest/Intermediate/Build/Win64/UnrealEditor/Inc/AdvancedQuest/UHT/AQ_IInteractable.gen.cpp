// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Interactables/AQ_IInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_IInteractable() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_IInteractable();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_IInteractable_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	struct AQ_IInteractable_eventInteract_Parms
	{
		TScriptInterface<IAQ_PlayerChannelsFacade> PlayerChannel;
	};
	void IAQ_IInteractable::Interact(TScriptInterface<IAQ_PlayerChannelsFacade> const& PlayerChannel)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UAQ_IInteractable::StaticRegisterNativesUAQ_IInteractable()
	{
	}
	struct Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::NewProp_PlayerChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::NewProp_PlayerChannel = { "PlayerChannel", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_IInteractable_eventInteract_Parms, PlayerChannel), Z_Construct_UClass_UAQ_PlayerChannelsFacade_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::NewProp_PlayerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::NewProp_PlayerChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::NewProp_PlayerChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_IInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_IInteractable, nullptr, "Interact", nullptr, nullptr, sizeof(AQ_IInteractable_eventInteract_Parms), Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_IInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_IInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_IInteractable);
	UClass* Z_Construct_UClass_UAQ_IInteractable_NoRegister()
	{
		return UAQ_IInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_IInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_IInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_IInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_IInteractable_Interact, "Interact" }, // 306483872
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_IInteractable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactables/AQ_IInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_IInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAQ_IInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_IInteractable_Statics::ClassParams = {
		&UAQ_IInteractable::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAQ_IInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_IInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_IInteractable()
	{
		if (!Z_Registration_Info_UClass_UAQ_IInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_IInteractable.OuterSingleton, Z_Construct_UClass_UAQ_IInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_IInteractable.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_IInteractable>()
	{
		return UAQ_IInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_IInteractable);
	UAQ_IInteractable::~UAQ_IInteractable() {}
	static FName NAME_UAQ_IInteractable_Interact = FName(TEXT("Interact"));
	void IAQ_IInteractable::Execute_Interact(UObject* O, TScriptInterface<IAQ_PlayerChannelsFacade> const& PlayerChannel)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_IInteractable::StaticClass()));
		AQ_IInteractable_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_IInteractable_Interact);
		if (Func)
		{
			Parms.PlayerChannel=PlayerChannel;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_IInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_IInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_IInteractable, UAQ_IInteractable::StaticClass, TEXT("UAQ_IInteractable"), &Z_Registration_Info_UClass_UAQ_IInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_IInteractable), 3347338288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_IInteractable_h_1931642552(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_IInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Interactables_AQ_IInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
