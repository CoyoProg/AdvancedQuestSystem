// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Character/AQ_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Player() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Player();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_Player_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FName NAME_AAQ_Player_Interact = FName(TEXT("Interact"));
	void AAQ_Player::Interact()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAQ_Player_Interact),NULL);
	}
	void AAQ_Player::StaticRegisterNativesAAQ_Player()
	{
	}
	struct Z_Construct_UFunction_AAQ_Player_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAQ_Player_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Interact */" },
#endif
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAQ_Player_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAQ_Player, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAQ_Player_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAQ_Player_Interact_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAQ_Player_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAQ_Player_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAQ_Player);
	UClass* Z_Construct_UClass_AAQ_Player_NoRegister()
	{
		return AAQ_Player::StaticClass();
	}
	struct Z_Construct_UClass_AAQ_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAQ_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAQ_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAQ_Player_Interact, "Interact" }, // 4170967921
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09IMPORTANT: This class is not meant to be used in your projects, this is just\n\x09""an example to showcase how to use the plugin.\n\x09""Everything in here will be less well-thought-out and Optimized.\n\x09It's just a very quick implementation of a very basic Player.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AQ_Player.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMPORTANT: This class is not meant to be used in your projects, this is just\nan example to showcase how to use the plugin.\nEverything in here will be less well-thought-out and Optimized.\nIt's just a very quick implementation of a very basic Player." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityX_MetaData[] = {
		{ "Category", "Input|Mouse" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityX = { "MouseSensitivityX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, MouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityX_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityY_MetaData[] = {
		{ "Category", "Input|Mouse" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityY = { "MouseSensitivityY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, MouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityY_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Controllers */" },
#endif
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controllers" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_Player_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/AQ_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAQ_Player_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_Player, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AAQ_Player_Statics::NewProp_JumpAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAQ_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_MouseSensitivityY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_Player_Statics::NewProp_JumpAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAQ_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAQ_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAQ_Player_Statics::ClassParams = {
		&AAQ_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAQ_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_AAQ_Player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_Player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAQ_Player()
	{
		if (!Z_Registration_Info_UClass_AAQ_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAQ_Player.OuterSingleton, Z_Construct_UClass_AAQ_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAQ_Player.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<AAQ_Player>()
	{
		return AAQ_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAQ_Player);
	AAQ_Player::~AAQ_Player() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAQ_Player, AAQ_Player::StaticClass, TEXT("AAQ_Player"), &Z_Registration_Info_UClass_AAQ_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAQ_Player), 2715035023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_Player_h_2215359511(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
