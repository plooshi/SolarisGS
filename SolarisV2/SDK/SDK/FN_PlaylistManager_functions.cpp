#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlaylistManager.PlaylistManager_C
// (None)

class UClass* UPlaylistManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaylistManager_C");

	return Clss;
}


// PlaylistManager_C PlaylistManager.Default__PlaylistManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlaylistManager_C* UPlaylistManager_C::GetDefaultObj()
{
	static class UPlaylistManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaylistManager_C*>(UPlaylistManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


