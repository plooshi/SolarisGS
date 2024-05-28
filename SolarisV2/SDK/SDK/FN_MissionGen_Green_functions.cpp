#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Green.MissionGen_Green_C
// (None)

class UClass* UMissionGen_Green_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Green_C");

	return Clss;
}


// MissionGen_Green_C MissionGen_Green.Default__MissionGen_Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Green_C* UMissionGen_Green_C::GetDefaultObj()
{
	static class UMissionGen_Green_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Green_C*>(UMissionGen_Green_C::StaticClass()->DefaultObject);

	return Default;
}

}


