// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnDeMonedas.h"
#include "Coin.h"
//Esta inclusion "Engine/World.h" nos permite utilizar la clase UWorld
//Nos permite obtener informacion del mundo y de los actores
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
	//Si la clase de la moneda no es nula
	//Osea si se selecciono una clase de moneda en el editor
    if (CoinClass)
    {
		//Obtenemos la posicion del Spawn cuando lo colocamos en el nivel
        FVector SpawnLocation = GetActorLocation();
		//Creamos un bucle que se repite la cantidad de monedas que queremos spawnear
        for (int32 i = 0; i < NumeroDeMonedas; i++)
        {
			//Creamos una moneda en la posicion actual
			//El GetWorld() nos permite obtener el mundo actual
			//El SpawnActor nos permite crear un actor en el mundo
			//El primer parametro es la clase del actor que queremos crear
			//El segundo parametro es la posicion en la que queremos crear el actor
			//El tercer parametro es la rotacion del actor
            GetWorld()->SpawnActor<ACoin>(CoinClass, SpawnLocation, FRotator::ZeroRotator);
			//Aumentamos la posicion en X para que la proxima moneda se cree a una distancia de DistanciaEntreMonedas
            SpawnLocation.X += DistanciaEntreMonedas;
        }
    }

}

// Called every frame


