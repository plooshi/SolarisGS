#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Disco.MissionGen_Disco_C
// (None)

class UClass* UMissionGen_Disco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Disco_C");

	return Clss;
}


// MissionGen_Disco_C MissionGen_Disco.Default__MissionGen_Disco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Disco_C* UMissionGen_Disco_C::GetDefaultObj()
{
	static class UMissionGen_Disco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Disco_C*>(UMissionGen_Disco_C::StaticClass()->DefaultObject);

	return Default;
}

}


