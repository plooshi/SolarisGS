#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Context_NoWeaponZone.Device_Context_NoWeaponZone_C
// (Actor)

class UClass* ADevice_Context_NoWeaponZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Context_NoWeaponZone_C");

	return Clss;
}


// Device_Context_NoWeaponZone_C Device_Context_NoWeaponZone.Default__Device_Context_NoWeaponZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Context_NoWeaponZone_C* ADevice_Context_NoWeaponZone_C::GetDefaultObj()
{
	static class ADevice_Context_NoWeaponZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Context_NoWeaponZone_C*>(ADevice_Context_NoWeaponZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


