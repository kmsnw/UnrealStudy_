// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponenet.h"

#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AHealthComponenet::AHealthComponenet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AHealthComponenet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealthComponenet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthComponenet::LoseHealth(float Amount)
{
	Health -= Amount;

	if (Health <= 0.f)
	{
		Health = 0.f;

		UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit,true);
		
	}
}



