// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	UE_LOG(LogTemp, Warning, TEXT("안녕하세요"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 4.0f, FColor::Red, TEXT("Hello World"));
	}

	PlayerControllerClass = AMyPlayerController::StaticClass();
	DefaultPawnClass = AMyPawn::StaticClass();
}
