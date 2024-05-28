#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaSquad.MissionGen_AthenaSquad_C
// (None)

class UClass* UMissionGen_AthenaSquad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaSquad_C");

	return Clss;
}


// MissionGen_AthenaSquad_C MissionGen_AthenaSquad.Default__MissionGen_AthenaSquad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaSquad_C* UMissionGen_AthenaSquad_C::GetDefaultObj()
{
	static class UMissionGen_AthenaSquad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaSquad_C*>(UMissionGen_AthenaSquad_C::StaticClass()->DefaultObject);

	return Default;
}

}


