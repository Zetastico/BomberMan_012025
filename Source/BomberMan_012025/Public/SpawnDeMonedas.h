// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnDeMonedas.generated.h"

UCLASS()
class BOMBERMAN_012025_API ASpawnDeMonedas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnDeMonedas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	UPROPERTY(EditAnywhere, Category = "Spawn")
	TSubclassOf<class ACoin> CoinClass;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	int32 NumeroDeMonedas = 5;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	float DistanciaEntreMonedas = 100.0f;
};
