#pragma once

#include "AutobattlerProject/OBSEnums.h"
#include "PlacementInfo.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSPlacementInfo
{
	GENERATED_BODY()
	
	FOBSPlacementInfo(): PlacementFront(), Index(0), bIsEmpty(false), bIsPlayer(false)
	{
	}

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	EPlacementFront PlacementFront;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	int32 Index;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	bool bIsEmpty;

	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	bool bIsPlayer;
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	TArray<int32> Neighbours;
};
