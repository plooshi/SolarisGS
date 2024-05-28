#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Snipers.MissionGen_Snipers_C
// (None)

class UClass* UMissionGen_Snipers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Snipers_C");

	return Clss;
}


// MissionGen_Snipers_C MissionGen_Snipers.Default__MissionGen_Snipers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Snipers_C* UMissionGen_Snipers_C::GetDefaultObj()
{
	static class UMissionGen_Snipers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Snipers_C*>(UMissionGen_Snipers_C::StaticClass()->DefaultObject);

	return Default;
}

}


