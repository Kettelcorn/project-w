// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundCollision.h"
#include "EngineUtils.h"

// Sets default values
AGroundCollision::AGroundCollision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGroundCollision::BeginPlay()
{
	Super::BeginPlay();
	EnableOverlapEvents();
	
}

// Called every frame
void AGroundCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Set all landscape proxies to have their primitive component generate overlap events
void AGroundCollision::EnableOverlapEvents()
{
	for (TActorIterator<ALandscapeStreamingProxy> It(GetWorld()); It; ++It)
	{
		ALandscapeStreamingProxy* FoundLandscape = *It;
		TArray<UPrimitiveComponent*> Components;
		FoundLandscape->GetComponents<UPrimitiveComponent>(Components);
		for (UPrimitiveComponent* Component : Components)
		{
			if (Component)
			{
				Component->ComponentTags.Add(TEXT("Ground"));
				Component->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				Component->SetGenerateOverlapEvents(true);
				Component->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
				Component->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Overlap);
			}
		}
	}
}

