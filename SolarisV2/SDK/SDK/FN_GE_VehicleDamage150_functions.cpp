#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VehicleDamage150.GE_VehicleDamage150_C
// (None)

class UClass* UGE_VehicleDamage150_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VehicleDamage150_C");

	return Clss;
}


// GE_VehicleDamage150_C GE_VehicleDamage150.Default__GE_VehicleDamage150_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VehicleDamage150_C* UGE_VehicleDamage150_C::GetDefaultObj()
{
	static class UGE_VehicleDamage150_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VehicleDamage150_C*>(UGE_VehicleDamage150_C::StaticClass()->DefaultObject);

	return Default;
}

}


