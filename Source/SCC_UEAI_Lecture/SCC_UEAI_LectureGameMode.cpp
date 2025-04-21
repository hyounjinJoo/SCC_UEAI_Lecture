// Copyright Epic Games, Inc. All Rights Reserved.

#include "SCC_UEAI_LectureGameMode.h"
#include "SCC_UEAI_LectureCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASCC_UEAI_LectureGameMode::ASCC_UEAI_LectureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
