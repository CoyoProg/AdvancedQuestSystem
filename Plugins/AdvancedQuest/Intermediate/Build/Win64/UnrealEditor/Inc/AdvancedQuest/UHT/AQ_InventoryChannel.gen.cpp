// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_InventoryChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_InventoryChannel() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_InventoryChannel();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_InventoryChannel_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_InventoryEventType;
	static UEnum* EAQ_InventoryEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_InventoryEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_InventoryEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType, Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_InventoryEventType"));
		}
		return Z_Registration_Info_UEnum_EAQ_InventoryEventType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_InventoryEventType>()
	{
		return EAQ_InventoryEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enumerators[] = {
		{ "EAQ_InventoryEventType::Collect", (int64)EAQ_InventoryEventType::Collect },
		{ "EAQ_InventoryEventType::RemoveFromInventory", (int64)EAQ_InventoryEventType::RemoveFromInventory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collect.DisplayName", "Collect" },
		{ "Collect.Name", "EAQ_InventoryEventType::Collect" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_InventoryChannel.h" },
		{ "RemoveFromInventory.DisplayName", "Remove From Inventory" },
		{ "RemoveFromInventory.Name", "EAQ_InventoryEventType::RemoveFromInventory" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_InventoryEventType",
		"EAQ_InventoryEventType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_InventoryEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_InventoryEventType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_InventoryEventType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnInventoryEventDelegate_Parms
		{
			UObject* entity;
			EAQ_NotifyEventType eventType;
			float amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnInventoryEventDelegate_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnInventoryEventDelegate_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(nullptr, 0) }; // 4064980091
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnInventoryEventDelegate_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_InventoryChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnInventoryEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnInventoryEventDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnInventoryEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAQ_InventoryChannel::execOnInventoryEventNotify)
	{
		P_GET_ENUM(EAQ_InventoryEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventoryEventNotify(EAQ_InventoryEventType(Z_Param_eventType),Z_Param_entity,Z_Param_amount);
		P_NATIVE_END;
	}
	void UAQ_InventoryChannel::StaticRegisterNativesUAQ_InventoryChannel()
	{
		UClass* Class = UAQ_InventoryChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInventoryEventNotify", &UAQ_InventoryChannel::execOnInventoryEventNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics
	{
		struct AQ_InventoryChannel_eventOnInventoryEventNotify_Parms
		{
			EAQ_InventoryEventType eventType;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_InventoryChannel_eventOnInventoryEventNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_InventoryEventType, METADATA_PARAMS(nullptr, 0) }; // 1855110212
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_InventoryChannel_eventOnInventoryEventNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_InventoryChannel_eventOnInventoryEventNotify_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "CPP_Default_amount", "1.000000" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_InventoryChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_InventoryChannel, nullptr, "OnInventoryEventNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::AQ_InventoryChannel_eventOnInventoryEventNotify_Parms), Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_InventoryChannel);
	UClass* Z_Construct_UClass_UAQ_InventoryChannel_NoRegister()
	{
		return UAQ_InventoryChannel::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_InventoryChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_InventoryChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_InventoryChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_InventoryChannel_OnInventoryEventNotify, "OnInventoryEventNotify" }, // 2156151262
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_InventoryChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayersChannels/AQ_InventoryChannel.h" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_InventoryChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_InventoryChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_InventoryChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_InventoryChannel_Statics::ClassParams = {
		&UAQ_InventoryChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAQ_InventoryChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_InventoryChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_InventoryChannel()
	{
		if (!Z_Registration_Info_UClass_UAQ_InventoryChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_InventoryChannel.OuterSingleton, Z_Construct_UClass_UAQ_InventoryChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_InventoryChannel.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_InventoryChannel>()
	{
		return UAQ_InventoryChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_InventoryChannel);
	UAQ_InventoryChannel::~UAQ_InventoryChannel() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::EnumInfo[] = {
		{ EAQ_InventoryEventType_StaticEnum, TEXT("EAQ_InventoryEventType"), &Z_Registration_Info_UEnum_EAQ_InventoryEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1855110212U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_InventoryChannel, UAQ_InventoryChannel::StaticClass, TEXT("UAQ_InventoryChannel"), &Z_Registration_Info_UClass_UAQ_InventoryChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_InventoryChannel), 120819010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_316017291(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_InventoryChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
