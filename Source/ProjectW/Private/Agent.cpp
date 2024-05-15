
#include "Agent.h"

// Sets default values
AAgent::AAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetUpPawnMovement();
	AddMeshComponent();
	SetUpBoxComponent();
	SetMovementSpeed(20.0f);
}

// Called when the game starts or when spawned
void AAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Add movement component to this pawn
void AAgent::SetUpPawnMovement()
{
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
	FloatingPawnMovement->MaxSpeed = 1000.0f;
}

// Add mesh component to this pawn
void AAgent::AddMeshComponent()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere'")).Object);
	MeshComponent->SetSimulatePhysics(true);

	// Lock rotation of mesh component
	MeshComponent->BodyInstance.bLockXRotation = true;
	MeshComponent->BodyInstance.bLockYRotation = true;
	MeshComponent->BodyInstance.bLockZRotation = true;
}

// Add box component to this pawn
void AAgent::SetUpBoxComponent()
{
	// Create box component and set properties
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(MeshComponent);
	BoxComponent->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	BoxComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -5.0f));

	// Set box component to generate overlap events
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	BoxComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Overlap);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AAgent::OnBeginOverlap);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &AAgent::OnEndOverlap);
}

// Set the movement speed of this pawn
void AAgent::SetMovementSpeed(float speed)
{
	MovementSpeed = speed;
}

// Get the movement speed of this pawn
int AAgent::GetMovementSpeed()
{
	return MovementSpeed;
}

// Called when this pawn overlaps with another actor
void AAgent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag(TEXT("Ground")))
	{
		OverlapCounter++;
	}
}

// Called when this pawn stops overlapping with another actor
void AAgent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherComp->ComponentHasTag(TEXT("Ground")))
	{
		OverlapCounter--;
	}
}

// Check if this pawn is grounded
bool AAgent::IsGrounded()
{
	return OverlapCounter > 0;
}

