// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamEOSLink.h"

FString USteamEOSLink::GetSteamUserName() {
    #if defined(NO_STEAM)
        AssertMsg(false, "SteamCloud not available.");
    #else
    if (SteamAPI_Init())
    {
        const char* UserName = SteamFriends()->GetPersonaName();
        return FString(UTF8_TO_TCHAR(UserName));
    }
    return FString(TEXT("Unknown User"));
    #endif
}