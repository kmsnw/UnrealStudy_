// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HealthInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHealthInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DODGEBALL_API IHealthInterface
{
	GENERATED_BODY()
	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//체력이 다 소진됐을 때(0) 호출될 함수
	UFUNCTION(BlueprintNativeEvent)
	void OnDeath();
	virtual void OnDeath_Implementation() = 0; //=0은 이 함수의 구현이 없다는 것을 컴파일러에 알림

	UFUNCTION(BlueprintNativeEvent, Category = Health)
	void OnTakeDamage();
	virtual void OnTakeDamage_Implementation() = 0;
};

