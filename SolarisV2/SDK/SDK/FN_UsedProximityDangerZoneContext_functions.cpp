#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UsedProximityDangerZoneContext.UsedProximityDangerZoneContext_C
// (None)

class UClass* UUsedProximityDangerZoneContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsedProximityDangerZoneContext_C");

	return Clss;
}


// UsedProximityDangerZoneContext_C UsedProximityDangerZoneContext.Default__UsedProximityDangerZoneContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUsedProximityDangerZoneContext_C* UUsedProximityDangerZoneContext_C::GetDefaultObj()
{
	static class UUsedProximityDangerZoneContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsedProximityDangerZoneContext_C*>(UUsedProximityDangerZoneContext_C::StaticClass()->DefaultObject);

	return Default;
}

}


