// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_Channels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Channels() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Channels();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Channels_NoRegister();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Subject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	void UAQ_Channels::StaticRegisterNativesUAQ_Channels()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_Channels);
	UClass* Z_Construct_UClass_UAQ_Channels_NoRegister()
	{
		return UAQ_Channels::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_Channels_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_Channels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Channels_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Channels_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayersChannels/AQ_Channels.h" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_Channels.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAQ_Channels_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAQ_Subject_NoRegister, (int32)VTABLE_OFFSET(UAQ_Channels, IAQ_Subject), false },  // 186530812
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Channels_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_Channels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_Channels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_Channels_Statics::ClassParams = {
		&UAQ_Channels::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Channels_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_Channels_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_Channels()
	{
		if (!Z_Registration_Info_UClass_UAQ_Channels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_Channels.OuterSingleton, Z_Construct_UClass_UAQ_Channels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_Channels.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_Channels>()
	{
		return UAQ_Channels::StaticClass();
	}
	UAQ_Channels::UAQ_Channels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_Channels);
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_Channels_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_Channels_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_Channels, UAQ_Channels::StaticClass, TEXT("UAQ_Channels"), &Z_Registration_Info_UClass_UAQ_Channels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_Channels), 3195569456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_Channels_h_1154793050(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_Channels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_Channels_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
