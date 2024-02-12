// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/PlayersChannels/AQ_EnvironmentChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_EnvironmentChannel() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_EnvironmentChannel();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_EnvironmentChannel_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	ADVANCEDQUEST_API UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAQ_EnvironmentEventType;
	static UEnum* EAQ_EnvironmentEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType, (UObject*)Z_Construct_UPackage__Script_AdvancedQuest(), TEXT("EAQ_EnvironmentEventType"));
		}
		return Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UEnum* StaticEnum<EAQ_EnvironmentEventType>()
	{
		return EAQ_EnvironmentEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enumerators[] = {
		{ "EAQ_EnvironmentEventType::Interact", (int64)EAQ_EnvironmentEventType::Interact },
		{ "EAQ_EnvironmentEventType::Travel", (int64)EAQ_EnvironmentEventType::Travel },
		{ "EAQ_EnvironmentEventType::MiniGame", (int64)EAQ_EnvironmentEventType::MiniGame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "EAQ_EnvironmentEventType::Interact" },
		{ "MiniGame.DisplayName", "Mini-Game" },
		{ "MiniGame.Name", "EAQ_EnvironmentEventType::MiniGame" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_EnvironmentChannel.h" },
		{ "Travel.DisplayName", "Travel" },
		{ "Travel.Name", "EAQ_EnvironmentEventType::Travel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest,
		nullptr,
		"EAQ_EnvironmentEventType",
		"EAQ_EnvironmentEventType",
		Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType()
	{
		if (!Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.InnerSingleton, Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAQ_EnvironmentEventType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(0, nullptr) }; // 390537601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_EnvironmentChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedQuest, nullptr, "OnEnvironmentEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedQuest_OnEnvironmentEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEnvironmentEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvironmentEventDelegate, UObject* entity, EAQ_NotifyEventType eventType, float amount)
{
	struct _Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms
	{
		UObject* entity;
		EAQ_NotifyEventType eventType;
		float amount;
	};
	_Script_AdvancedQuest_eventOnEnvironmentEventDelegate_Parms Parms;
	Parms.entity=entity;
	Parms.eventType=eventType;
	Parms.amount=amount;
	OnEnvironmentEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAQ_EnvironmentChannel::execOnEnvironmentEventNotify)
	{
		P_GET_ENUM(EAQ_EnvironmentEventType,Z_Param_eventType);
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnvironmentEventNotify(EAQ_EnvironmentEventType(Z_Param_eventType),Z_Param_entity);
		P_NATIVE_END;
	}
	void UAQ_EnvironmentChannel::StaticRegisterNativesUAQ_EnvironmentChannel()
	{
		UClass* Class = UAQ_EnvironmentChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnvironmentEventNotify", &UAQ_EnvironmentChannel::execOnEnvironmentEventNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics
	{
		struct AQ_EnvironmentChannel_eventOnEnvironmentEventNotify_Parms
		{
			EAQ_EnvironmentEventType eventType;
			UObject* entity;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_EnvironmentChannel_eventOnEnvironmentEventNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_EnvironmentEventType, METADATA_PARAMS(0, nullptr) }; // 3658687028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_EnvironmentChannel_eventOnEnvironmentEventNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::NewProp_entity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_EnvironmentChannel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_EnvironmentChannel, nullptr, "OnEnvironmentEventNotify", nullptr, nullptr, Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::AQ_EnvironmentChannel_eventOnEnvironmentEventNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::AQ_EnvironmentChannel_eventOnEnvironmentEventNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_EnvironmentChannel);
	UClass* Z_Construct_UClass_UAQ_EnvironmentChannel_NoRegister()
	{
		return UAQ_EnvironmentChannel::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_EnvironmentChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_EnvironmentChannel_OnEnvironmentEventNotify, "OnEnvironmentEventNotify" }, // 3893691345
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayersChannels/AQ_EnvironmentChannel.h" },
		{ "ModuleRelativePath", "Public/PlayersChannels/AQ_EnvironmentChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_EnvironmentChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::ClassParams = {
		&UAQ_EnvironmentChannel::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_EnvironmentChannel()
	{
		if (!Z_Registration_Info_UClass_UAQ_EnvironmentChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_EnvironmentChannel.OuterSingleton, Z_Construct_UClass_UAQ_EnvironmentChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_EnvironmentChannel.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_EnvironmentChannel>()
	{
		return UAQ_EnvironmentChannel::StaticClass();
	}
	UAQ_EnvironmentChannel::UAQ_EnvironmentChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_EnvironmentChannel);
	UAQ_EnvironmentChannel::~UAQ_EnvironmentChannel() {}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::EnumInfo[] = {
		{ EAQ_EnvironmentEventType_StaticEnum, TEXT("EAQ_EnvironmentEventType"), &Z_Registration_Info_UEnum_EAQ_EnvironmentEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3658687028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_EnvironmentChannel, UAQ_EnvironmentChannel::StaticClass, TEXT("UAQ_EnvironmentChannel"), &Z_Registration_Info_UClass_UAQ_EnvironmentChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_EnvironmentChannel), 2757543158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_1726065830(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_PlayersChannels_AQ_EnvironmentChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
