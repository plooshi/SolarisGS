#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Tank.MissionGen_Tank_C
// (None)

class UClass* UMissionGen_Tank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Tank_C");

	return Clss;
}


// MissionGen_Tank_C MissionGen_Tank.Default__MissionGen_Tank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Tank_C* UMissionGen_Tank_C::GetDefaultObj()
{
	static class UMissionGen_Tank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Tank_C*>(UMissionGen_Tank_C::StaticClass()->DefaultObject);

	return Default;
}

}


