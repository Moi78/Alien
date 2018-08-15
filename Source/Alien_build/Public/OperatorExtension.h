// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OperatorExtension.generated.h"

/**
 * 
 */
UCLASS()
class ALIEN_BUILD_API UOperatorExtension : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, category = "Operator")
		static bool isBetween(float Min, float Max, float toCheck);
	
};
