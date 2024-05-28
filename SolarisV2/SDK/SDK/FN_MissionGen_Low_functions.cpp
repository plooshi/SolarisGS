#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Low.MissionGen_Low_C
// (None)

class UClass* UMissionGen_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Low_C");

	return Clss;
}


// MissionGen_Low_C MissionGen_Low.Default__MissionGen_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Low_C* UMissionGen_Low_C::GetDefaultObj()
{
	static class UMissionGen_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Low_C*>(UMissionGen_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


