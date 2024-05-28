#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BeachAssault.MissionGen_BeachAssault_C
// (None)

class UClass* UMissionGen_BeachAssault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BeachAssault_C");

	return Clss;
}


// MissionGen_BeachAssault_C MissionGen_BeachAssault.Default__MissionGen_BeachAssault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BeachAssault_C* UMissionGen_BeachAssault_C::GetDefaultObj()
{
	static class UMissionGen_BeachAssault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BeachAssault_C*>(UMissionGen_BeachAssault_C::StaticClass()->DefaultObject);

	return Default;
}

}


