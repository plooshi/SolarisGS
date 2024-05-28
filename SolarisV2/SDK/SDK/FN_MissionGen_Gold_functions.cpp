#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Gold.MissionGen_Gold_C
// (None)

class UClass* UMissionGen_Gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Gold_C");

	return Clss;
}


// MissionGen_Gold_C MissionGen_Gold.Default__MissionGen_Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Gold_C* UMissionGen_Gold_C::GetDefaultObj()
{
	static class UMissionGen_Gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Gold_C*>(UMissionGen_Gold_C::StaticClass()->DefaultObject);

	return Default;
}

}


