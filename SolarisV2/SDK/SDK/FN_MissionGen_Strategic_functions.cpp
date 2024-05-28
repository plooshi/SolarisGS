#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Strategic.MissionGen_Strategic_C
// (None)

class UClass* UMissionGen_Strategic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Strategic_C");

	return Clss;
}


// MissionGen_Strategic_C MissionGen_Strategic.Default__MissionGen_Strategic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Strategic_C* UMissionGen_Strategic_C::GetDefaultObj()
{
	static class UMissionGen_Strategic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Strategic_C*>(UMissionGen_Strategic_C::StaticClass()->DefaultObject);

	return Default;
}

}


