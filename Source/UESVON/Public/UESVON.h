// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

#if WITH_EDITOR
UESVON_API DECLARE_LOG_CATEGORY_EXTERN(UESVON, Log, All);
UESVON_API DECLARE_LOG_CATEGORY_EXTERN(VUESVON, Log, All);
#endif

class FUESVONModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};