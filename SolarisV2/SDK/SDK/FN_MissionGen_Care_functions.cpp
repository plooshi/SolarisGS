#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Care.MissionGen_Care_C
// (None)

class UClass* UMissionGen_Care_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Care_C");

	return Clss;
}


// MissionGen_Care_C MissionGen_Care.Default__MissionGen_Care_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Care_C* UMissionGen_Care_C::GetDefaultObj()
{
	static class UMissionGen_Care_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Care_C*>(UMissionGen_Care_C::StaticClass()->DefaultObject);

	return Default;
}

}


