// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthComponenet.generated.h"

UCLASS()
class DODGEBALL_API AHealthComponenet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthComponenet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = Health)
	float Health = 100.f;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LoseHealth(float Amount);
	

};
