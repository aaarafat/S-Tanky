// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class STANKY_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public :
	UFUNCTION(BlueprintCallable,Category = Input)
	void SetThrottle(float S);
	UPROPERTY(EditDefaultsOnly)
		float Force = 40000000;
};
