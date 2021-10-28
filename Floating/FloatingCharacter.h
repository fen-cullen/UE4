// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FloatingCharMovetComp.h"
#include "FloatingCharacter.generated.h"

UCLASS()
class NEW2_API AFloatingCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFloatingCharacter(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FORCEINLINE class UFloatingCharMovetComp* GetFloatingCharMovetComp() const { return FloatingCharMovetComp;  }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PostInitializeComponents() override;

private:
	UFloatingCharMovetComp* FloatingCharMovetComp;
};
