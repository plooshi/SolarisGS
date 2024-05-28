#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Slide.MissionGen_Slide_C
// (None)

class UClass* UMissionGen_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Slide_C");

	return Clss;
}


// MissionGen_Slide_C MissionGen_Slide.Default__MissionGen_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Slide_C* UMissionGen_Slide_C::GetDefaultObj()
{
	static class UMissionGen_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Slide_C*>(UMissionGen_Slide_C::StaticClass()->DefaultObject);

	return Default;
}

}


