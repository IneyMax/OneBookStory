#pragma once
#include "OBSAbility.h"
#include "Enum/OBSEnum.h"

#include "CreatureInfo.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FCreatureInfo
{
	GENERATED_BODY()
	
	FCreatureInfo(): IsValid(false), WeaponCount(0)
	{
	}

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	bool IsValid;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName CreatureName;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<FOBSAbility> Abilities;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TMap<EBattleStats, int32> CreatureStats;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 WeaponCount;
};