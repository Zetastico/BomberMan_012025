// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "Components/StaticMeshComponent.h"
// esta inclusion sirve para poder utilizar la clase UGameplayStatics
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACoin::ACoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
	RootComponent = CoinMesh;


	CoinMesh->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnOverlap);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();

	//Guardamos la posici�n y rotaci�n inicial del objeto
	StartLocation = GetActorLocation();
	StartRotation = GetActorRotation();
	

}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += RotationSpeed * DeltaTime;
	SetActorRotation(NewRotation);

	float Time = GetGameTimeSinceCreation();
	FVector NewLocation = StartLocation + FVector(0, FMath::Sin(Time) * 50, 0);
	SetActorLocation(NewLocation);

}

void ACoin::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		Destroy();
	}
}

