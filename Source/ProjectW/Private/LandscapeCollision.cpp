// Fill out your copyright notice in the Description page of Project Settings.

#include "LandscapeCollision.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"


ALandscapeCollision::ALandscapeCollision()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALandscapeCollision::BeginPlay()
{
	Super::BeginPlay();
	EnableOverlapEventsForLandscapeProxies();
}

void ALandscapeCollision::EnableOverlapEventsForLandscapeProxies()
{
	for (TActorIterator<ALandscapeStreamingProxy> It(GetWorld()); It; ++It)
	{
		ALandscapeStreamingProxy* FoundLandscape = *It;
		TArray<UPrimitiveComponent*> Components;
		FoundLandscape->GetComponents<UPrimitiveComponent>(Components);
		FoundLandscape->Tags.AddUnique(TEXT("Ground"));
		for (UPrimitiveComponent* Component : Components)
		{
			if (Component)
			{
				Component->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				Component->SetGenerateOverlapEvents(false);
				Component->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
				UE_LOG(LogTemp, Warning, TEXT("Generating Overlap"));
			}
		}
	}
}

