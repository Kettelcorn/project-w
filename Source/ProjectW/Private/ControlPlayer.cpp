// Fill out your copyright notice in the Description page of Project Settings.

#include "ControlPlayer.h"


// Sets default values
AControlPlayer::AControlPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create floating pawn movement component and set properties
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
	FloatingPawnMovement->MaxSpeed = 1000.0f;

	//Initialize Mesh component and set properties
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->BodyInstance.bLockXRotation = true;
	MeshComponent->BodyInstance.bLockYRotation = true;
	MeshComponent->BodyInstance.bLockZRotation = true;

	//Initialize collision box, attach to mesh component, and set properties
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(MeshComponent);
	BoxComponent->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	BoxComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -5.0f));

	// Set collision properties for box component
	BoxComponent->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	BoxComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Overlap);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AControlPlayer::OnBeginOverlap);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &AControlPlayer::OnEndOverlap);

	// Attack spring arm to mesh component and set properties
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(MeshComponent);
	SpringArm->TargetArmLength = 500.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	//Attach camera to spring arm and set properties for follow camera
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
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AControlPlayer::Jump);
}

// Increment the overlap counter when beginning overlap with ground component
void AControlPlayer::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag(TEXT("Ground")))
	{
		OverlapCounter++;
	}
}

// Increment the overlap counter when ending overlap with ground component
void AControlPlayer::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherComp->ComponentHasTag(TEXT("Ground")))
	{
		OverlapCounter--;
	}
}

// Check if the character is grounded
bool AControlPlayer::IsGrounded()
{
	return OverlapCounter > 0;
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

