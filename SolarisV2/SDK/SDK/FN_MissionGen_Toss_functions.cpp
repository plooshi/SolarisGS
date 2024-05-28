#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Toss.MissionGen_Toss_C
// (None)

class UClass* UMissionGen_Toss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Toss_C");

	return Clss;
}


// MissionGen_Toss_C MissionGen_Toss.Default__MissionGen_Toss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Toss_C* UMissionGen_Toss_C::GetDefaultObj()
{
	static class UMissionGen_Toss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Toss_C*>(UMissionGen_Toss_C::StaticClass()->DefaultObject);

	return Default;
}

}


