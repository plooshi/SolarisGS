#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Paradise.MissionGen_Paradise_C
// (None)

class UClass* UMissionGen_Paradise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Paradise_C");

	return Clss;
}


// MissionGen_Paradise_C MissionGen_Paradise.Default__MissionGen_Paradise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Paradise_C* UMissionGen_Paradise_C::GetDefaultObj()
{
	static class UMissionGen_Paradise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Paradise_C*>(UMissionGen_Paradise_C::StaticClass()->DefaultObject);

	return Default;
}

}


