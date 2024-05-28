#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Heavy.MissionGen_Heavy_C
// (None)

class UClass* UMissionGen_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Heavy_C");

	return Clss;
}


// MissionGen_Heavy_C MissionGen_Heavy.Default__MissionGen_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Heavy_C* UMissionGen_Heavy_C::GetDefaultObj()
{
	static class UMissionGen_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Heavy_C*>(UMissionGen_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


