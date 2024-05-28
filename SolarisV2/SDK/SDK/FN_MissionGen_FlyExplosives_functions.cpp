#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_FlyExplosives.MissionGen_FlyExplosives_C
// (None)

class UClass* UMissionGen_FlyExplosives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_FlyExplosives_C");

	return Clss;
}


// MissionGen_FlyExplosives_C MissionGen_FlyExplosives.Default__MissionGen_FlyExplosives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_FlyExplosives_C* UMissionGen_FlyExplosives_C::GetDefaultObj()
{
	static class UMissionGen_FlyExplosives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_FlyExplosives_C*>(UMissionGen_FlyExplosives_C::StaticClass()->DefaultObject);

	return Default;
}

}


