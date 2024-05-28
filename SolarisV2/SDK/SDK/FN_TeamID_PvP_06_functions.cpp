#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_PvP_06.TeamID_PvP_06_C
// (None)

class UClass* UTeamID_PvP_06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_PvP_06_C");

	return Clss;
}


// TeamID_PvP_06_C TeamID_PvP_06.Default__TeamID_PvP_06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_PvP_06_C* UTeamID_PvP_06_C::GetDefaultObj()
{
	static class UTeamID_PvP_06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_PvP_06_C*>(UTeamID_PvP_06_C::StaticClass()->DefaultObject);

	return Default;
}

}


