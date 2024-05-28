#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Creative_Vigilante.MissionGen_Creative_Vigilante_C
// (None)

class UClass* UMissionGen_Creative_Vigilante_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Creative_Vigilante_C");

	return Clss;
}


// MissionGen_Creative_Vigilante_C MissionGen_Creative_Vigilante.Default__MissionGen_Creative_Vigilante_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Creative_Vigilante_C* UMissionGen_Creative_Vigilante_C::GetDefaultObj()
{
	static class UMissionGen_Creative_Vigilante_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Creative_Vigilante_C*>(UMissionGen_Creative_Vigilante_C::StaticClass()->DefaultObject);

	return Default;
}

}


