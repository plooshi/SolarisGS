#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimalTeamDisplay.MinimalTeamDisplay_C
// (None)

class UClass* UMinimalTeamDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimalTeamDisplay_C");

	return Clss;
}


// MinimalTeamDisplay_C MinimalTeamDisplay.Default__MinimalTeamDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimalTeamDisplay_C* UMinimalTeamDisplay_C::GetDefaultObj()
{
	static class UMinimalTeamDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimalTeamDisplay_C*>(UMinimalTeamDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


