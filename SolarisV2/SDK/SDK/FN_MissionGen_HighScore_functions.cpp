#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_HighScore.MissionGen_HighScore_C
// (None)

class UClass* UMissionGen_HighScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_HighScore_C");

	return Clss;
}


// MissionGen_HighScore_C MissionGen_HighScore.Default__MissionGen_HighScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_HighScore_C* UMissionGen_HighScore_C::GetDefaultObj()
{
	static class UMissionGen_HighScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_HighScore_C*>(UMissionGen_HighScore_C::StaticClass()->DefaultObject);

	return Default;
}

}


