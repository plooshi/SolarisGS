#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_DogSweater_ZoneActivate.GCN_Athena_DogSweater_ZoneActivate_C
// (None)

class UClass* UGCN_Athena_DogSweater_ZoneActivate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_DogSweater_ZoneActivate_C");

	return Clss;
}


// GCN_Athena_DogSweater_ZoneActivate_C GCN_Athena_DogSweater_ZoneActivate.Default__GCN_Athena_DogSweater_ZoneActivate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Athena_DogSweater_ZoneActivate_C* UGCN_Athena_DogSweater_ZoneActivate_C::GetDefaultObj()
{
	static class UGCN_Athena_DogSweater_ZoneActivate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Athena_DogSweater_ZoneActivate_C*>(UGCN_Athena_DogSweater_ZoneActivate_C::StaticClass()->DefaultObject);

	return Default;
}

}


