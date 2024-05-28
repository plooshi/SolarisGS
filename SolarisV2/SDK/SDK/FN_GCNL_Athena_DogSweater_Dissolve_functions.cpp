#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Athena_DogSweater_Dissolve.GCNL_Athena_DogSweater_Dissolve_C
// (Actor)

class UClass* AGCNL_Athena_DogSweater_Dissolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Athena_DogSweater_Dissolve_C");

	return Clss;
}


// GCNL_Athena_DogSweater_Dissolve_C GCNL_Athena_DogSweater_Dissolve.Default__GCNL_Athena_DogSweater_Dissolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Athena_DogSweater_Dissolve_C* AGCNL_Athena_DogSweater_Dissolve_C::GetDefaultObj()
{
	static class AGCNL_Athena_DogSweater_Dissolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Athena_DogSweater_Dissolve_C*>(AGCNL_Athena_DogSweater_Dissolve_C::StaticClass()->DefaultObject);

	return Default;
}

}


