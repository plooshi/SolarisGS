#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Wax.MissionGen_Wax_C
// (None)

class UClass* UMissionGen_Wax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Wax_C");

	return Clss;
}


// MissionGen_Wax_C MissionGen_Wax.Default__MissionGen_Wax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Wax_C* UMissionGen_Wax_C::GetDefaultObj()
{
	static class UMissionGen_Wax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Wax_C*>(UMissionGen_Wax_C::StaticClass()->DefaultObject);

	return Default;
}

}


