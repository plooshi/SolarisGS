#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent23.MissionGen_AthenaEvent23_C
// (None)

class UClass* UMissionGen_AthenaEvent23_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent23_C");

	return Clss;
}


// MissionGen_AthenaEvent23_C MissionGen_AthenaEvent23.Default__MissionGen_AthenaEvent23_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent23_C* UMissionGen_AthenaEvent23_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent23_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent23_C*>(UMissionGen_AthenaEvent23_C::StaticClass()->DefaultObject);

	return Default;
}

}


