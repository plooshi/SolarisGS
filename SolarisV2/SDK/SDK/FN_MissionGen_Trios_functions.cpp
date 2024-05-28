#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Trios.MissionGen_Trios_C
// (None)

class UClass* UMissionGen_Trios_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Trios_C");

	return Clss;
}


// MissionGen_Trios_C MissionGen_Trios.Default__MissionGen_Trios_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Trios_C* UMissionGen_Trios_C::GetDefaultObj()
{
	static class UMissionGen_Trios_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Trios_C*>(UMissionGen_Trios_C::StaticClass()->DefaultObject);

	return Default;
}

}


