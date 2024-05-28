#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_SteadyStorm.MissionGen_SteadyStorm_C
// (None)

class UClass* UMissionGen_SteadyStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_SteadyStorm_C");

	return Clss;
}


// MissionGen_SteadyStorm_C MissionGen_SteadyStorm.Default__MissionGen_SteadyStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_SteadyStorm_C* UMissionGen_SteadyStorm_C::GetDefaultObj()
{
	static class UMissionGen_SteadyStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_SteadyStorm_C*>(UMissionGen_SteadyStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


