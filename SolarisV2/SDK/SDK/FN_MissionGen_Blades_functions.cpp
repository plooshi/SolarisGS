#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Blades.MissionGen_Blades_C
// (None)

class UClass* UMissionGen_Blades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Blades_C");

	return Clss;
}


// MissionGen_Blades_C MissionGen_Blades.Default__MissionGen_Blades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Blades_C* UMissionGen_Blades_C::GetDefaultObj()
{
	static class UMissionGen_Blades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Blades_C*>(UMissionGen_Blades_C::StaticClass()->DefaultObject);

	return Default;
}

}


