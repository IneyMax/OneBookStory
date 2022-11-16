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
	
	FOBSItemInfo(): Rank(0), WeaponCount(0)
	{
	}

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName Name;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Rank;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<ECreatureSpecie> Species;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<ECreatureFraction> Fraction;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FCreatureInfo CreatureInfo;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 WeaponCount;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FWeaponInfo WeaponInfo;
};



