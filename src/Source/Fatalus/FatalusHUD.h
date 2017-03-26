// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "FatalusHUD.generated.h"

UCLASS()
class AFatalusHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFatalusHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

