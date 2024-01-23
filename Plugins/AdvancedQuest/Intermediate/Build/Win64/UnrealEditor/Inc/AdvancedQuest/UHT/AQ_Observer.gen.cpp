// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/ObserverPattern/AQ_Observer.h"
#include "AdvancedQuest/Public/Enums/AQ_RequiermentEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Observer() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Observer();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Observer_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType();
	ADVANCEDQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FAQ_RequiermentData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(IAQ_Observer::execOnNotifyRequierment)
	{
		P_GET_ENUM(EAQ_RequiermentEventType,Z_Param_eventType);
		P_GET_STRUCT_REF(FAQ_RequiermentData,Z_Param_Out_requiermentData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyRequierment_Implementation(EAQ_RequiermentEventType(Z_Param_eventType),Z_Param_Out_requiermentData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_Observer::execOnNotify)
	{
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_ENUM(EAQ_NotifyEventType,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotify_Implementation(Z_Param_entity,EAQ_NotifyEventType(Z_Param_eventType),Z_Param_amount);
		P_NATIVE_END;
	}
	struct AQ_Observer_eventOnNotify_Parms
	{
		UObject* entity;
		EAQ_NotifyEventType eventType;
		float amount;
	};
	struct AQ_Observer_eventOnNotifyRequierment_Parms
	{
		EAQ_RequiermentEventType eventType;
		FAQ_RequiermentData requiermentData;
	};
	void IAQ_Observer::OnNotify(UObject* entity, EAQ_NotifyEventType eventType, float amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNotify instead.");
	}
	void IAQ_Observer::OnNotifyRequierment(EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNotifyRequierment instead.");
	}
	void UAQ_Observer::StaticRegisterNativesUAQ_Observer()
	{
		UClass* Class = UAQ_Observer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNotify", &IAQ_Observer::execOnNotify },
			{ "OnNotifyRequierment", &IAQ_Observer::execOnNotifyRequierment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Observer_eventOnNotify_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Observer_eventOnNotify_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(0, nullptr) }; // 2989188449
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Observer_eventOnNotify_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events | Observer" },
		{ "CPP_Default_amount", "1.000000" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Observer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Observer, nullptr, "OnNotify", nullptr, nullptr, Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::PropPointers), sizeof(AQ_Observer_eventOnNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_Observer_eventOnNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Observer_OnNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Observer_OnNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_requiermentData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Observer_eventOnNotifyRequierment_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_RequiermentEventType, METADATA_PARAMS(0, nullptr) }; // 3270438989
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_requiermentData = { "requiermentData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Observer_eventOnNotifyRequierment_Parms, requiermentData), Z_Construct_UScriptStruct_FAQ_RequiermentData, METADATA_PARAMS(0, nullptr) }; // 2724767121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::NewProp_requiermentData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events | Observer" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Observer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Observer, nullptr, "OnNotifyRequierment", nullptr, nullptr, Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::PropPointers), sizeof(AQ_Observer_eventOnNotifyRequierment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_Observer_eventOnNotifyRequierment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_Observer);
	UClass* Z_Construct_UClass_UAQ_Observer_NoRegister()
	{
		return UAQ_Observer::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_Observer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_Observer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Observer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_Observer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_Observer_OnNotify, "OnNotify" }, // 1169493199
		{ &Z_Construct_UFunction_UAQ_Observer_OnNotifyRequierment, "OnNotifyRequierment" }, // 697451588
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Observer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Observer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Observer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_Observer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAQ_Observer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_Observer_Statics::ClassParams = {
		&UAQ_Observer::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Observer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_Observer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_Observer()
	{
		if (!Z_Registration_Info_UClass_UAQ_Observer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_Observer.OuterSingleton, Z_Construct_UClass_UAQ_Observer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_Observer.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_Observer>()
	{
		return UAQ_Observer::StaticClass();
	}
	UAQ_Observer::UAQ_Observer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_Observer);
	UAQ_Observer::~UAQ_Observer() {}
	static FName NAME_UAQ_Observer_OnNotify = FName(TEXT("OnNotify"));
	void IAQ_Observer::Execute_OnNotify(UObject* O, UObject* entity, EAQ_NotifyEventType eventType, float amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()));
		AQ_Observer_eventOnNotify_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_Observer_OnNotify);
		if (Func)
		{
			Parms.entity=entity;
			Parms.eventType=eventType;
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_Observer*)(O->GetNativeInterfaceAddress(UAQ_Observer::StaticClass())))
		{
			I->OnNotify_Implementation(entity,eventType,amount);
		}
	}
	static FName NAME_UAQ_Observer_OnNotifyRequierment = FName(TEXT("OnNotifyRequierment"));
	void IAQ_Observer::Execute_OnNotifyRequierment(UObject* O, EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()));
		AQ_Observer_eventOnNotifyRequierment_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_Observer_OnNotifyRequierment);
		if (Func)
		{
			Parms.eventType=eventType;
			Parms.requiermentData=requiermentData;
			O->ProcessEvent(Func, &Parms);
			requiermentData=Parms.requiermentData;
		}
		else if (auto I = (IAQ_Observer*)(O->GetNativeInterfaceAddress(UAQ_Observer::StaticClass())))
		{
			I->OnNotifyRequierment_Implementation(eventType,requiermentData);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_Observer, UAQ_Observer::StaticClass, TEXT("UAQ_Observer"), &Z_Registration_Info_UClass_UAQ_Observer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_Observer), 3860254833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_1590508169(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
