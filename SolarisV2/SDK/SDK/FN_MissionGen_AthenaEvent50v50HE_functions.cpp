#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent50v50HE.MissionGen_AthenaEvent50v50HE_C
// (None)

class UClass* UMissionGen_AthenaEvent50v50HE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent50v50HE_C");

	return Clss;
}


// MissionGen_AthenaEvent50v50HE_C MissionGen_AthenaEvent50v50HE.Default__MissionGen_AthenaEvent50v50HE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent50v50HE_C* UMissionGen_AthenaEvent50v50HE_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent50v50HE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent50v50HE_C*>(UMissionGen_AthenaEvent50v50HE_C::StaticClass()->DefaultObject);

	return Default;
}

}


