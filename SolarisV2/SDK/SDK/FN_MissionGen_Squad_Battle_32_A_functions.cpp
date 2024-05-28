#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Squad_Battle_32_A.MissionGen_Squad_Battle_32_A_C
// (None)

class UClass* UMissionGen_Squad_Battle_32_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Squad_Battle_32_A_C");

	return Clss;
}


// MissionGen_Squad_Battle_32_A_C MissionGen_Squad_Battle_32_A.Default__MissionGen_Squad_Battle_32_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Squad_Battle_32_A_C* UMissionGen_Squad_Battle_32_A_C::GetDefaultObj()
{
	static class UMissionGen_Squad_Battle_32_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Squad_Battle_32_A_C*>(UMissionGen_Squad_Battle_32_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


