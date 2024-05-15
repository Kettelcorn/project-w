// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicEnemy.h"
#include <ControlPlayer.h>
#include "EngineUtils.h"

// Sets default values
ABasicEnemy::ABasicEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere'")).Object);
	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->BodyInstance.bLockXRotation = true;
	MeshComponent->BodyInstance.bLockYRotation = true;
	MeshComponent->BodyInstance.bLockZRotation = true;
	MovementSpeed = 20.0f;
}

// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<AControlPlayer> It(GetWorld()); It; ++It)
	{
		Player = *It;
	}
}

// Called every frame
void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveTowardsPlayer(DeltaTime);
}

void ABasicEnemy::MoveTowardsPlayer(const float DeltaTime)
{
	FVector Direction = (Player->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	FloatingPawnMovement->AddInputVector(Direction * MovementSpeed * DeltaTime);
}

