#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Athena_CeilingSpikes.Trap_Athena_CeilingSpikes_C
// (Actor)

class UClass* ATrap_Athena_CeilingSpikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Athena_CeilingSpikes_C");

	return Clss;
}


// Trap_Athena_CeilingSpikes_C Trap_Athena_CeilingSpikes.Default__Trap_Athena_CeilingSpikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Athena_CeilingSpikes_C* ATrap_Athena_CeilingSpikes_C::GetDefaultObj()
{
	static class ATrap_Athena_CeilingSpikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Athena_CeilingSpikes_C*>(ATrap_Athena_CeilingSpikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


