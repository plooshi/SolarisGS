#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Music.MissionGen_Music_C
// (None)

class UClass* UMissionGen_Music_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Music_C");

	return Clss;
}


// MissionGen_Music_C MissionGen_Music.Default__MissionGen_Music_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Music_C* UMissionGen_Music_C::GetDefaultObj()
{
	static class UMissionGen_Music_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Music_C*>(UMissionGen_Music_C::StaticClass()->DefaultObject);

	return Default;
}

}


