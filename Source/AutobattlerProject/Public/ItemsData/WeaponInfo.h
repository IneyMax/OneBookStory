#pragma once
#include "OBSAbility.h"

#include "WeaponInfo.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FWeaponInfo
{
	GENERATED_BODY()
	
	FWeaponInfo(): IsValid(false)
	{
	}

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	bool IsValid;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName WeaponName;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<FOBSAbility> Abilities;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TMap<EBattleStats, int32> WeaponStats;
};