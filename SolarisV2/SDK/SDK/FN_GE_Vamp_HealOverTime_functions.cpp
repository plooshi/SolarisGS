#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Vamp_HealOverTime.GE_Vamp_HealOverTime_C
// (None)

class UClass* UGE_Vamp_HealOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Vamp_HealOverTime_C");

	return Clss;
}


// GE_Vamp_HealOverTime_C GE_Vamp_HealOverTime.Default__GE_Vamp_HealOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Vamp_HealOverTime_C* UGE_Vamp_HealOverTime_C::GetDefaultObj()
{
	static class UGE_Vamp_HealOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Vamp_HealOverTime_C*>(UGE_Vamp_HealOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


