// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Character/AQ_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_PlayerController() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_PlayerController();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_AAQ_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	void AAQ_PlayerController::StaticRegisterNativesAAQ_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAQ_PlayerController);
	UClass* Z_Construct_UClass_AAQ_PlayerController_NoRegister()
	{
		return AAQ_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAQ_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAQ_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09IMPORTANT: This class is not meant to be used in your projects, this is just\n\x09""an example to showcase how to use the plugin.\n\x09""Everything in here will be less well-thought-out and Optimized.\n\x09It's just a very quick implementation of a very basic Player Controller.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/AQ_PlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/AQ_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMPORTANT: This class is not meant to be used in your projects, this is just\nan example to showcase how to use the plugin.\nEverything in here will be less well-thought-out and Optimized.\nIt's just a very quick implementation of a very basic Player Controller." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityX_MetaData[] = {
		{ "Category", "Input|Mouse" },
		{ "ModuleRelativePath", "Public/Character/AQ_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityX = { "MouseSensitivityX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_PlayerController, MouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityX_MetaData), Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityY_MetaData[] = {
		{ "Category", "Input|Mouse" },
		{ "ModuleRelativePath", "Public/Character/AQ_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityY = { "MouseSensitivityY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAQ_PlayerController, MouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityY_MetaData), Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAQ_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAQ_PlayerController_Statics::NewProp_MouseSensitivityY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAQ_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAQ_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAQ_PlayerController_Statics::ClassParams = {
		&AAQ_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAQ_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAQ_PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAQ_PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAQ_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AAQ_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAQ_PlayerController.OuterSingleton, Z_Construct_UClass_AAQ_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAQ_PlayerController.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<AAQ_PlayerController>()
	{
		return AAQ_PlayerController::StaticClass();
	}
	AAQ_PlayerController::AAQ_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAQ_PlayerController);
	AAQ_PlayerController::~AAQ_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAQ_PlayerController, AAQ_PlayerController::StaticClass, TEXT("AAQ_PlayerController"), &Z_Registration_Info_UClass_AAQ_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAQ_PlayerController), 1573447974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_PlayerController_h_4064150653(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Character_AQ_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
