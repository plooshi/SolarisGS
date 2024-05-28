#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Barrier.MissionGen_Barrier_C
// (None)

class UClass* UMissionGen_Barrier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Barrier_C");

	return Clss;
}


// MissionGen_Barrier_C MissionGen_Barrier.Default__MissionGen_Barrier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Barrier_C* UMissionGen_Barrier_C::GetDefaultObj()
{
	static class UMissionGen_Barrier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Barrier_C*>(UMissionGen_Barrier_C::StaticClass()->DefaultObject);

	return Default;
}

}


