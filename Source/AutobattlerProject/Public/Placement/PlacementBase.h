// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlacementInfo.h"
#include "GameFramework/Actor.h"
#include "PlacementBase.generated.h"

UCLASS()
class AUTOBATTLERPROJECT_API APlacementBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlacementBase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Placement)
	FOBSPlacementInfo PlacementInfo;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
