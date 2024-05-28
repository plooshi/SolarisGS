#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent50.MissionGen_AthenaEvent50_C
// (None)

class UClass* UMissionGen_AthenaEvent50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent50_C");

	return Clss;
}


// MissionGen_AthenaEvent50_C MissionGen_AthenaEvent50.Default__MissionGen_AthenaEvent50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent50_C* UMissionGen_AthenaEvent50_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent50_C*>(UMissionGen_AthenaEvent50_C::StaticClass()->DefaultObject);

	return Default;
}

}


