#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_Lime.TeamID_Lime_C
// (None)

class UClass* UTeamID_Lime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_Lime_C");

	return Clss;
}


// TeamID_Lime_C TeamID_Lime.Default__TeamID_Lime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_Lime_C* UTeamID_Lime_C::GetDefaultObj()
{
	static class UTeamID_Lime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_Lime_C*>(UTeamID_Lime_C::StaticClass()->DefaultObject);

	return Default;
}

}


