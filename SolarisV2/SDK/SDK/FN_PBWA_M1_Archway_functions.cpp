#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_M1_Archway.PBWA_M1_Archway_C
// (Actor)

class UClass* APBWA_M1_Archway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_M1_Archway_C");

	return Clss;
}


// PBWA_M1_Archway_C PBWA_M1_Archway.Default__PBWA_M1_Archway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_M1_Archway_C* APBWA_M1_Archway_C::GetDefaultObj()
{
	static class APBWA_M1_Archway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_M1_Archway_C*>(APBWA_M1_Archway_C::StaticClass()->DefaultObject);

	return Default;
}

}


