// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "APPlayerCamera.generated.h"

UCLASS()
class AUTOBATTLERPROJECT_API AAPPlayerCamera : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPPlayerCamera();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="PlayerPawn")
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="PlayerPawn")
	const class UAPPlayerAttributeSet* PlayerAttributeSet;

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION(BlueprintImplementableEvent, Category="PlayerPawn")
	void OnHealthChange(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category="PlayerPawn")
	void OnLevelChange(float OldValue, float NewValue);
	
	UFUNCTION(BlueprintImplementableEvent, Category="PlayerPawn")
	void OnBalanceChange(float OldValue, float NewValue);

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnLevelChangedNative(const FOnAttributeChangeData& Data);
	void OnBalanceChangeNative(const FOnAttributeChangeData& Data);
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UFUNCTION(BlueprintCallable, Category="PlayerPawn")
	void AddAbility(TSubclassOf<UGameplayAbility> AbilityToGet);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category="PlayerPawn")
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintPure, Category="PlayerPawn")
	void GetHealthValues (float& Health, float& MaxHealth);

	UFUNCTION(BlueprintPure, Category="PlayerPawn")
	void GetLevelValues (float& Level, float& MaxLevel);

	UFUNCTION(BlueprintPure, Category="PlayerPawn")
	void GetBalanceValues (float& Balance);

	friend UAPPlayerAttributeSet;
};
 