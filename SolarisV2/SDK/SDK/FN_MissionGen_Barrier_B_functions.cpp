#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Barrier_B.MissionGen_Barrier_B_C
// (None)

class UClass* UMissionGen_Barrier_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Barrier_B_C");

	return Clss;
}


// MissionGen_Barrier_B_C MissionGen_Barrier_B.Default__MissionGen_Barrier_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Barrier_B_C* UMissionGen_Barrier_B_C::GetDefaultObj()
{
	static class UMissionGen_Barrier_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Barrier_B_C*>(UMissionGen_Barrier_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


