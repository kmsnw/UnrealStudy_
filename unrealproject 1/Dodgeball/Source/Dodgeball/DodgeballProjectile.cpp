// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballProjectile.h"
#include "DodgeballCharacter.h"
#include "DataWrappers/ChaosVDCollisionDataWrappers.h"
#include "HealthComponent.h"

// Sets default values
ADodgeballProjectile::ADodgeballProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereComponent->SetSphereRadius(35.f);
	SphereComponent->SetCollisionProfileName(FName("Dodgeball"));
	SphereComponent->SetSimulatePhysics(true);
	SphereComponent->SetNotifyRigidBodyCollision(true);

	SphereComponent->OnComponentHit.AddDynamic(this, &ADodgeballProjectile::Onhit);
	//추가한 함수와의 바인딩을 통해 OnComponentHit 이벤트를 받도록
	//Onhit 함수를 SphereComponent OnHit 이벤트에 바인딩 -> SphereComponent의 OnHit 이벤트가 호출될 때 Onhit 함수가 호출

	RootComponent = SphereComponent;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = 1500.f;
	
	
}

// Called when the game starts or when spawned
void ADodgeballProjectile::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(5.0f);
	
	
}

// Called every frame
void ADodgeballProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

void ADodgeballProjectile::Onhit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	ADodgeballCharacter* Player = Cast<ADodgeballCharacter>(OtherActor);
	if (Player != nullptr)
	{
		//캐릭터의 health컴포에 접근해 캐릭터의 체력을 줄임
		UHealthComponent* HealthComponent = Player->FindComponentByClass<UHealthComponent>();
		if (HealthComponent != nullptr)
		{
			HealthComponent->LoseHealth(Damege);
		}
		Destroy();
	}

	
	
}
	

