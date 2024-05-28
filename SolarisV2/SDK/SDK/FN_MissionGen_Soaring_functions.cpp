#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Soaring.MissionGen_Soaring_C
// (None)

class UClass* UMissionGen_Soaring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Soaring_C");

	return Clss;
}


// MissionGen_Soaring_C MissionGen_Soaring.Default__MissionGen_Soaring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Soaring_C* UMissionGen_Soaring_C::GetDefaultObj()
{
	static class UMissionGen_Soaring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Soaring_C*>(UMissionGen_Soaring_C::StaticClass()->DefaultObject);

	return Default;
}

}


