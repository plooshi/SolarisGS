#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_PvP_09.TeamID_PvP_09_C
// (None)

class UClass* UTeamID_PvP_09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_PvP_09_C");

	return Clss;
}


// TeamID_PvP_09_C TeamID_PvP_09.Default__TeamID_PvP_09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_PvP_09_C* UTeamID_PvP_09_C::GetDefaultObj()
{
	static class UTeamID_PvP_09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_PvP_09_C*>(UTeamID_PvP_09_C::StaticClass()->DefaultObject);

	return Default;
}

}


