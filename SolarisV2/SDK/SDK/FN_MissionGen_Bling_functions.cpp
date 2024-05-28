#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Bling.MissionGen_Bling_C
// (None)

class UClass* UMissionGen_Bling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Bling_C");

	return Clss;
}


// MissionGen_Bling_C MissionGen_Bling.Default__MissionGen_Bling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Bling_C* UMissionGen_Bling_C::GetDefaultObj()
{
	static class UMissionGen_Bling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Bling_C*>(UMissionGen_Bling_C::StaticClass()->DefaultObject);

	return Default;
}

}


