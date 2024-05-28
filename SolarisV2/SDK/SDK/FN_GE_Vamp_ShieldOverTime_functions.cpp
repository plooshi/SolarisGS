#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Vamp_ShieldOverTime.GE_Vamp_ShieldOverTime_C
// (None)

class UClass* UGE_Vamp_ShieldOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Vamp_ShieldOverTime_C");

	return Clss;
}


// GE_Vamp_ShieldOverTime_C GE_Vamp_ShieldOverTime.Default__GE_Vamp_ShieldOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Vamp_ShieldOverTime_C* UGE_Vamp_ShieldOverTime_C::GetDefaultObj()
{
	static class UGE_Vamp_ShieldOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Vamp_ShieldOverTime_C*>(UGE_Vamp_ShieldOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


