// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnxtensionHUDblueprint.generated.h"

/**
 * 
 */
UCLASS()
class ALIEN_BUILD_API UEnxtensionHUDblueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Language", meta = (HidePin = "Target"))
		static void ChangeLanguage(FString langue);

	UFUNCTION(BlueprintCallable, Category = "Language")
		static FString getCurrentLanguage();
	UFUNCTION(BlueprintCallable, Category = "Controls")
		static void BindControl(FString toBind, FKey key);
	
};
