// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BezierCPPExampleActor.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class BEZIERCAMERAMOVEMENT_API ABezierCPPExampleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABezierCPPExampleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private: // Called every frame

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* StaticMeshComponent = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components",meta = (AllowPrivateAccess = true))
	USceneComponent* P0 = nullptr;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	USceneComponent* P1 = nullptr;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	USceneComponent* P2 = nullptr;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	USceneComponent* P3 = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TransitionTimer", meta = (AllowPrivateAccess = true))
	float TransitionTime = 1.0f;
	UPROPERTY(meta = (AllowPrivateAccess = true))
	float Timer = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DebugDraw", meta = (AllowPrivateAccess = true))
	bool DrawDebugBezierLine = false;

};
