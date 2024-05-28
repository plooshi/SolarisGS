#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Hard.MissionGen_Hard_C
// (None)

class UClass* UMissionGen_Hard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Hard_C");

	return Clss;
}


// MissionGen_Hard_C MissionGen_Hard.Default__MissionGen_Hard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Hard_C* UMissionGen_Hard_C::GetDefaultObj()
{
	static class UMissionGen_Hard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Hard_C*>(UMissionGen_Hard_C::StaticClass()->DefaultObject);

	return Default;
}

}


