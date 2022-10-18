// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSAssetManager.h"
#include "ItemsData/OBSItem.h"
#include "OBSItemWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UOBSItemWeapon : public UOBSItem
{
	GENERATED_BODY()

	UOBSItemWeapon()
	{
		ItemType = UOBSAssetManager::WeaponItemType;
	}
};
