// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = "Collision")
class BATTLETANK_01_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward movement, and +1 is max upward movement
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5; //Sensible default (is it really sensible? TODO research actual sensible)

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 30;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;

	
	


};
