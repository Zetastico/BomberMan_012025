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
	//El UPORPERTY nos permite modificar las variables en el editor
	//Son muy utiles para modificar variables sin tener que recompilar el proyecto
	UPROPERTY(EditAnywhere, Category = "Spawn")
	//TSubclassOf nos permite seleccionar una clase de la cual se creara un objeto
	TSubclassOf<class ACoin> CoinClass;

	//Cantidad de monedas a spawnear 
	//Se puede modificar en el editor y aqui
	UPROPERTY(EditAnywhere, Category = "Spawn")
	int32 NumeroDeMonedas = 5;

	//Distancia entre monedas
	UPROPERTY(EditAnywhere, Category = "Spawn")
	float DistanciaEntreMonedas = 100.0f;
};
