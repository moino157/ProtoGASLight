// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameplayAbility.h"

// Sets default values
AMyGameplayAbility::AMyGameplayAbility()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyGameplayAbility::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyGameplayAbility::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

