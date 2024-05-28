#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Mash.MissionGen_Mash_C
// (None)

class UClass* UMissionGen_Mash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Mash_C");

	return Clss;
}


// MissionGen_Mash_C MissionGen_Mash.Default__MissionGen_Mash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Mash_C* UMissionGen_Mash_C::GetDefaultObj()
{
	static class UMissionGen_Mash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Mash_C*>(UMissionGen_Mash_C::StaticClass()->DefaultObject);

	return Default;
}

}


