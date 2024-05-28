#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent22.MissionGen_AthenaEvent22_C
// (None)

class UClass* UMissionGen_AthenaEvent22_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent22_C");

	return Clss;
}


// MissionGen_AthenaEvent22_C MissionGen_AthenaEvent22.Default__MissionGen_AthenaEvent22_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent22_C* UMissionGen_AthenaEvent22_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent22_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent22_C*>(UMissionGen_AthenaEvent22_C::StaticClass()->DefaultObject);

	return Default;
}

}


