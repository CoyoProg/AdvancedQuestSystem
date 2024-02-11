// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_CombatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_CombatChannel() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Channels();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_CombatChannel();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_CombatChannel_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_CombatEventType;
	static UEnum* EAQ_CombatEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_CombatEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_CombatEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_CombatEventType"));
		}
		return Z_Registration_Info_UEnum_EAQ_CombatEventType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_CombatEventType>()
	{
		return EAQ_CombatEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enumerators[] = {
		{ "EAQ_CombatEventType::Kill", (int64)EAQ_CombatEventType::Kill },
		{ "EAQ_CombatEventType::Heal", (int64)EAQ_CombatEventType::Heal },
		{ "EAQ_CombatEventType::Damage", (int64)EAQ_CombatEventType::Damage },
		{ "EAQ_CombatEventType::Protect", (int64)EAQ_CombatEventType::Protect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EAQ_CombatEventType::Damage" },
		{ "Heal.DisplayName", "Heal" },
		{ "Heal.Name", "EAQ_CombatEventType::Heal" },
		{ "Kill.DisplayName", "Kill" },
		{ "Kill.Name", "EAQ_CombatEventType::Kill" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_CombatChannel.h" },
		{ "Protect.DisplayName", "Protect" },
		{ "Protect.Name", "EAQ_CombatEventType::Protect" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_CombatEventType",
		"EAQ_CombatEventType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_CombatEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_CombatEventType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_CombatEventType.InnerSingleton;
	}
	DEFINE_FUNCTION(UAQ_CombatChannel::execOnCombatEventNotify)
	{
		P_GET_ENUM(EAQ_CombatEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCombatEventNotify(EAQ_CombatEventType(Z_Param_eventType),Z_Param_entity,Z_Param_amount);
		P_NATIVE_END;
	}
	void UAQ_CombatChannel::StaticRegisterNativesUAQ_CombatChannel()
	{
		UClass* Class = UAQ_CombatChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCombatEventNotify", &UAQ_CombatChannel::execOnCombatEventNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics
	{
		struct AQ_CombatChannel_eventOnCombatEventNotify_Parms
		{
			EAQ_CombatEventType eventType;
			UObject* entity;
			float amount;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_CombatChannel_eventOnCombatEventNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_CombatEventType, METADATA_PARAMS(0, nullptr) }; // 940911391
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_CombatChannel_eventOnCombatEventNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_CombatChannel_eventOnCombatEventNotify_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "CPP_Default_amount", "1.000000" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_CombatChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CombatChannel, nullptr, "OnCombatEventNotify", nullptr, nullptr, Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::AQ_CombatChannel_eventOnCombatEventNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::AQ_CombatChannel_eventOnCombatEventNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_CombatChannel);
	UClass* Z_Construct_UClass_UAQ_CombatChannel_NoRegister()
	{
		return UAQ_CombatChannel::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_CombatChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_CombatChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAQ_Channels,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_CombatChannel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_CombatChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_CombatChannel_OnCombatEventNotify, "OnCombatEventNotify" }, // 3355288786
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_CombatChannel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_CombatChannel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayersChannels/AQ_CombatChannel.h" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_CombatChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_CombatChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_CombatChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_CombatChannel_Statics::ClassParams = {
		&UAQ_CombatChannel::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_CombatChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_CombatChannel_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_CombatChannel()
	{
		if (!Z_Registration_Info_UClass_UAQ_CombatChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_CombatChannel.OuterSingleton, Z_Construct_UClass_UAQ_CombatChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_CombatChannel.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_CombatChannel>()
	{
		return UAQ_CombatChannel::StaticClass();
	}
	UAQ_CombatChannel::UAQ_CombatChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_CombatChannel);
	UAQ_CombatChannel::~UAQ_CombatChannel() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::EnumInfo[] = {
		{ EAQ_CombatEventType_StaticEnum, TEXT("EAQ_CombatEventType"), &Z_Registration_Info_UEnum_EAQ_CombatEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 940911391U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_CombatChannel, UAQ_CombatChannel::StaticClass, TEXT("UAQ_CombatChannel"), &Z_Registration_Info_UClass_UAQ_CombatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_CombatChannel), 4180480203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_3045977535(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_CombatChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
