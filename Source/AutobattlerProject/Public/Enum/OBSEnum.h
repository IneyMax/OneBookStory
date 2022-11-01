#pragma once

#include "OBSEnum.generated.h"


UENUM(BlueprintType)
enum class EItemType : uint8
{
	None UMETA(DisplayName = "None"),
	Creature UMETA(DisplayName = "Creature"),
	Weapon UMETA(DisplayName = "Weapon"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(EItemType, EItemType::Max)


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


UENUM(BlueprintType)
enum class ETriggerMoment : uint8
{
	None UMETA(DisplayName = "None"),
	Moment1 UMETA(DisplayName = "TestMoment1"),
	Moment2 UMETA(DisplayName = "TestMoment2"),
	Moment3 UMETA(DisplayName = "TestMoment3"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(ETriggerMoment, ETriggerMoment::Max)


UENUM(BlueprintType)
enum class EPlacementFront : uint8
{
	None UMETA(DisplayName = "None"),
	Front UMETA(DisplayName = "Front"),
	Back UMETA(DisplayName = "Back"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(EPlacementFront, EPlacementFront::Max)


UENUM(BlueprintType)
enum class ECreatureStats : uint8
{
	None UMETA(DisplayName = "None"),
	Attack UMETA(DisplayName = "Attack"),
	Health UMETA(DisplayName = "Health"),
	Max  UMETA ( Hidden )
};
ENUM_RANGE_BY_COUNT(ECreatureStats, ECreatureStats::Max)

