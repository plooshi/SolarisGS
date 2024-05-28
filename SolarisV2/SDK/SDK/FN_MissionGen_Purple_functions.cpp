#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Purple.MissionGen_Purple_C
// (None)

class UClass* UMissionGen_Purple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Purple_C");

	return Clss;
}


// MissionGen_Purple_C MissionGen_Purple.Default__MissionGen_Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Purple_C* UMissionGen_Purple_C::GetDefaultObj()
{
	static class UMissionGen_Purple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Purple_C*>(UMissionGen_Purple_C::StaticClass()->DefaultObject);

	return Default;
}

}


