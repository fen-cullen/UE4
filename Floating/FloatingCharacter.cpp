// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingCharacter.h"


AFloatingCharacter::AFloatingCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UFloatingCharMovetComp>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFloatingCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	FloatingCharMovetComp = Cast<UFloatingCharMovetComp>(Super::GetMovementComponent());
}

// Called when the game starts or when spawned
void AFloatingCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloatingCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//void ACharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PrevCustomMode)
//{
//	if (!bPressedJump || !CharacterMovement->IsFalling())
//	{
//		ResetJumpState();
//	}
//
//	// Record jump force start time for proxies. Allows us to expire the jump even if not continually ticking down a timer.
//	if (bProxyIsJumpForceApplied && CharacterMovement->IsFalling())
//	{
//		ProxyJumpForceStartedTime = GetWorld()->GetTimeSeconds();
//	}
//
//	K2_OnMovementModeChanged(PrevMovementMode, CharacterMovement->MovementMode, PrevCustomMode, CharacterMovement->CustomMovementMode);
//	MovementModeChangedDelegate.Broadcast(this, PrevMovementMode, PrevCustomMode);
//}