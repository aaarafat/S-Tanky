// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TankAimingComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

UCLASS()
class STANKY_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();
	void AimAt(FVector HitLocation);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UTankAimingComponent* TankAimingComponent = nullptr;
	UFUNCTION(BlueprintCallable , Category = Setup)
		void SetBarrel(UTankBarrel* B);
	UFUNCTION(BlueprintCallable, Category = Setup)
		void SetTurret(UTankTurret* T);
	UFUNCTION(BlueprintCallable, Category = Input)
		void Fire();
	UPROPERTY(EditAnyWhere, Category = Firing)
		float LaunchSpeed = 100000;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
