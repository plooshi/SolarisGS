#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Generic_HealthRegen.GE_Generic_HealthRegen_C
// (None)

class UClass* UGE_Generic_HealthRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Generic_HealthRegen_C");

	return Clss;
}


// GE_Generic_HealthRegen_C GE_Generic_HealthRegen.Default__GE_Generic_HealthRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Generic_HealthRegen_C* UGE_Generic_HealthRegen_C::GetDefaultObj()
{
	static class UGE_Generic_HealthRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Generic_HealthRegen_C*>(UGE_Generic_HealthRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


