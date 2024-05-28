#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Auto.MissionGen_Auto_C
// (None)

class UClass* UMissionGen_Auto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Auto_C");

	return Clss;
}


// MissionGen_Auto_C MissionGen_Auto.Default__MissionGen_Auto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Auto_C* UMissionGen_Auto_C::GetDefaultObj()
{
	static class UMissionGen_Auto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Auto_C*>(UMissionGen_Auto_C::StaticClass()->DefaultObject);

	return Default;
}

}


