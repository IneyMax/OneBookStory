#pragma once


#include "AutobattlerProject/OBSEnums.h"
#include "OBSItemInfo.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSItemInfo
{
	GENERATED_BODY()
	
	FOBSItemInfo(): Species(ECreatureSpecies::None), Fraction(ECreatureFraction::None), Rank(0)
	{
	};

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	ECreatureSpecies Species;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	ECreatureFraction Fraction;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Rank;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName Name;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FText Description;
};


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSCreatureInfo
{
	GENERATED_BODY()
	
	FOBSCreatureInfo(): Initiative(0), Attack(0), Health(0)
	{
	};
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Initiative;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	int32 Health;
};



