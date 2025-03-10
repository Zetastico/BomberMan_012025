// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class BOMBERMAN_012025_API ACoin : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Esto hace que la variable sea visible en el editor
	UPROPERTY(VisibleAnywhere)
	//Esto hace que la variable sea privada
	UStaticMeshComponent* CoinMesh;

	//Esto hace que la variable sea visible en el editor
	UPROPERTY(EditAnywhere)
	
	float RotationSpeed = 100.0f;


	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	//Estas variables se utilizan para guardar la posición y rotación inicial del objeto
	FRotator StartRotation;
	FVector StartLocation;
};
