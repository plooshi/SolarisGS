#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent44.MissionGen_AthenaEvent44_C
// (None)

class UClass* UMissionGen_AthenaEvent44_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent44_C");

	return Clss;
}


// MissionGen_AthenaEvent44_C MissionGen_AthenaEvent44.Default__MissionGen_AthenaEvent44_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent44_C* UMissionGen_AthenaEvent44_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent44_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent44_C*>(UMissionGen_AthenaEvent44_C::StaticClass()->DefaultObject);

	return Default;
}

}


