#include "pluginDev.h"
#include "Engine.h"
//#include "Log.h"
//#include "Modules/ModuleManager.h"


void FPluginDevModule::StartupModule()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("StartModule"));
	UE_LOG(LogTemp, Warning, TEXT("new  module has started!"));
}

void FPluginDevModule::ShutdownModule()
{
GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("ShutModuel"));
}
IMPLEMENT_MODULE(FPluginDevModule, "pluginDev");