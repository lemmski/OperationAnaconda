// Fill out your copyright notice in the Description page of Project Settings.


#include "MyArtilleryActor.h"

// Sets default values
AMyArtilleryActor::AMyArtilleryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyArtilleryActor::BeginPlay()
{
	Super::BeginPlay();
	for (size_t i = 0; i < 10; i++)
	{
		FVector Location(15.0f, 15.0f, 15.0f);
		FRotator Rotation(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters SpawnInfo;
		GetWorld()->SpawnActor<AProj>(Location, Rotation, SpawnInfo);
	}
}

// Called every frame
void AMyArtilleryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

