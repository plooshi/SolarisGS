#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleConfigsJackal.VehicleConfigsJackal_C
// (None)

class UClass* UVehicleConfigsJackal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleConfigsJackal_C");

	return Clss;
}


// VehicleConfigsJackal_C VehicleConfigsJackal.Default__VehicleConfigsJackal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleConfigsJackal_C* UVehicleConfigsJackal_C::GetDefaultObj()
{
	static class UVehicleConfigsJackal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleConfigsJackal_C*>(UVehicleConfigsJackal_C::StaticClass()->DefaultObject);

	return Default;
}

}


