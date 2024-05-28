#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_33.MissionGen_33_C
// (None)

class UClass* UMissionGen_33_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_33_C");

	return Clss;
}


// MissionGen_33_C MissionGen_33.Default__MissionGen_33_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_33_C* UMissionGen_33_C::GetDefaultObj()
{
	static class UMissionGen_33_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_33_C*>(UMissionGen_33_C::StaticClass()->DefaultObject);

	return Default;
}

}


