#pragma once


#include "CreatureInfo.h"
#include "WeaponInfo.h"
#include "AutobattlerProject/OBSEnums.h"
#include "OBSItemInfo.generated.h"

/** Test */
USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSItemInfo
{
	GENERATED_BODY()
	
	FOBSItemInfo(): Rank(0)
	{
	}

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Rank;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<ESpecie> Species;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<EFraction> Fraction;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FCreatureInfo CreatureInfo;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FWeaponInfo WeaponInfo;
};



