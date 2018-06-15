// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ID_Coffre_Property.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ALIEN_BUILD_API UID_Coffre_Property : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UID_Coffre_Property();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="ID du coffre")
		int32 ID;
	
};
