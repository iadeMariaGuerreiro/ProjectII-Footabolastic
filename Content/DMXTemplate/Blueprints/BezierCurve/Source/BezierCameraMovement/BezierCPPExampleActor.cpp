// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierCPPExampleActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "BFL_BezierCurve.h"

// Sets default values
ABezierCPPExampleActor::ABezierCPPExampleActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create The Hierarchy Of The Actor (Make A Child Blueprint Or Check The CPP Version Of The Actor) and attach them in a way that we can check
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatichMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);

	// Find The Static Cube
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cube(TEXT("/Engine/BasicShapes/Cube"));
	StaticMeshComponent->SetStaticMesh(	Cube.Object );

	P0 = CreateDefaultSubobject<USceneComponent>(TEXT("P0"));
	P1 = CreateDefaultSubobject<USceneComponent>(TEXT("P1"));
	P2 = CreateDefaultSubobject<USceneComponent>(TEXT("P2"));
	P3 = CreateDefaultSubobject<USceneComponent>(TEXT("P3"));

	P0->SetupAttachment(RootComponent);
	P1->SetupAttachment(RootComponent);
	P2->SetupAttachment(RootComponent);
	P3->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABezierCPPExampleActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABezierCPPExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Scale DeltaTime Depending How Long We Want It To Last
	float ScaledDeltaTime = UKismetMathLibrary::SafeDivide(DeltaTime, TransitionTime);
	
	//GEngine->AddOnScreenDebugMessage(0, 1.0f, FColor::Red, FString::SanitizeFloat(ScaledDeltaTime));

	// Wrap It, So It Cna Never Go Above One, We Could Clamp Instead To Keep It Between 0 and 1
	Timer = FMath::Wrap(Timer + ScaledDeltaTime, 0.0f, 1.0f);
	
	//GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Blue, FString::SanitizeFloat(Timer));

	FVector BezierLocation = UBFL_BezierCurve::SampleCubicBezierCurve(Timer, P0->GetRelativeLocation(), P1->GetRelativeLocation(), P2->GetRelativeLocation(), P3->GetRelativeLocation());

	StaticMeshComponent->SetRelativeLocation(BezierLocation);

	// Let's Draw If We Want To
	if (DrawDebugBezierLine)
	{
		UBFL_BezierCurve::DebugDrawCubicBezierCurve(20.0f, P0->GetRelativeLocation(), P1->GetRelativeLocation(), P2->GetRelativeLocation(), P3->GetRelativeLocation(), this);
	}
}

