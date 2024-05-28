#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UsedPrimaryMissionPlacementActorsContext.UsedPrimaryMissionPlacementActorsContext_C
// (None)

class UClass* UUsedPrimaryMissionPlacementActorsContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsedPrimaryMissionPlacementActorsContext_C");

	return Clss;
}


// UsedPrimaryMissionPlacementActorsContext_C UsedPrimaryMissionPlacementActorsContext.Default__UsedPrimaryMissionPlacementActorsContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUsedPrimaryMissionPlacementActorsContext_C* UUsedPrimaryMissionPlacementActorsContext_C::GetDefaultObj()
{
	static class UUsedPrimaryMissionPlacementActorsContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsedPrimaryMissionPlacementActorsContext_C*>(UUsedPrimaryMissionPlacementActorsContext_C::StaticClass()->DefaultObject);

	return Default;
}

}


