// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "APPlayerAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROJECT_API UAPPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UAPPlayerAttributeSet();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAttribute")
	FGameplayAttributeData Level;
	ATTRIBUTE_ACCESSORS(UAPPlayerAttributeSet, Level)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAttribute")
	FGameplayAttributeData MaxLevel;
	ATTRIBUTE_ACCESSORS(UAPPlayerAttributeSet, MaxLevel)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAttribute")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAPPlayerAttributeSet, Health)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAttribute")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAPPlayerAttributeSet, MaxHealth)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerAttribute")
	FGameplayAttributeData Balance;
	ATTRIBUTE_ACCESSORS(UAPPlayerAttributeSet, Balance)

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
};
