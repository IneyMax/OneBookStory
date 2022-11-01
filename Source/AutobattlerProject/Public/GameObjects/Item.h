// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemsData/OBSItemInfo.h"
#include "UObject/Object.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class AUTOBATTLERPROJECT_API UItem : public UObject
{
	GENERATED_BODY()

	UItem(){}

public:
	/** User-visible short name */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FOBSItemInfo ItemInfo;

	/** User-visible short name */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<UItem*> Weapons;

	/** User-visible short name */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	EItemType ItemState;
};
