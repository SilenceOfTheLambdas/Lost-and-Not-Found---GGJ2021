// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LostAndNotFoundHUD.generated.h"

UCLASS()
class ALostAndNotFoundHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALostAndNotFoundHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

