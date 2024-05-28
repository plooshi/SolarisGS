#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Swap.MissionGen_Swap_C
// (None)

class UClass* UMissionGen_Swap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Swap_C");

	return Clss;
}


// MissionGen_Swap_C MissionGen_Swap.Default__MissionGen_Swap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Swap_C* UMissionGen_Swap_C::GetDefaultObj()
{
	static class UMissionGen_Swap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Swap_C*>(UMissionGen_Swap_C::StaticClass()->DefaultObject);

	return Default;
}

}


