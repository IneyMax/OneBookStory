#pragma once

#include <AutobattlerProject/OBSEnums.h>
#include "OBSAbilityEffect.h"
#include "OBSAbility.generated.h"


USTRUCT(BlueprintType)
struct AUTOBATTLERPROJECT_API FOBSAbility
{
	GENERATED_BODY()
	
	/**  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	FText AbilityDescription;

	/** */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	TMap<ETriggerMoment, UOBSAbilityEffect*> AbilityEffects;
};



