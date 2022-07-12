// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "PBPStyle.h"

class FPBPCommands : public TCommands<FPBPCommands>
{
public:

	FPBPCommands()
		: TCommands<FPBPCommands>(TEXT("PBP"), NSLOCTEXT("Contexts", "PBP", "PBP Plugin"), NAME_None, FPBPStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
