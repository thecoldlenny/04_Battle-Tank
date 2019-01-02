// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h" // Must be the last hash include

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public: 
		ATank* GetControlledTank() const;

		void AimTowardsCrosshair();

		virtual void BeginPlay() override;

		virtual void Tick(float DeltaTime) override;

		bool GetSightRayHitLocation(FVector& OutHitLocation) const;
};
