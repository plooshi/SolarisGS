#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_Orange.TeamID_Orange_C
// (None)

class UClass* UTeamID_Orange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_Orange_C");

	return Clss;
}


// TeamID_Orange_C TeamID_Orange.Default__TeamID_Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_Orange_C* UTeamID_Orange_C::GetDefaultObj()
{
	static class UTeamID_Orange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_Orange_C*>(UTeamID_Orange_C::StaticClass()->DefaultObject);

	return Default;
}

}


