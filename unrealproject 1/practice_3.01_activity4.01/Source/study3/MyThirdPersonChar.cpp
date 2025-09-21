// Fill out your copyright notice in the Description page of Project Settings.


#include "MyThirdPersonChar.h"
//cpp에서 선언한 컴포들에 해당하는 헤더파일
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"

// Sets default values
AMyThirdPersonChar::AMyThirdPersonChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//캡슐크기
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//컨트롤러가 회전할 때 캐릭터는 회전하지 않도록
	//캐릭터가 카메라에 영향을 주도록
	bUseControllerRotationPitch = false;
                                       	bUseControllerRotationYaw = false;
                                       	bUseControllerRotationRoll = false;

	//캐릭터 무브먼트 설정
	GetCharacterMovement()->bOrientRotationToMovement = true;
	
	//카메라 붐 생성(충돌 발생시 플레이어쪽으로 다가오도록)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	//캐릭터를 따라다닐 카메라 생성
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// 카메라 붐(지지대)를 마우스에 따라 회전시키고, 카메라는 가만히.

	
	
	
}

// Called when the game starts or when spawned
void AMyThirdPersonChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyThirdPersonChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyThirdPersonChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedPlayerInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedPlayerInputComponent != nullptr)
	{
		APlayerController* PlayerController =
			Cast<APlayerController>(GetController());

		if (PlayerController != nullptr)
		{
			UEnhancedInputLocalPlayerSubsystem* EnhancedSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
			// subsystem 요청 후, IC_Character 입력 콘텍스트를 추가해 여기에 추가된 입력 액션 활성화 가능

			if (EnhancedSubsystem != nullptr)
			{
				EnhancedSubsystem->AddMappingContext(IC_Character, 1);
			}
			
		}

		EnhancedPlayerInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyThirdPersonChar::Move);
		EnhancedPlayerInputComponent->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyThirdPersonChar::Look);
		
		
		EnhancedPlayerInputComponent->BindAction(IA_Jump, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedPlayerInputComponent->BindAction(IA_Jump, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		EnhancedPlayerInputComponent->BindAction(IA_Walk, ETriggerEvent::Started, this, &AMyThirdPersonChar::BeingWalking);
		EnhancedPlayerInputComponent->BindAction(IA_Walk, ETriggerEvent::Completed, this, &AMyThirdPersonChar::StopWalking);
		
		
	}


}

void AMyThirdPersonChar::Move(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();

	if (Controller != nullptr && (InputValue.X != 0.0f || InputValue.Y != 0.0f))
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);

		if (InputValue.X != 0.0f)
		{
			const FVector RightDirection = UKismetMathLibrary::GetRightVector(YawRotation);

			AddMovementInput(RightDirection, InputValue.X);
			
		}

		if (InputValue.Y != 0.0f)
		{
			const FVector ForwardDirection = YawRotation.Vector();
			AddMovementInput(ForwardDirection, InputValue.Y);
		}
	}

	
}

void AMyThirdPersonChar::Look(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();

	if (InputValue.X != 0.0f)
	{
		AddControllerYawInput(InputValue.X);
	}
	if (InputValue.Y != 0.0f)
	{
		AddControllerPitchInput(InputValue.Y);
	}
}

void AMyThirdPersonChar::BeingWalking()
{
	GetCharacterMovement()->MaxWalkSpeed *= 0.4f;
	
}

void AMyThirdPersonChar::StopWalking()
{
	GetCharacterMovement()->MaxWalkSpeed *= 2.5f;
	
}

