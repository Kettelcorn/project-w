
#include "Enemy.h"
#include <ControlPlayer.h>
#include "EngineUtils.h"

// Sets default values
AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
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

// Move the enemy towards the player
void AEnemy::MoveTowardsPlayer(const float DeltaTime)
{
	FVector Direction = FVector(Player->GetActorLocation().X - GetActorLocation().X,
								Player->GetActorLocation().Y - GetActorLocation().Y,
								0.0f).GetSafeNormal();
	FloatingPawnMovement->AddInputVector(Direction * MovementSpeed * DeltaTime);
}

