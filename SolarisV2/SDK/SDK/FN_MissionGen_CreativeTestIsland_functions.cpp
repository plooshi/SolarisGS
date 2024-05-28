#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_CreativeTestIsland.MissionGen_CreativeTestIsland_C
// (None)

class UClass* UMissionGen_CreativeTestIsland_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_CreativeTestIsland_C");

	return Clss;
}


// MissionGen_CreativeTestIsland_C MissionGen_CreativeTestIsland.Default__MissionGen_CreativeTestIsland_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_CreativeTestIsland_C* UMissionGen_CreativeTestIsland_C::GetDefaultObj()
{
	static class UMissionGen_CreativeTestIsland_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_CreativeTestIsland_C*>(UMissionGen_CreativeTestIsland_C::StaticClass()->DefaultObject);

	return Default;
}

}


