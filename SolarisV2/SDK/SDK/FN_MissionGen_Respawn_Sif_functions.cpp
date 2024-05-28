#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Respawn_Sif.MissionGen_Respawn_Sif_C
// (None)

class UClass* UMissionGen_Respawn_Sif_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Respawn_Sif_C");

	return Clss;
}


// MissionGen_Respawn_Sif_C MissionGen_Respawn_Sif.Default__MissionGen_Respawn_Sif_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Respawn_Sif_C* UMissionGen_Respawn_Sif_C::GetDefaultObj()
{
	static class UMissionGen_Respawn_Sif_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Respawn_Sif_C*>(UMissionGen_Respawn_Sif_C::StaticClass()->DefaultObject);

	return Default;
}

}


