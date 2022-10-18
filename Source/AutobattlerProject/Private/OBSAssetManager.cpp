// Fill out your copyright notice in the Description page of Project Settings.

#include "OBSAssetManager.h"

const FPrimaryAssetType	UOBSAssetManager::SpellItemType = TEXT("Spell");
const FPrimaryAssetType	UOBSAssetManager::CreatureItemType = TEXT("Creature");
const FPrimaryAssetType	UOBSAssetManager::WeaponItemType = TEXT("Weapon");

void UOBSAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
}

UOBSAssetManager& UOBSAssetManager::Get()
{
	UOBSAssetManager* This = Cast<UOBSAssetManager>(GEngine->AssetManager);

	if (This)
	{
		return *This;
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be RPGAssetManager!"));
		return *NewObject<UOBSAssetManager>(); // never calls this
	}
}

UOBSItem* UOBSAssetManager::ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	FSoftObjectPath ItemPath = GetPrimaryAssetPath(PrimaryAssetId);

	// This does a synchronous load and may hitch
	UOBSItem* LoadedItem = Cast<UOBSItem>(ItemPath.TryLoad());

	if (bLogWarning && LoadedItem == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load item for identifier %s!"), *PrimaryAssetId.ToString());
	}

	return LoadedItem;
}
