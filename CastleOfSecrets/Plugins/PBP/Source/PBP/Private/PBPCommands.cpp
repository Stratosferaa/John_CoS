// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PBPCommands.h"

#define LOCTEXT_NAMESPACE "FPBPModule"

void FPBPCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "PBP", "Execute PBP action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
