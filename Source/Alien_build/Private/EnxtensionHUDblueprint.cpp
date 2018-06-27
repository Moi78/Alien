// Fill out your copyright notice in the Description page of Project Settings.

#include "EnxtensionHUDblueprint.h"
#include "Culture.h"

void UEnxtensionHUDblueprint::ChangeLanguage(FString langue) {
	FInternationalization::Get().SetCurrentCulture(langue);
}

FString UEnxtensionHUDblueprint::getCurrentLanguage() {
	return FInternationalization::Get().GetCurrentCulture()->GetName();
}