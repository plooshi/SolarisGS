#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Soaring_50s.MissionGen_Soaring_50s_C
// (None)

class UClass* UMissionGen_Soaring_50s_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Soaring_50s_C");

	return Clss;
}


// MissionGen_Soaring_50s_C MissionGen_Soaring_50s.Default__MissionGen_Soaring_50s_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Soaring_50s_C* UMissionGen_Soaring_50s_C::GetDefaultObj()
{
	static class UMissionGen_Soaring_50s_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Soaring_50s_C*>(UMissionGen_Soaring_50s_C::StaticClass()->DefaultObject);

	return Default;
}

}


