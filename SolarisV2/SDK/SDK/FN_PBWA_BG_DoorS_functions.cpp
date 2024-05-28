#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_BG_DoorS.PBWA_BG_DoorS_C
// (Actor)

class UClass* APBWA_BG_DoorS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_BG_DoorS_C");

	return Clss;
}


// PBWA_BG_DoorS_C PBWA_BG_DoorS.Default__PBWA_BG_DoorS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_BG_DoorS_C* APBWA_BG_DoorS_C::GetDefaultObj()
{
	static class APBWA_BG_DoorS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_BG_DoorS_C*>(APBWA_BG_DoorS_C::StaticClass()->DefaultObject);

	return Default;
}

}


