// Fill out your copyright notice in the Description page of Project Settings.


#include "APPlayerCamera.h"
#include "Abilities/Player/APPlayerAttributeSet.h"

// Sets default values
AAPPlayerCamera::AAPPlayerCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("UAbilitySystemComponent");
	
	PlayerAttributeSet = AbilitySystemComponent->GetSet<UAPPlayerAttributeSet>();
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributeSet->GetHealthAttribute()).AddUObject(this, &AAPPlayerCamera::OnHealthChangedNative);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributeSet->GetLevelAttribute()).AddUObject(this, &AAPPlayerCamera::OnLevelChangedNative);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributeSet->GetBalanceAttribute()).AddUObject(this, &AAPPlayerCamera::OnBalanceChangeNative);
}

// Called when the game starts or when spawned
void AAPPlayerCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPPlayerCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAPPlayerCamera::OnHealthChangedNative(const FOnAttributeChangeData& Data)
{
	OnHealthChange(Data.OldValue, Data.NewValue);
}

void AAPPlayerCamera::OnLevelChangedNative(const FOnAttributeChangeData& Data)
{
	OnLevelChange(Data.OldValue, Data.NewValue);
}

void AAPPlayerCamera::OnBalanceChangeNative(const FOnAttributeChangeData& Data)
{
	OnBalanceChange(Data.OldValue, Data.NewValue);
}

// Called to bind functionality to input
void AAPPlayerCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAPPlayerCamera::AddAbility(TSubclassOf<UGameplayAbility> AbilityToGet)
{
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}
	
	if (HasAuthority() && AbilityToGet)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet));
	}
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

UAbilitySystemComponent* AAPPlayerCamera::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAPPlayerCamera::GetHealthValues(float& Health, float& MaxHealth)
{
	Health = PlayerAttributeSet->GetHealth();
	MaxHealth = PlayerAttributeSet->GetMaxHealth();
}

void AAPPlayerCamera::GetLevelValues(float& Level, float& MaxLevel)
{
	Level = PlayerAttributeSet->GetLevel();
	MaxLevel = PlayerAttributeSet->GetMaxLevel();
}

void AAPPlayerCamera::GetBalanceValues(float& Balance)
{
	Balance = PlayerAttributeSet->GetBalance();
}

