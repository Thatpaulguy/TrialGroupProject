// Fill out your copyright notice in the Description page of Project Settings.

#include "MyConeActor.h"


// Sets default values
AMyConeActor::AMyConeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	myMag = 0.0f;
	xMovement = 1.2f;

}

// Called when the game starts or when spawned
void AMyConeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyConeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.X += xMovement * DeltaHeight;
	NewLocation.Z += DeltaHeight * myMag;       //Scale our height by a factor of 20
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}

