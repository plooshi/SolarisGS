#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Ground.MissionGen_Ground_C
// (None)

class UClass* UMissionGen_Ground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Ground_C");

	return Clss;
}


// MissionGen_Ground_C MissionGen_Ground.Default__MissionGen_Ground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Ground_C* UMissionGen_Ground_C::GetDefaultObj()
{
	static class UMissionGen_Ground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Ground_C*>(UMissionGen_Ground_C::StaticClass()->DefaultObject);

	return Default;
}

}


