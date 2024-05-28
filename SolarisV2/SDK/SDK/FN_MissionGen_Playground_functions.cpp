#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Playground.MissionGen_Playground_C
// (None)

class UClass* UMissionGen_Playground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Playground_C");

	return Clss;
}


// MissionGen_Playground_C MissionGen_Playground.Default__MissionGen_Playground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Playground_C* UMissionGen_Playground_C::GetDefaultObj()
{
	static class UMissionGen_Playground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Playground_C*>(UMissionGen_Playground_C::StaticClass()->DefaultObject);

	return Default;
}

}


