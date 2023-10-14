// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreateAssets.generated.h"

class UFactory;
class UQuest;
/**
 * 
 */
UCLASS()
class DEMOREELRPG_API UCreateAssets : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	* Editor Only - Will not work in package build
	* 
	* Create an asset.
	* 
	* AssetPath					The path of where to create the asset
	* AssetClass				The class of the asset to create
	* AssetFactory				Optional. The factory to use to create the asset
	* bOutSucess				If the asset creation was a sucess or not
	* OutInfoMessage			More information about the action's result
	* 
	* return the created asset
	*/
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static UQuest* CreateQuestAsset(FString assetPath, bool& boutSuccess, FString& outInfoMessage);
};
