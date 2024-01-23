// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/ObserverPattern/AQ_Subject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_Subject() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Subject();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_Subject_NoRegister();
	ADVANCEDQUEST_API UEnum* Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(IAQ_Subject::execNotifyObservers)
	{
		P_GET_OBJECT(UObject,Z_Param_entity);
		P_GET_ENUM(EAQ_NotifyEventType,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyObservers_Implementation(Z_Param_entity,EAQ_NotifyEventType(Z_Param_eventType),Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_Subject::execRemoveObserver)
	{
		P_GET_OBJECT(UObject,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObserver_Implementation(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAQ_Subject::execAddObserver)
	{
		P_GET_OBJECT(UObject,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObserver_Implementation(Z_Param_observer);
		P_NATIVE_END;
	}
	struct AQ_Subject_eventAddObserver_Parms
	{
		UObject* observer;
	};
	struct AQ_Subject_eventNotifyObservers_Parms
	{
		UObject* entity;
		EAQ_NotifyEventType eventType;
		float amount;
	};
	struct AQ_Subject_eventRemoveObserver_Parms
	{
		UObject* observer;
	};
	void IAQ_Subject::AddObserver(UObject* observer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddObserver instead.");
	}
	void IAQ_Subject::NotifyObservers(UObject* entity, EAQ_NotifyEventType eventType, float amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyObservers instead.");
	}
	void IAQ_Subject::RemoveObserver(UObject* observer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveObserver instead.");
	}
	void UAQ_Subject::StaticRegisterNativesUAQ_Subject()
	{
		UClass* Class = UAQ_Subject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObserver", &IAQ_Subject::execAddObserver },
			{ "NotifyObservers", &IAQ_Subject::execNotifyObservers },
			{ "RemoveObserver", &IAQ_Subject::execRemoveObserver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Subject_eventAddObserver_Parms, observer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::NewProp_observer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events | Subject" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Subject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Subject, nullptr, "AddObserver", nullptr, nullptr, Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::PropPointers), sizeof(AQ_Subject_eventAddObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_Subject_eventAddObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Subject_AddObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Subject_AddObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Subject_eventNotifyObservers_Parms, entity), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Subject_eventNotifyObservers_Parms, eventType), Z_Construct_UEnum_AdvancedQuest_EAQ_NotifyEventType, METADATA_PARAMS(0, nullptr) }; // 2989188449
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Subject_eventNotifyObservers_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_eventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_eventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events | Subject" },
		{ "CPP_Default_amount", "1.000000" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Subject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Subject, nullptr, "NotifyObservers", nullptr, nullptr, Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::PropPointers), sizeof(AQ_Subject_eventNotifyObservers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_Subject_eventNotifyObservers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Subject_NotifyObservers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Subject_NotifyObservers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQ_Subject_eventRemoveObserver_Parms, observer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::NewProp_observer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Events | Subject" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Subject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_Subject, nullptr, "RemoveObserver", nullptr, nullptr, Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::PropPointers), sizeof(AQ_Subject_eventRemoveObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(AQ_Subject_eventRemoveObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAQ_Subject_RemoveObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_Subject_RemoveObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_Subject);
	UClass* Z_Construct_UClass_UAQ_Subject_NoRegister()
	{
		return UAQ_Subject::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_Subject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_Subject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Subject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_Subject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_Subject_AddObserver, "AddObserver" }, // 2188932318
		{ &Z_Construct_UFunction_UAQ_Subject_NotifyObservers, "NotifyObservers" }, // 2168412065
		{ &Z_Construct_UFunction_UAQ_Subject_RemoveObserver, "RemoveObserver" }, // 3058939105
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Subject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_Subject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObserverPattern/AQ_Subject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_Subject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAQ_Subject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_Subject_Statics::ClassParams = {
		&UAQ_Subject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_Subject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAQ_Subject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAQ_Subject()
	{
		if (!Z_Registration_Info_UClass_UAQ_Subject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_Subject.OuterSingleton, Z_Construct_UClass_UAQ_Subject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_Subject.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_Subject>()
	{
		return UAQ_Subject::StaticClass();
	}
	UAQ_Subject::UAQ_Subject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_Subject);
	UAQ_Subject::~UAQ_Subject() {}
	static FName NAME_UAQ_Subject_AddObserver = FName(TEXT("AddObserver"));
	void IAQ_Subject::Execute_AddObserver(UObject* O, UObject* observer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_Subject::StaticClass()));
		AQ_Subject_eventAddObserver_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_Subject_AddObserver);
		if (Func)
		{
			Parms.observer=observer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_Subject*)(O->GetNativeInterfaceAddress(UAQ_Subject::StaticClass())))
		{
			I->AddObserver_Implementation(observer);
		}
	}
	static FName NAME_UAQ_Subject_NotifyObservers = FName(TEXT("NotifyObservers"));
	void IAQ_Subject::Execute_NotifyObservers(UObject* O, UObject* entity, EAQ_NotifyEventType eventType, float amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_Subject::StaticClass()));
		AQ_Subject_eventNotifyObservers_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_Subject_NotifyObservers);
		if (Func)
		{
			Parms.entity=entity;
			Parms.eventType=eventType;
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_Subject*)(O->GetNativeInterfaceAddress(UAQ_Subject::StaticClass())))
		{
			I->NotifyObservers_Implementation(entity,eventType,amount);
		}
	}
	static FName NAME_UAQ_Subject_RemoveObserver = FName(TEXT("RemoveObserver"));
	void IAQ_Subject::Execute_RemoveObserver(UObject* O, UObject* observer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAQ_Subject::StaticClass()));
		AQ_Subject_eventRemoveObserver_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAQ_Subject_RemoveObserver);
		if (Func)
		{
			Parms.observer=observer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAQ_Subject*)(O->GetNativeInterfaceAddress(UAQ_Subject::StaticClass())))
		{
			I->RemoveObserver_Implementation(observer);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_Subject, UAQ_Subject::StaticClass, TEXT("UAQ_Subject"), &Z_Registration_Info_UClass_UAQ_Subject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_Subject), 3432869375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_2662986767(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
