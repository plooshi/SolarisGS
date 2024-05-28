#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Sword.MissionGen_Sword_C
// (None)

class UClass* UMissionGen_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Sword_C");

	return Clss;
}


// MissionGen_Sword_C MissionGen_Sword.Default__MissionGen_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Sword_C* UMissionGen_Sword_C::GetDefaultObj()
{
	static class UMissionGen_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Sword_C*>(UMissionGen_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


