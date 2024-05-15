// Fill out your copyright notice in the Description page of Project Settings.

#include "ControlPlayer.h"


// Sets default values
AControlPlayer::AControlPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	SetUpFollowCamera();
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
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AControlPlayer::Jump);
}

// Create camera to follow the player
void AControlPlayer::SetUpFollowCamera()
{
	// Attach spring arm to mesh component and set properties
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(MeshComponent);
	SpringArm->TargetArmLength = 500.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	// Attach camera to spring arm and set properties for follow camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

// Add movement in the forward direction
void AControlPlayer::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

// Add movement in the right direction
void AControlPlayer::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

// Makes chacacter jump if they are grounded
void AControlPlayer::Jump()
{
	if (IsGrounded())
	{
		const FVector JumpImpulse = FVector(0.f, 0.f, 1.f) * 50000.f;
		MeshComponent->AddImpulse(JumpImpulse);
	}
	
}

