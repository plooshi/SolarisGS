#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Love.MissionGen_Love_C
// (None)

class UClass* UMissionGen_Love_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Love_C");

	return Clss;
}


// MissionGen_Love_C MissionGen_Love.Default__MissionGen_Love_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Love_C* UMissionGen_Love_C::GetDefaultObj()
{
	static class UMissionGen_Love_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Love_C*>(UMissionGen_Love_C::StaticClass()->DefaultObject);

	return Default;
}

}


