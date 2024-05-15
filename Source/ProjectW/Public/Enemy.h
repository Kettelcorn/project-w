
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
	AEnemy();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	APawn* Player;

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void MoveTowardsPlayer(float DeltaTime);

	void FindPlayer();
};
