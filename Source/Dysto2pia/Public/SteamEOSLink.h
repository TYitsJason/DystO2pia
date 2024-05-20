// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamEOSLink.generated.h"
#include "public/steam/steam_api.h"

/**
 * 
 */
UCLASS()
class DYSTO2PIA_API USteamEOSLink : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Steam")
	static FString GetSteamUserName();
};
