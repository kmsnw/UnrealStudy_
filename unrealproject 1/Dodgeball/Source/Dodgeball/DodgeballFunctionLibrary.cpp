// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballFunctionLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

bool UDodgeballFunctionLibrary::CanSeeActor(const UWorld* World, FVector Location, const AActor* TargetActor, TArray<const AActor*> IgnoreActors)
{
	
		if (TargetActor == nullptr)
		{
			return false;
		}

		FHitResult Hit;

		FVector Start = Location;
		FVector End = TargetActor->GetActorLocation();

		ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1; //ECC_Visibilitu -> 보통 시야 체크(카메라, 시각 감지)에 쓰이는 기본 채널
	
		FCollisionQueryParams QueryParams;

		QueryParams.AddIgnoredActors(IgnoreActors);
	
		// QueryParms: 라인 트레이스가 무시해야 할 액터 목록을 정의
		//this(캐릭터 자신)과 타겟 자체는 무시 -> 자신, 타겟 자체와 충돌하는 건 의미없는 판정..
	
		World->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams);
		// 레이 트레이싱 실행 -> 충돌 채널 기반으로  처음으로 충돌한 액터를 찾아 Hit에 저장
		DrawDebugLine(World, Start, End, FColor::Red);
	

		// [스윕 트레이스]
		// FQuat Rotation = FQuat::Identity;
		//
		// FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));
		//
		// GetWorld()->SweepSingleByChannel(Hit, Start, End, Rotation, Channel, Shape);
		//


	
		return !Hit.bBlockingHit; //아무 것도 안걸리면 true 
		// bBlockingHit: "무언가에 막혔는지 = 충돌했는지" -> 막혔다?(True) -> 부정 -> 막히지 않았을 때 true -> 볼 수 있을때
		// -> canSeeActor
	
	
	
}



