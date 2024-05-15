// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Agent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Enemy.generated.h"


UCLASS()
class PROJECTW_API AEnemy : public AAgent
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	APawn* Player;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetMovementSpeed(float speed) override;
	virtual void MoveTowardsPlayer(float DeltaTime);

	void FindPlayer();
};
