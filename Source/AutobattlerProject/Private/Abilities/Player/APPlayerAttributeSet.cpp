
#include "Abilities/Player/APPlayerAttributeSet.h"
#include "GameplayEffectExtension.h"


UAPPlayerAttributeSet::UAPPlayerAttributeSet()
: Level (1.0f)
, MaxLevel(6)
, Health(1.0f)
, MaxHealth(3.0f)
, Balance (0.0f)
{
}


void UAPPlayerAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	
	if (Data.EvaluatedData.Attribute == GetLevelAttribute())
	{
		SetLevel(FMath::Clamp(GetLevel(), 0.0f, GetMaxLevel()));
	}
	
	if (Data.EvaluatedData.Attribute == GetBalanceAttribute())
	{
		SetHealth(GetBalance());
	}
}
