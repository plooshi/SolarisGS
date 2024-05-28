#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent50v50SAU.MissionGen_AthenaEvent50v50SAU_C
// (None)

class UClass* UMissionGen_AthenaEvent50v50SAU_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent50v50SAU_C");

	return Clss;
}


// MissionGen_AthenaEvent50v50SAU_C MissionGen_AthenaEvent50v50SAU.Default__MissionGen_AthenaEvent50v50SAU_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent50v50SAU_C* UMissionGen_AthenaEvent50v50SAU_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent50v50SAU_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent50v50SAU_C*>(UMissionGen_AthenaEvent50v50SAU_C::StaticClass()->DefaultObject);

	return Default;
}

}


