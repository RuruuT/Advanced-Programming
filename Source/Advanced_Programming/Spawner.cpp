// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();

    if (ActorToSpawn)
    {
        FVector Location(0.f, 0.f, 200.f);
        FRotator Rotation = FRotator::ZeroRotator;

        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        GetWorld()->SpawnActor<AActor>(ActorToSpawn, Location, Rotation, SpawnParams);
    }
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

