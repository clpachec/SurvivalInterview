// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SPickupActor.h"
#include "SSpeedActor.generated.h"

UCLASS(ABSTRACT)
class SURVIVALGAME_API ASSpeedActor : public ASPickupActor
{
	GENERATED_BODY()

	ASSpeedActor(const FObjectInitializer& ObjectInitializer);


protected:
	/* Consume item, restoring energy to player */
	virtual void OnUsed(APawn* InstigatorPawn) override;

	/* Amount of hitpoints restored and hunger reduced when consumed. */
	UPROPERTY(EditDefaultsOnly, Category = "Speed")
	float SpeedModifier;
	float Length;
};
