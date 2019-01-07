// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"

void UTankTurret::RotateTurret(float RelativeSpeed) 
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto YawChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto NewYawRotation = RelativeRotation.Yaw + YawChange;

	SetRelativeRotation(FRotator(0, NewYawRotation, 0));
}