#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Ashton.MissionGen_Ashton_C
// (None)

class UClass* UMissionGen_Ashton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Ashton_C");

	return Clss;
}


// MissionGen_Ashton_C MissionGen_Ashton.Default__MissionGen_Ashton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Ashton_C* UMissionGen_Ashton_C::GetDefaultObj()
{
	static class UMissionGen_Ashton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Ashton_C*>(UMissionGen_Ashton_C::StaticClass()->DefaultObject);

	return Default;
}

}


