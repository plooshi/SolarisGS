#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_DeimosLarge.MissionGen_DeimosLarge_C
// (None)

class UClass* UMissionGen_DeimosLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_DeimosLarge_C");

	return Clss;
}


// MissionGen_DeimosLarge_C MissionGen_DeimosLarge.Default__MissionGen_DeimosLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_DeimosLarge_C* UMissionGen_DeimosLarge_C::GetDefaultObj()
{
	static class UMissionGen_DeimosLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_DeimosLarge_C*>(UMissionGen_DeimosLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


