﻿#pragma once

#include "WarriorsItemSettings.generated.h"

USTRUCT(BlueprintType)
struct FWarriorsItemSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warriors")
	TObjectPtr<UAnimMontage> DrawSwordMontage;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Warriors");
	float DrawSwordMontagePlayRate = 1.5f;
};
