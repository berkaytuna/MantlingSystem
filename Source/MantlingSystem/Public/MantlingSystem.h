// Written by Berkay Tuna, September 2020

#pragma once

#include "Modules/ModuleManager.h"

class FMantlingSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
