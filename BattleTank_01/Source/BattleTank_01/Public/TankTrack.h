// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_01_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintCallable, Category = input)
	void SetThrottle(float Throttle);

	//Max force per track in Newtons
	UPROPERTY(EditDefaultsOnly)
		float MaxDriveForce = 400000;
	
};
