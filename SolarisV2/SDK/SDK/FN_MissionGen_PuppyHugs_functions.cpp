#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_PuppyHugs.MissionGen_PuppyHugs_C
// (None)

class UClass* UMissionGen_PuppyHugs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_PuppyHugs_C");

	return Clss;
}


// MissionGen_PuppyHugs_C MissionGen_PuppyHugs.Default__MissionGen_PuppyHugs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_PuppyHugs_C* UMissionGen_PuppyHugs_C::GetDefaultObj()
{
	static class UMissionGen_PuppyHugs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_PuppyHugs_C*>(UMissionGen_PuppyHugs_C::StaticClass()->DefaultObject);

	return Default;
}

}


