#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_W1_HalfWallDoorS.PBWA_W1_HalfWallDoorS_C
// (Actor)

class UClass* APBWA_W1_HalfWallDoorS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_W1_HalfWallDoorS_C");

	return Clss;
}


// PBWA_W1_HalfWallDoorS_C PBWA_W1_HalfWallDoorS.Default__PBWA_W1_HalfWallDoorS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_W1_HalfWallDoorS_C* APBWA_W1_HalfWallDoorS_C::GetDefaultObj()
{
	static class APBWA_W1_HalfWallDoorS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_W1_HalfWallDoorS_C*>(APBWA_W1_HalfWallDoorS_C::StaticClass()->DefaultObject);

	return Default;
}

}


