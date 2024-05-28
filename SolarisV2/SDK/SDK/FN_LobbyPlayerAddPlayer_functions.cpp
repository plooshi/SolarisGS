#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// (None)

class UClass* ULobbyPlayerAddPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyPlayerAddPlayer_C");

	return Clss;
}


// LobbyPlayerAddPlayer_C LobbyPlayerAddPlayer.Default__LobbyPlayerAddPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobbyPlayerAddPlayer_C* ULobbyPlayerAddPlayer_C::GetDefaultObj()
{
	static class ULobbyPlayerAddPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyPlayerAddPlayer_C*>(ULobbyPlayerAddPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


