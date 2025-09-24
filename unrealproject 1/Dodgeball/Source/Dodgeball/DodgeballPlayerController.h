// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DodgeballPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API ADodgeballPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditDefaultsOnly); //블루프린트 클래스에서 편집 가능
	TSubclassOf<class URestartWidget> BP_RestartWidget; //블루프린트 클래스에서 편집 가능

	UPROPERTY(EditDefaultsOnly);
	TSubclassOf<class UHUDWidget> BP_HUDWidget;
	
	void ShowRestartWidget();
	void HideRestartWidget();
	void UpdateHealthPercent(float HealthPercent);
	
	private:
	UPROPERTY()
	class URestartWidget* RestartWidget; // 참조 저장

	UPROPERTY()
	class UHUDWidget* HUDWidget;

	protected:
	virtual void BeginPlay() override;
	
};
