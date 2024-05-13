// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedQuest/Public/Tools/AQ_CreateAssets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAQ_CreateAssets() {}
// Cross Module References
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_CreateAssets();
	ADVANCEDQUEST_API UClass* Z_Construct_UClass_UAQ_CreateAssets_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AdvancedQuest();
// End Cross Module References
	DEFINE_FUNCTION(UAQ_CreateAssets::execSavePackage)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAQ_CreateAssets::SavePackage(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_CreateAssets::execUpdateActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAQ_CreateAssets::UpdateActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_CreateAssets::execShowFormattedDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAQ_CreateAssets::ShowFormattedDialog(Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_CreateAssets::execRemoveComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
		P_GET_OBJECT(AActor,Z_Param_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAQ_CreateAssets::RemoveComponent(Z_Param_ActorComponent,Z_Param_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_CreateAssets::execAddComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UAQ_CreateAssets::AddComponent(Z_Param_ComponentClass,Z_Param_Actor,Z_Param_ParentComponent,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAQ_CreateAssets::execAssignUniqueID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAQ_CreateAssets::AssignUniqueID(Z_Param_valueName);
		P_NATIVE_END;
	}
	void UAQ_CreateAssets::StaticRegisterNativesUAQ_CreateAssets()
	{
		UClass* Class = UAQ_CreateAssets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponent", &UAQ_CreateAssets::execAddComponent },
			{ "AssignUniqueID", &UAQ_CreateAssets::execAssignUniqueID },
			{ "RemoveComponent", &UAQ_CreateAssets::execRemoveComponent },
			{ "SavePackage", &UAQ_CreateAssets::execSavePackage },
			{ "ShowFormattedDialog", &UAQ_CreateAssets::execShowFormattedDialog },
			{ "UpdateActor", &UAQ_CreateAssets::execUpdateActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics
	{
		struct AQ_CreateAssets_eventAddComponent_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			AActor* Actor;
			USceneComponent* ParentComponent;
			FName Name;
			UActorComponent* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAddComponent_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAddComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAddComponent_Parms, ParentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ParentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ParentComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAddComponent_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAddComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ParentComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "AddComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::AQ_CreateAssets_eventAddComponent_Parms), Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_AddComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_AddComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics
	{
		struct AQ_CreateAssets_eventAssignUniqueID_Parms
		{
			FString valueName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_valueName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_valueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAssignUniqueID_Parms, valueName), METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_valueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_valueName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventAssignUniqueID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_valueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "AssignUniqueID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::AQ_CreateAssets_eventAssignUniqueID_Parms), Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics
	{
		struct AQ_CreateAssets_eventRemoveComponent_Parms
		{
			UActorComponent* ActorComponent;
			AActor* Actors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventRemoveComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_ActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_ActorComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventRemoveComponent_Parms, Actors), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_ActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Component" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "RemoveComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::AQ_CreateAssets_eventRemoveComponent_Parms), Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics
	{
		struct AQ_CreateAssets_eventSavePackage_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventSavePackage_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Debug" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "SavePackage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::AQ_CreateAssets_eventSavePackage_Parms), Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_SavePackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_SavePackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics
	{
		struct AQ_CreateAssets_eventShowFormattedDialog_Parms
		{
			FString InFileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventShowFormattedDialog_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::NewProp_InFileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::NewProp_InFileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Debug" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "ShowFormattedDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::AQ_CreateAssets_eventShowFormattedDialog_Parms), Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics
	{
		struct AQ_CreateAssets_eventUpdateActor_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQ_CreateAssets_eventUpdateActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Quest | Debug" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAQ_CreateAssets, nullptr, "UpdateActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::AQ_CreateAssets_eventUpdateActor_Parms), Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAQ_CreateAssets);
	UClass* Z_Construct_UClass_UAQ_CreateAssets_NoRegister()
	{
		return UAQ_CreateAssets::StaticClass();
	}
	struct Z_Construct_UClass_UAQ_CreateAssets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAQ_CreateAssets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedQuest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAQ_CreateAssets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAQ_CreateAssets_AddComponent, "AddComponent" }, // 3996875271
		{ &Z_Construct_UFunction_UAQ_CreateAssets_AssignUniqueID, "AssignUniqueID" }, // 1321023333
		{ &Z_Construct_UFunction_UAQ_CreateAssets_RemoveComponent, "RemoveComponent" }, // 2798314273
		{ &Z_Construct_UFunction_UAQ_CreateAssets_SavePackage, "SavePackage" }, // 361034614
		{ &Z_Construct_UFunction_UAQ_CreateAssets_ShowFormattedDialog, "ShowFormattedDialog" }, // 2923118277
		{ &Z_Construct_UFunction_UAQ_CreateAssets_UpdateActor, "UpdateActor" }, // 3103038127
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAQ_CreateAssets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tools/AQ_CreateAssets.h" },
		{ "ModuleRelativePath", "Public/Tools/AQ_CreateAssets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAQ_CreateAssets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAQ_CreateAssets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAQ_CreateAssets_Statics::ClassParams = {
		&UAQ_CreateAssets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAQ_CreateAssets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAQ_CreateAssets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAQ_CreateAssets()
	{
		if (!Z_Registration_Info_UClass_UAQ_CreateAssets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAQ_CreateAssets.OuterSingleton, Z_Construct_UClass_UAQ_CreateAssets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAQ_CreateAssets.OuterSingleton;
	}
	template<> ADVANCEDQUEST_API UClass* StaticClass<UAQ_CreateAssets>()
	{
		return UAQ_CreateAssets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAQ_CreateAssets);
	UAQ_CreateAssets::~UAQ_CreateAssets() {}
	struct Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Tools_AQ_CreateAssets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Tools_AQ_CreateAssets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAQ_CreateAssets, UAQ_CreateAssets::StaticClass, TEXT("UAQ_CreateAssets"), &Z_Registration_Info_UClass_UAQ_CreateAssets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAQ_CreateAssets), 2431583830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Tools_AQ_CreateAssets_h_896601415(TEXT("/Script/AdvancedQuest"),
		Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Tools_AQ_CreateAssets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QuestPlugin_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_Tools_AQ_CreateAssets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
