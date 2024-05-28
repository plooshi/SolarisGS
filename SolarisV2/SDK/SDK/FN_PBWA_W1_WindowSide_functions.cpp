#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_W1_WindowSide.PBWA_W1_WindowSide_C
// (Actor)

class UClass* APBWA_W1_WindowSide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_W1_WindowSide_C");

	return Clss;
}


// PBWA_W1_WindowSide_C PBWA_W1_WindowSide.Default__PBWA_W1_WindowSide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_W1_WindowSide_C* APBWA_W1_WindowSide_C::GetDefaultObj()
{
	static class APBWA_W1_WindowSide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_W1_WindowSide_C*>(APBWA_W1_WindowSide_C::StaticClass()->DefaultObject);

	return Default;
}

}


