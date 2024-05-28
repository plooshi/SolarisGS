#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Burst_Hot_Feet_Environmental.GCN_Burst_Hot_Feet_Environmental_C
// (None)

class UClass* UGCN_Burst_Hot_Feet_Environmental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Burst_Hot_Feet_Environmental_C");

	return Clss;
}


// GCN_Burst_Hot_Feet_Environmental_C GCN_Burst_Hot_Feet_Environmental.Default__GCN_Burst_Hot_Feet_Environmental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Burst_Hot_Feet_Environmental_C* UGCN_Burst_Hot_Feet_Environmental_C::GetDefaultObj()
{
	static class UGCN_Burst_Hot_Feet_Environmental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Burst_Hot_Feet_Environmental_C*>(UGCN_Burst_Hot_Feet_Environmental_C::StaticClass()->DefaultObject);

	return Default;
}

}


