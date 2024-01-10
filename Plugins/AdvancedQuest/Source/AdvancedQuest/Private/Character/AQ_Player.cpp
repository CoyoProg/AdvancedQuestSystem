// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AQ_Player.h"
#include <Kismet/GameplayStatics.h>

AAQ_Player::AAQ_Player()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AAQ_Player::BeginPlay()
{
	Super::BeginPlay();
}

void AAQ_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAQ_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

