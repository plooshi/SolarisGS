#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Devices_Common_SetMaxHealth.GE_Devices_Common_SetMaxHealth_C
// (None)

class UClass* UGE_Devices_Common_SetMaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Devices_Common_SetMaxHealth_C");

	return Clss;
}


// GE_Devices_Common_SetMaxHealth_C GE_Devices_Common_SetMaxHealth.Default__GE_Devices_Common_SetMaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Devices_Common_SetMaxHealth_C* UGE_Devices_Common_SetMaxHealth_C::GetDefaultObj()
{
	static class UGE_Devices_Common_SetMaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Devices_Common_SetMaxHealth_C*>(UGE_Devices_Common_SetMaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


