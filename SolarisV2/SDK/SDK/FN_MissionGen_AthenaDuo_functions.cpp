#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaDuo.MissionGen_AthenaDuo_C
// (None)

class UClass* UMissionGen_AthenaDuo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaDuo_C");

	return Clss;
}


// MissionGen_AthenaDuo_C MissionGen_AthenaDuo.Default__MissionGen_AthenaDuo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaDuo_C* UMissionGen_AthenaDuo_C::GetDefaultObj()
{
	static class UMissionGen_AthenaDuo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaDuo_C*>(UMissionGen_AthenaDuo_C::StaticClass()->DefaultObject);

	return Default;
}

}


