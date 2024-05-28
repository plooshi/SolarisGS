#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Behind.MissionGen_Behind_C
// (None)

class UClass* UMissionGen_Behind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Behind_C");

	return Clss;
}


// MissionGen_Behind_C MissionGen_Behind.Default__MissionGen_Behind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Behind_C* UMissionGen_Behind_C::GetDefaultObj()
{
	static class UMissionGen_Behind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Behind_C*>(UMissionGen_Behind_C::StaticClass()->DefaultObject);

	return Default;
}

}


