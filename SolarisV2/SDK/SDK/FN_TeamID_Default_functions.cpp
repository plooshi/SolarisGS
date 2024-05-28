#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_Default.TeamID_Default_C
// (None)

class UClass* UTeamID_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_Default_C");

	return Clss;
}


// TeamID_Default_C TeamID_Default.Default__TeamID_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_Default_C* UTeamID_Default_C::GetDefaultObj()
{
	static class UTeamID_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_Default_C*>(UTeamID_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


