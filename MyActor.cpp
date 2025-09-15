// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
// Sets default values

AMyActor::AMyActor()
{
	
	X = 0;
	Y = 0;
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 10; i++) 
	{
		Move();
		UE_LOG(LogTemp, Display, TEXT("Step %d: (%d,%d)"), i + 1, X, Y);
    }
}

int AMyActor::Step()
{
	return FMath::RandRange(-1, 1);
}

void AMyActor::Move()
{

	int stepX = Step();
	int stepY = Step();
	if (FMath::Abs(X + stepX) <= 2)
		X += stepX;

	if (FMath::Abs(Y + stepY) <= 2)
		Y += stepY;

}



