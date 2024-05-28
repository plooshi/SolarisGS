#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AthenaInVehicle.GE_AthenaInVehicle_C
// (None)

class UClass* UGE_AthenaInVehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AthenaInVehicle_C");

	return Clss;
}


// GE_AthenaInVehicle_C GE_AthenaInVehicle.Default__GE_AthenaInVehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AthenaInVehicle_C* UGE_AthenaInVehicle_C::GetDefaultObj()
{
	static class UGE_AthenaInVehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AthenaInVehicle_C*>(UGE_AthenaInVehicle_C::StaticClass()->DefaultObject);

	return Default;
}

}


