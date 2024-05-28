#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Fill.MissionGen_Fill_C
// (None)

class UClass* UMissionGen_Fill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Fill_C");

	return Clss;
}


// MissionGen_Fill_C MissionGen_Fill.Default__MissionGen_Fill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Fill_C* UMissionGen_Fill_C::GetDefaultObj()
{
	static class UMissionGen_Fill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Fill_C*>(UMissionGen_Fill_C::StaticClass()->DefaultObject);

	return Default;
}

}


