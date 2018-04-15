// Fill out your copyright notice in the Description page of Project Settings.

#include "TestOBJ.h"


// Sets default values
ATestOBJ::ATestOBJ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	root = CreateAbstractDefaultSubobject<USceneComponent>("TEXT=ROOT");
	SetRootComponent(root);
	boxColl = CreateDefaultSubobject<UBoxComponent>("TEXT=BOX");
	boxColl->AttachTo(root);

}

// Called when the game starts or when spawned
void ATestOBJ::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestOBJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestOBJ::Collide() {
	boxColl->OnComponentBeginOverlap;
	std::cout << "test";
}

