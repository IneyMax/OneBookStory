#pragma once

#include "OBSEnums.generated.h"


UENUM(BlueprintType)
enum class ECreatureSpecies : uint8
{
	None UMETA(DisplayName = "None"),
	Species1 UMETA(DisplayName = "Species1"),
	Species2 UMETA(DisplayName = "Species2"),
	Species3 UMETA(DisplayName = "Species3"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(ECreatureSpecies, ECreatureSpecies::Max)


UENUM(BlueprintType)
enum class ECreatureFraction : uint8
{
	None UMETA(DisplayName = "None"),
	Fraction1 UMETA(DisplayName = "Fraction1"),
	Fraction2 UMETA(DisplayName = "Fraction2"),
	Fraction3 UMETA(DisplayName = "Fraction3"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(ECreatureFraction, ECreatureFraction::Max)