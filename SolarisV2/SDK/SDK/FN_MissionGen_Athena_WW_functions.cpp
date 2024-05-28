#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Athena_WW.MissionGen_Athena_WW_C
// (None)

class UClass* UMissionGen_Athena_WW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Athena_WW_C");

	return Clss;
}


// MissionGen_Athena_WW_C MissionGen_Athena_WW.Default__MissionGen_Athena_WW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Athena_WW_C* UMissionGen_Athena_WW_C::GetDefaultObj()
{
	static class UMissionGen_Athena_WW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Athena_WW_C*>(UMissionGen_Athena_WW_C::StaticClass()->DefaultObject);

	return Default;
}

}


