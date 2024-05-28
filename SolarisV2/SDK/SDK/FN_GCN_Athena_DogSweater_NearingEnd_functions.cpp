#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_DogSweater_NearingEnd.GCN_Athena_DogSweater_NearingEnd_C
// (Actor)

class UClass* AGCN_Athena_DogSweater_NearingEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_DogSweater_NearingEnd_C");

	return Clss;
}


// GCN_Athena_DogSweater_NearingEnd_C GCN_Athena_DogSweater_NearingEnd.Default__GCN_Athena_DogSweater_NearingEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Athena_DogSweater_NearingEnd_C* AGCN_Athena_DogSweater_NearingEnd_C::GetDefaultObj()
{
	static class AGCN_Athena_DogSweater_NearingEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Athena_DogSweater_NearingEnd_C*>(AGCN_Athena_DogSweater_NearingEnd_C::StaticClass()->DefaultObject);

	return Default;
}

}


