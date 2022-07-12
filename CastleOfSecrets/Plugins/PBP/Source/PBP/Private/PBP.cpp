// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PBP.h"
#include "PBPStyle.h"
#include "PBPCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Public/IBlutilityModule.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "UMGEditor/Public/WidgetBlueprint.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectBaseUtility.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
static const FName PBPTabName("PBP");

#define LOCTEXT_NAMESPACE "FPBPModule"

void FPBPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// MA
	FPBPStyle::Initialize();
	FPBPStyle::ReloadTextures();

	FPBPCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FPBPCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FPBPModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowGlobalTabSpawners", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FPBPModule::AddMenuExtension));
		//MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FLDAssistantModule::AddMenuExtension));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FPBPModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FPBPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FPBPStyle::Shutdown();

	FPBPCommands::Unregister();
}

void FPBPModule::PluginButtonClicked()
{
	UObject* WidgetObj = LoadObject<UObject>(nullptr, TEXT("/PBP/PBP.PBP"));
	UEditorUtilityWidgetBlueprint* WidgetBP = (UEditorUtilityWidgetBlueprint*)WidgetObj;
	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(WidgetBP);
}
void FPBPModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FPBPCommands::Get().PluginAction);
}

void FPBPModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FPBPCommands::Get().PluginAction);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPBPModule, PBP)