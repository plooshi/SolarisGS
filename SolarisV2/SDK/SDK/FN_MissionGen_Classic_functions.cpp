#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Classic.MissionGen_Classic_C
// (None)

class UClass* UMissionGen_Classic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Classic_C");

	return Clss;
}


// MissionGen_Classic_C MissionGen_Classic.Default__MissionGen_Classic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Classic_C* UMissionGen_Classic_C::GetDefaultObj()
{
	static class UMissionGen_Classic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Classic_C*>(UMissionGen_Classic_C::StaticClass()->DefaultObject);

	return Default;
}

}


