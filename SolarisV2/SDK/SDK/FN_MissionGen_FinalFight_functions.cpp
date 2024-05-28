#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_FinalFight.MissionGen_FinalFight_C
// (None)

class UClass* UMissionGen_FinalFight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_FinalFight_C");

	return Clss;
}


// MissionGen_FinalFight_C MissionGen_FinalFight.Default__MissionGen_FinalFight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_FinalFight_C* UMissionGen_FinalFight_C::GetDefaultObj()
{
	static class UMissionGen_FinalFight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_FinalFight_C*>(UMissionGen_FinalFight_C::StaticClass()->DefaultObject);

	return Default;
}

}


