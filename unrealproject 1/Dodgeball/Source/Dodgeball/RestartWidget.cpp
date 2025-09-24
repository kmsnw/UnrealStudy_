// Fill out your copyright notice in the Description page of Project Settings.


#include "RestartWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "DodgeballPlayerController.h"



void URestartWidget::OnRestartClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("OnRestartClicked()"))
	
	UGameplayStatics::OpenLevel(this, FName(*UGameplayStatics::GetCurrentLevelName(this)));

	ADodgeballPlayerController* PlayerController = Cast<ADodgeballPlayerController>(GetOwningPlayer());
	if (PlayerController != nullptr)
	{
		PlayerController->HideRestartWidget();
	}
	

}

void URestartWidget::OnExitClicked()
{
	
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	
}


void URestartWidget::NativeOnInitialized()
{
	
	Super::NativeOnInitialized();;
	if (RestartButton != nullptr)
	{
		RestartButton->OnClicked.AddDynamic(this, &URestartWidget::OnRestartClicked);
		ExitButton->OnClicked.AddDynamic(this, &URestartWidget::OnExitClicked);
	}
}

