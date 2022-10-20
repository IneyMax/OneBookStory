// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSAssetManager.h"
#include "ItemsData/OBSItem.h"
#include "OBSItemCreature.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UOBSItemCreature : public UOBSItem
{
	GENERATED_BODY()

	UOBSItemCreature()
	{
		ItemType = UOBSAssetManager::SpellItemType;
	}

public:
	
};
