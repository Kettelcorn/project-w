
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
	AGroundCollision();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void EnableOverlapEvents();

};
