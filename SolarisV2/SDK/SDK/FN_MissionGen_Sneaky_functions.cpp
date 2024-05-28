#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Sneaky.MissionGen_Sneaky_C
// (None)

class UClass* UMissionGen_Sneaky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Sneaky_C");

	return Clss;
}


// MissionGen_Sneaky_C MissionGen_Sneaky.Default__MissionGen_Sneaky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Sneaky_C* UMissionGen_Sneaky_C::GetDefaultObj()
{
	static class UMissionGen_Sneaky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Sneaky_C*>(UMissionGen_Sneaky_C::StaticClass()->DefaultObject);

	return Default;
}

}


