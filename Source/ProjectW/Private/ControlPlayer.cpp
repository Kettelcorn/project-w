// Fill out your copyright notice in the Description page of Project Settings.

#include "ControlPlayer.h"


// Sets default values
AControlPlayer::AControlPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
	FloatingPawnMovement->MaxSpeed = 1000.0f;


	//Initialize Mesh component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->BodyInstance.bLockXRotation = true;
	MeshComponent->BodyInstance.bLockYRotation = true;
	MeshComponent->BodyInstance.bLockZRotation = true;

	// Attempting to detect collision with the ground
	MeshComponent->SetNotifyRigidBodyCollision(true);
	MeshComponent->BodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Overlap);
	MeshComponent->SetGenerateOverlapEvents(true);
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AControlPlayer::OnBeginOverlap);
	MeshComponent->OnComponentEndOverlap.AddDynamic(this, &AControlPlayer::OnEndOverlap);
	MeshComponent->RecreatePhysicsState();

	// Initilize spring arm and camera component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(MeshComponent);
	SpringArm->TargetArmLength = 500.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	UE_LOG(LogTemp, Warning, TEXT("%s"), MeshComponent->BodyInstance.bLockXRotation ? TEXT("true") : TEXT("false"));
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
	UE_LOG(LogTemp, Warning, TEXT("LMAO %s"), TEXT("LMAO"));
}

// Called to bind functionality to input
void AControlPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Bind axis events to koeyboard input
	PlayerInputComponent->BindAxis("MoveForward", this, &AControlPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AControlPlayer::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AControlPlayer::Jump);
}

void AControlPlayer::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Touching the ground"));
	if (OtherComp->ComponentHasTag(FName("Ground")))
	{
		// Logic when touching the ground
		UE_LOG(LogTemp, Warning, TEXT("Touching the ground"));
	}
}

void AControlPlayer::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Leaving the ground"));
	if (OtherComp->ComponentHasTag(FName("Ground")))
	{
		// Logic when leaving the ground
		UE_LOG(LogTemp, Warning, TEXT("Leaving the ground"));
	}
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

void AControlPlayer::Jump()
{
	const FVector JumpImpulse = FVector(0.f, 0.f, 1.f) * 50000.f;
	MeshComponent->AddImpulse(JumpImpulse);
}

