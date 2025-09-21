// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "DodgeballProjectile.h"
#include "LookAtActorComponent.h"
#include "EnemyCharacter.generated.h"


UCLASS()
class DODGEBALL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LookAt, meta = (AllowPrivateAccess = "true"))
	ULookAtActorComponent* LookAtActorComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Dodgeball)
	TSubclassOf<class ADodgeballProjectile> DodgeballClass;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// 적 캐리겉가 이번 프레임에 플레이어를 볼 수 있는가
	bool bCanSeePlayer = false;
	//적 캐릭터가 이전 프레임에 플레이어를 볼 수 있었는가
	bool bPreviousCanSeePlayer = false;

	FTimerHandle ThrowTimerHandle;
	float ThrowingInterval = 2.f;
	float ThrowingDelay = 0.5f;

	void ThrowDodgeball();

	FTransform SpawnTransform;
	ADodgeballProjectile* Projectile;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};



