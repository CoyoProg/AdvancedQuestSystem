// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObserverPattern/AQ_Subject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAQ_NotifyEventType : uint8;
#ifdef ADVANCEDQUEST_AQ_Subject_generated_h
#error "AQ_Subject.generated.h already included, missing '#pragma once' in AQ_Subject.h"
#endif
#define ADVANCEDQUEST_AQ_Subject_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyObservers_Implementation(UObject* entity, EAQ_NotifyEventType eventType, float amount) {}; \
	virtual void RemoveObserver_Implementation(UObject* observer) {}; \
	virtual void AddObserver_Implementation(UObject* observer) {}; \
 \
	DECLARE_FUNCTION(execNotifyObservers); \
	DECLARE_FUNCTION(execRemoveObserver); \
	DECLARE_FUNCTION(execAddObserver);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_CALLBACK_WRAPPERS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDQUEST_API UAQ_Subject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDQUEST_API UAQ_Subject(UAQ_Subject&&); \
	ADVANCEDQUEST_API UAQ_Subject(const UAQ_Subject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDQUEST_API, UAQ_Subject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_Subject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_Subject) \
	ADVANCEDQUEST_API virtual ~UAQ_Subject();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAQ_Subject(); \
	friend struct Z_Construct_UClass_UAQ_Subject_Statics; \
public: \
	DECLARE_CLASS(UAQ_Subject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), ADVANCEDQUEST_API) \
	DECLARE_SERIALIZER(UAQ_Subject)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAQ_Subject() {} \
public: \
	typedef UAQ_Subject UClassType; \
	typedef IAQ_Subject ThisClass; \
	static void Execute_AddObserver(UObject* O, UObject* observer); \
	static void Execute_NotifyObservers(UObject* O, UObject* entity, EAQ_NotifyEventType eventType, float amount); \
	static void Execute_RemoveObserver(UObject* O, UObject* observer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_12_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_CALLBACK_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_Subject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuest_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Subject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
