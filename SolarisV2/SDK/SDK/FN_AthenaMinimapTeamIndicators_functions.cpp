#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaMinimapTeamIndicators.AthenaMinimapTeamIndicators_C
// (None)

class UClass* UAthenaMinimapTeamIndicators_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMinimapTeamIndicators_C");

	return Clss;
}


// AthenaMinimapTeamIndicators_C AthenaMinimapTeamIndicators.Default__AthenaMinimapTeamIndicators_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMinimapTeamIndicators_C* UAthenaMinimapTeamIndicators_C::GetDefaultObj()
{
	static class UAthenaMinimapTeamIndicators_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMinimapTeamIndicators_C*>(UAthenaMinimapTeamIndicators_C::StaticClass()->DefaultObject);

	return Default;
}

}


