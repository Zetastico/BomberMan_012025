// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "Components/StaticMeshComponent.h"
//Esta inclusion "GameFramework/Actor.h" nos permite utilizar la clase AActor
//Que es la clase base de todos los actores en Unreal Engine
#include "GameFramework/Actor.h"
// esta inclusion sirve para poder utilizar la clase UGameplayStatics
//Que nos ayudara a obtener informaci�n del mundo y de los actores
#include "Kismet/GameplayStatics.h"


// Sets default values
ACoin::ACoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creamos un componente de tipo StaticMeshComponent
	//Que nos ayudara a visualizar el objeto en el mundo
	CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
	//EL RootComponent es el componente que se utilizara como raiz del objeto
	//Eso significa que si el objeto se mueve, el RootComponent se movera con el
	RootComponent = CoinMesh;

	//Cargamos un mesh de un archivo estatico
	CoinMesh->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnOverlap);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();

	//Guardamos la posicion y rotacion inicial del objeto
	StartLocation = GetActorLocation();
	StartRotation = GetActorRotation();
	

}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotamos el objeto en el eje Y
	FRotator NewRotation = GetActorRotation();
	//La rotacion se hace en grados y se multiplica por el tiempo que ha pasado desde el ultimo frame
	//Para que la rotacion sea constante sin importar la velocidad del juego
	//Por ejemplo si va a 30fps o a 60fps
	NewRotation.Yaw += RotationSpeed * DeltaTime;
	//Aplicamos la rotacion al objeto
	SetActorRotation(NewRotation);

	//Obtenemos el tiempo que ha pasado desde que se creo el objeto
	float Time = GetGameTimeSinceCreation();
	//Movemos el objeto en el eje Y
	//La funcion FMath::Sin nos da un valor entre -1 y 1
	FVector NewLocation = StartLocation + FVector(0, FMath::Sin(Time) * 50, 0);
	SetActorLocation(NewLocation);

}

//Funcion que se llama cuando el objeto colisiona con otro
//EN DESARROLLO
void ACoin::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		Destroy();
	}
}

