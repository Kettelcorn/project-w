// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LandscapeStreamingProxy.h"
#include "Components/PrimitiveComponent.h"
#include "GroundCollision.generated.h"

UCLASS()
class PROJECTW_API AGroundCollision : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGroundCollision();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EnableOverlapEvents();

};
