// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyThirdPersonChar.generated.h"

UCLASS()
class STUDY3_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY() //리플렉션(언리얼 UPROPERTY, UFUNCUON, 블루프린트 연동 등 가능 매크로)

	//플레이어 카메라의 자리 표시자 역할
	//레벨 지오메트리에 가려졌을 때 자동 대처 제어


	
	
public:
	// Sets default values for this character's properties
	AMyThirdPersonChar();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,
	Category = My_TPS_Cam, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//캐릭터 따라다니는 카메라(팔로우 카메라)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,
		Category = My_TPS_Cam, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IC_Character;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Move;
	
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Jump;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Look;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Walk;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void BeingWalking();
	void StopWalking();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
