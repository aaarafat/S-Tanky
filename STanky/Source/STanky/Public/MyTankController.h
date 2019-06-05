// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyTankController.generated.h"

/**
 * 
 */
UCLASS()
class STANKY_API AMyTankController : public APlayerController
{
	GENERATED_BODY()
		void BeginPlay() override;
		void Tick(float DeltaTime) override;
		bool Crosshair();
		ATank* GetControlledTank();
	
};
