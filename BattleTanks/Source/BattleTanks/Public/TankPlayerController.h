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
	
	private: 
		ATank* GetControlledTank() const;

		void AimTowardsCrosshair();

		virtual void BeginPlay() override;

		virtual void Tick(float DeltaTime) override;

		bool GetSightRayHitLocation(FVector& OutHitLocation) const;

		bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
		bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

		UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;

		UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33333;

		UPROPERTY(EditAnywhere)
		float LineTraceRange = 100000.0;
};
