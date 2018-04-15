// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <iostream>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "TestOBJ.generated.h"

UCLASS()
class ALIEN_BUILD_API ATestOBJ : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestOBJ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Collide();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		USceneComponent *root;
	UPROPERTY(EditAnywhere)
		UBoxComponent *boxColl;

	
	
};
