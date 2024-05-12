// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Landscape.h"
#include "LandscapeProxy.h"
#include "LandscapeStreamingProxy.h"
#include "Components/PrimitiveComponent.h"
#include "LandscapeCollision.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTW_API ALandscapeCollision : public AGameModeBase
{
	GENERATED_BODY()

public:

	ALandscapeCollision();

protected:

	virtual void BeginPlay() override;

public:

	void EnableOverlapEventsForLandscapeProxies();
	
};
