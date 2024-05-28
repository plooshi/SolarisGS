#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MAD_KillStreak_03.MAD_KillStreak_03_C
// (None)

class UClass* UMAD_KillStreak_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MAD_KillStreak_03_C");

	return Clss;
}


// MAD_KillStreak_03_C MAD_KillStreak_03.Default__MAD_KillStreak_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMAD_KillStreak_03_C* UMAD_KillStreak_03_C::GetDefaultObj()
{
	static class UMAD_KillStreak_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMAD_KillStreak_03_C*>(UMAD_KillStreak_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


