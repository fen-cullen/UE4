// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "FloatingCharMovetComp.generated.h"

/**
 * 
 */
UCLASS()
class NEW2_API UFloatingCharMovetComp : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	virtual void PhysFalling(float deltaTime, int32 Iterations);
};
