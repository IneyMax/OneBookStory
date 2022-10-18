// Fill out your copyright notice in the Description page of Project Settings.


#include "APPlayerCamera.h"

// Sets default values
AAPPlayerCamera::AAPPlayerCamera()
{
	PrimaryActorTick.bCanEverTick = true;
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

// Called to bind functionality to input
void AAPPlayerCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

