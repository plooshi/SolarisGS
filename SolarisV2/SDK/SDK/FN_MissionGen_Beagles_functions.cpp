#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Beagles.MissionGen_Beagles_C
// (None)

class UClass* UMissionGen_Beagles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Beagles_C");

	return Clss;
}


// MissionGen_Beagles_C MissionGen_Beagles.Default__MissionGen_Beagles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Beagles_C* UMissionGen_Beagles_C::GetDefaultObj()
{
	static class UMissionGen_Beagles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Beagles_C*>(UMissionGen_Beagles_C::StaticClass()->DefaultObject);

	return Default;
}

}


