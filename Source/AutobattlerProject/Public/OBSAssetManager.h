// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ItemsData/OBSItemData.h"
#include "OBSAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UOBSAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	// Constructor and overrides
	UOBSAssetManager() {}
	
	virtual void StartInitialLoading() override;

	/** Static types for items */
	static const FPrimaryAssetType	SpellItemType;
	static const FPrimaryAssetType	CreatureItemType;
	static const FPrimaryAssetType	WeaponItemType;

	/** Returns the current AssetManager object */
	static UOBSAssetManager& Get();

	/**
	 * Synchronously loads an RPGItem subclass, this can hitch but is useful when you cannot wait for an async load
	 * This does not maintain a reference to the item so it will garbage collect if not loaded some other way
	 *
	 * @param PrimaryAssetId The asset identifier to load
	 * @param bDisplayWarning If true, this will log a warning if the item failed to load
	 */
	UOBSItemData* ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning = true);
};
