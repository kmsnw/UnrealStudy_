// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballPlayerController.h"
#include "RestartWidget.h"
#include "HUDWidget.h"


void ADodgeballPlayerController::ShowRestartWidget()
{
	if (BP_RestartWidget != nullptr)
	{
		SetPause(true);
		SetInputMode(FInputModeUIOnly()); //UI only 모드로 입력 모드 업데이트

		bShowMouseCursor = true; //마우스 커서 시각화

		RestartWidget = CreateWidget<URestartWidget>(this, BP_RestartWidget);
		RestartWidget->AddToViewport(); //화면에 추가
		UE_LOG(LogTemp, Warning, TEXT("RestartWidget ShowRestartWidget"));
		
	}
}

void ADodgeballPlayerController::HideRestartWidget()
{
	RestartWidget->RemoveFromParent(); //위젯 화면에 제거
	RestartWidget->Destruct(); //위젯 삭제


	//게임 정지 풀고, 마우스, 입력모드 다시 정상화
	SetPause(false);
	SetInputMode(FInputModeGameOnly());
	bShowMouseCursor = false;
	UE_LOG(LogTemp, Warning, TEXT("RestartWidget ShowRestartWidget"));
	
	
}

void ADodgeballPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (BP_HUDWidget != nullptr)
	{
		HUDWidget = CreateWidget<UHUDWidget>(this, BP_HUDWidget);
		HUDWidget->AddToViewport();
	}
}

void ADodgeballPlayerController::UpdateHealthPercent(float HealthPercent)
{
	if (HUDWidget != nullptr)
	{
		HUDWidget->UpdateHealthPercent(HealthPercent);
	}
}




