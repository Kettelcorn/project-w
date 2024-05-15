// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/FloatingPawnMovement.h>
#include <Components/BoxComponent.h>
#include "Agent.generated.h"

UCLASS()
class PROJECTW_API AAgent : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAgent();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Body")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Jump")
	UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Test")
	int OverlapCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	bool IsGrounded();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void SetUpPawnMovement();
	virtual void AddMeshComponent();
	virtual void SetUpBoxComponent();
	virtual void SetMovementSpeed(float speed);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
