// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlPlayer.h"

// Sets default values
AControlPlayer::AControlPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));

	//Initialize Mesh component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	

	// Initilize spring arm and camera component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(MeshComponent);
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void AControlPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControlPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AControlPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Bind axis events to koeyboard input
	PlayerInputComponent->BindAxis("MoveForward", this, &AControlPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AControlPlayer::MoveRight);
}

void AControlPlayer::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in the forward direction
		UE_LOG(LogTemp, Warning, TEXT("Moving forward with value: %f"), Value);
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AControlPlayer::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in the right direction
		UE_LOG(LogTemp, Warning, TEXT("Moving forward with value: %f"), Value);
		AddMovementInput(GetActorRightVector(), Value);
	}
}

