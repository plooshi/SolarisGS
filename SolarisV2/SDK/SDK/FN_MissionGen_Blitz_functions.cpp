#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Blitz.MissionGen_Blitz_C
// (None)

class UClass* UMissionGen_Blitz_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Blitz_C");

	return Clss;
}


// MissionGen_Blitz_C MissionGen_Blitz.Default__MissionGen_Blitz_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Blitz_C* UMissionGen_Blitz_C::GetDefaultObj()
{
	static class UMissionGen_Blitz_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Blitz_C*>(UMissionGen_Blitz_C::StaticClass()->DefaultObject);

	return Default;
}

}


