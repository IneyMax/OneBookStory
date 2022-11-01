#pragma once


#include "OBSAbility.h"
#include "AutobattlerProject/OBSEnums.h"
#include "OBSItemInfo.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSItemInfo
{
	GENERATED_BODY()
	
	FOBSItemInfo(): IsValid(false), ItemUniqueIndex(0), Rank(0)
	{
	};

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	bool IsValid;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 ItemUniqueIndex;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName Name;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<ECreatureSpecies> Species;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	TArray<ECreatureFraction> Fraction;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Rank;
};



