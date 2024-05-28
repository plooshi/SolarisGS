#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_PvP_44.TeamID_PvP_44_C
// (None)

class UClass* UTeamID_PvP_44_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_PvP_44_C");

	return Clss;
}


// TeamID_PvP_44_C TeamID_PvP_44.Default__TeamID_PvP_44_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_PvP_44_C* UTeamID_PvP_44_C::GetDefaultObj()
{
	static class UTeamID_PvP_44_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_PvP_44_C*>(UTeamID_PvP_44_C::StaticClass()->DefaultObject);

	return Default;
}

}


