#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaGg.MissionGen_AthenaGg_C
// (None)

class UClass* UMissionGen_AthenaGg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaGg_C");

	return Clss;
}


// MissionGen_AthenaGg_C MissionGen_AthenaGg.Default__MissionGen_AthenaGg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaGg_C* UMissionGen_AthenaGg_C::GetDefaultObj()
{
	static class UMissionGen_AthenaGg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaGg_C*>(UMissionGen_AthenaGg_C::StaticClass()->DefaultObject);

	return Default;
}

}


