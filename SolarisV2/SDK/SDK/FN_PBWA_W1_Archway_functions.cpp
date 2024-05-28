#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_W1_Archway.PBWA_W1_Archway_C
// (Actor)

class UClass* APBWA_W1_Archway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_W1_Archway_C");

	return Clss;
}


// PBWA_W1_Archway_C PBWA_W1_Archway.Default__PBWA_W1_Archway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_W1_Archway_C* APBWA_W1_Archway_C::GetDefaultObj()
{
	static class APBWA_W1_Archway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_W1_Archway_C*>(APBWA_W1_Archway_C::StaticClass()->DefaultObject);

	return Default;
}

}


