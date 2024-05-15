
#pragma once

#include "CoreMinimal.h"
#include "Agent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/BoxComponent.h"
#include "ControlPlayer.generated.h"

UCLASS()
class PROJECTW_API AControlPlayer : public AAgent
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AControlPlayer();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input");
	float FowardInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input");
	float RightInput;

	virtual void BeginPlay() override;


public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ProcessPlayerInput(float DeltaTime);
	void SetUpFollowCamera();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Jump();

};
