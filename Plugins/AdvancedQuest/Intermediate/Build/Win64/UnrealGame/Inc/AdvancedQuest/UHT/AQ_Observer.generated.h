// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObserverPattern/AQ_Observer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAQ_NotifyEventType : uint8;
enum class EAQ_RequiermentEventType : uint8;
struct FAQ_RequiermentData;
#ifdef ADVANCEDQUEST_AQ_Observer_generated_h
#error "AQ_Observer.generated.h already included, missing '#pragma once' in AQ_Observer.h"
#endif
#define ADVANCEDQUEST_AQ_Observer_generated_h

#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_SPARSE_DATA
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnNotifyRequierment_Implementation(EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData) {}; \
	virtual void OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventType, float amount) {}; \
 \
	DECLARE_FUNCTION(execOnNotifyRequierment); \
	DECLARE_FUNCTION(execOnNotify);


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_ACCESSORS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_CALLBACK_WRAPPERS
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDQUEST_API UAQ_Observer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDQUEST_API UAQ_Observer(UAQ_Observer&&); \
	ADVANCEDQUEST_API UAQ_Observer(const UAQ_Observer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDQUEST_API, UAQ_Observer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAQ_Observer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAQ_Observer) \
	ADVANCEDQUEST_API virtual ~UAQ_Observer();


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAQ_Observer(); \
	friend struct Z_Construct_UClass_UAQ_Observer_Statics; \
public: \
	DECLARE_CLASS(UAQ_Observer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedQuest"), ADVANCEDQUEST_API) \
	DECLARE_SERIALIZER(UAQ_Observer)


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAQ_Observer() {} \
public: \
	typedef UAQ_Observer UClassType; \
	typedef IAQ_Observer ThisClass; \
	static void Execute_OnNotify(UObject* O, UObject* entity, EAQ_NotifyEventType eventType, float amount); \
	static void Execute_OnNotifyRequierment(UObject* O, EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_13_PROLOG
#define FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_SPARSE_DATA \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_ACCESSORS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_CALLBACK_WRAPPERS \
	FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDQUEST_API UClass* StaticClass<class UAQ_Observer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cpaya_Documents_ArtFx_Unreal_AdvancedQuestDemo_Plugins_AdvancedQuest_Source_AdvancedQuest_Public_ObserverPattern_AQ_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
