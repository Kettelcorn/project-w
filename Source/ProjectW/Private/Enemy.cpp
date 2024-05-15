// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include <ControlPlayer.h>
#include "EngineUtils.h"

// Sets default values
AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMovementSpeed(20.0f);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	FindPlayer();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveTowardsPlayer(DeltaTime);
}

// Find the player in the world
void AEnemy::FindPlayer()
{
	for (TActorIterator<AControlPlayer> It(GetWorld()); It; ++It)
	{
		Player = *It;
	}
}

// Set the movement speed of the enemy
void AEnemy::SetMovementSpeed(const float speed)
{
	MovementSpeed = speed;
}

// Move the enemy towards the player
void AEnemy::MoveTowardsPlayer(const float DeltaTime)
{
	FVector Direction = (Player->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	FloatingPawnMovement->AddInputVector(Direction * MovementSpeed * DeltaTime);
}

