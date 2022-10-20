// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemsData/OBSItem.h"


FString UOBSItem::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetType UOBSItem::GetItemType() const
{
	return ItemType;
}

FOBSItemInfo UOBSItem::GetItemInfo() const
{
	return ItemInfo;
}

FPrimaryAssetId UOBSItem::GetPrimaryAssetId() const
{
	return Super::GetPrimaryAssetId();
}
