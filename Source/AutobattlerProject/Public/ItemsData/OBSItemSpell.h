// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSAssetManager.h"
#include "ItemsData/OBSItem.h"
#include "OBSItemSpell.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UOBSItemSpell : public UOBSItem
{
	GENERATED_BODY()

	UOBSItemSpell()
	{
		ItemType = UOBSAssetManager::SpellItemType;
	}
};
