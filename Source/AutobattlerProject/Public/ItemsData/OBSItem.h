// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OBSItem.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UOBSItem : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** Constructor */
	UOBSItem(){}

	/** Type of this item, set in native parent class */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, BlueprintGetter = GetItemType, Category = Item)
	FPrimaryAssetType ItemType;

	/** User-visible short name */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	FText ItemName;

	/** User-visible long description */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	FText ItemDescription;

	/** Unique tag */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	FName UniqueTag;

	/** Returns the logical name, equivalent to the primary asset id */
	UFUNCTION(BlueprintCallable, Category = Item)
	FString GetIdentifierString() const;

	/** Returns the logical name, equivalent to the primary asset id */
	UFUNCTION(BlueprintGetter, Category = Item)
	FPrimaryAssetType GetItemType() const;

	/** Overridden to use saved type */
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
