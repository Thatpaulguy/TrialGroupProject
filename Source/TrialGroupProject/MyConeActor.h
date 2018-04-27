// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyConeActor.generated.h"

UCLASS()
class TRIALGROUPPROJECT_API AMyConeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyConeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere)
		float xMovement;

	UPROPERTY(EditAnywhere)
		float myMag;

	float RunningTime;
	//fload runningJustintime=0.0;
	//here is the source
	
};
