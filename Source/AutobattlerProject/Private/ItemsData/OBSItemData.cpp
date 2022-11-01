// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemsData/OBSItemData.h"


FString UOBSItemData::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetType UOBSItemData::GetItemType() const
{
	return ItemType;
}

FOBSItemInfo UOBSItemData::GetItemInfo() const
{
	return ItemInfo;
}

FPrimaryAssetId UOBSItemData::GetPrimaryAssetId() const
{
	return Super::GetPrimaryAssetId();
}
