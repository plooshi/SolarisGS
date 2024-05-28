#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Lite.MissionGen_Lite_C
// (None)

class UClass* UMissionGen_Lite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Lite_C");

	return Clss;
}


// MissionGen_Lite_C MissionGen_Lite.Default__MissionGen_Lite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Lite_C* UMissionGen_Lite_C::GetDefaultObj()
{
	static class UMissionGen_Lite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Lite_C*>(UMissionGen_Lite_C::StaticClass()->DefaultObject);

	return Default;
}

}


