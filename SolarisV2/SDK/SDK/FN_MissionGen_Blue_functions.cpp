#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Blue.MissionGen_Blue_C
// (None)

class UClass* UMissionGen_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Blue_C");

	return Clss;
}


// MissionGen_Blue_C MissionGen_Blue.Default__MissionGen_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Blue_C* UMissionGen_Blue_C::GetDefaultObj()
{
	static class UMissionGen_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Blue_C*>(UMissionGen_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


