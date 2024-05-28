#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Context_EliminationZone.Device_Context_EliminationZone_C
// (Actor)

class UClass* ADevice_Context_EliminationZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Context_EliminationZone_C");

	return Clss;
}


// Device_Context_EliminationZone_C Device_Context_EliminationZone.Default__Device_Context_EliminationZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Context_EliminationZone_C* ADevice_Context_EliminationZone_C::GetDefaultObj()
{
	static class ADevice_Context_EliminationZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Context_EliminationZone_C*>(ADevice_Context_EliminationZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


