// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGame.h"
#include "SCharacter.h"
#include "SSpeedActor.h"

// Sets default values
ASSpeedActor::ASSpeedActor(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	/* A default to tweak per food variation in Blueprint */
	SpeedModifier = 20;
	Length = 5;

	bAllowRespawn = true;
	RespawnDelay = 60.0f;
	RespawnDelayRange = 20.0f;

}

void ASSpeedActor::OnUsed(APawn* InstigatorPawn)
{
	ASCharacter* Pawn = Cast<ASCharacter>(InstigatorPawn);
	if (Pawn)
	{

		/* Speed up the player for an amount of time */
		Pawn->AdjustSpeed(SpeedModifier, Length);
	}

	Super::OnUsed(InstigatorPawn);
}

