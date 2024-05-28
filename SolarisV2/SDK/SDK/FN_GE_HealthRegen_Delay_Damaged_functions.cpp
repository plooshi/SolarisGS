#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C
// (None)

class UClass* UGE_HealthRegen_Delay_Damaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthRegen_Delay_Damaged_C");

	return Clss;
}


// GE_HealthRegen_Delay_Damaged_C GE_HealthRegen_Delay_Damaged.Default__GE_HealthRegen_Delay_Damaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthRegen_Delay_Damaged_C* UGE_HealthRegen_Delay_Damaged_C::GetDefaultObj()
{
	static class UGE_HealthRegen_Delay_Damaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthRegen_Delay_Damaged_C*>(UGE_HealthRegen_Delay_Damaged_C::StaticClass()->DefaultObject);

	return Default;
}

}


