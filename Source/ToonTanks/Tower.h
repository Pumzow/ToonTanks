// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float FireRange = 300.f;
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float FireRate = 2.f;
	FTimerHandle FireRateTimerHandle;

	void CheckFireCondition();
	bool TankInRange();
};
