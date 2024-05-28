#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_CreativeLTM.MissionGen_CreativeLTM_C
// (None)

class UClass* UMissionGen_CreativeLTM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_CreativeLTM_C");

	return Clss;
}


// MissionGen_CreativeLTM_C MissionGen_CreativeLTM.Default__MissionGen_CreativeLTM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_CreativeLTM_C* UMissionGen_CreativeLTM_C::GetDefaultObj()
{
	static class UMissionGen_CreativeLTM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_CreativeLTM_C*>(UMissionGen_CreativeLTM_C::StaticClass()->DefaultObject);

	return Default;
}

}


