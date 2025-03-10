// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnDeMonedas.h"
#include "Coin.h"
#include "Engine/World.h"

// Sets default values
ASpawnDeMonedas::ASpawnDeMonedas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASpawnDeMonedas::BeginPlay()
{
	Super::BeginPlay();
	
    if (CoinClass)
    {
        FVector SpawnLocation = GetActorLocation();
        for (int32 i = 0; i < NumeroDeMonedas; i++)
        {
            GetWorld()->SpawnActor<ACoin>(CoinClass, SpawnLocation, FRotator::ZeroRotator);
            SpawnLocation.X += DistanciaEntreMonedas;
        }
    }

}

// Called every frame


