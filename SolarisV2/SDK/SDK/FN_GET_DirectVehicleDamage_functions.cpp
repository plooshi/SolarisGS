#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectVehicleDamage.GET_DirectVehicleDamage_C
// (None)

class UClass* UGET_DirectVehicleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectVehicleDamage_C");

	return Clss;
}


// GET_DirectVehicleDamage_C GET_DirectVehicleDamage.Default__GET_DirectVehicleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectVehicleDamage_C* UGET_DirectVehicleDamage_C::GetDefaultObj()
{
	static class UGET_DirectVehicleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectVehicleDamage_C*>(UGET_DirectVehicleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


