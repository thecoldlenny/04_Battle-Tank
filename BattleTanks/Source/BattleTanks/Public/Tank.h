// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// forward declarations
class UTankBarrel;
class UTankAimingComponent;


UCLASS()
class BATTLETANKS_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Sets default values for this pawn's properties
	ATank();

	UPROPERTY(EditAnywhere)
	float LaunchSpeed = 100000; // TODO Find sensible launch speed

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UTankAimingComponent* TankAimingComponent = nullptr;

};
