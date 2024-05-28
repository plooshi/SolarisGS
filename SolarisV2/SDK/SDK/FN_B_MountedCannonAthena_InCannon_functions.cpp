#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_MountedCannonAthena_InCannon.B_MountedCannonAthena_InCannon_C
// (Actor)

class UClass* AB_MountedCannonAthena_InCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MountedCannonAthena_InCannon_C");

	return Clss;
}


// B_MountedCannonAthena_InCannon_C B_MountedCannonAthena_InCannon.Default__B_MountedCannonAthena_InCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_MountedCannonAthena_InCannon_C* AB_MountedCannonAthena_InCannon_C::GetDefaultObj()
{
	static class AB_MountedCannonAthena_InCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_MountedCannonAthena_InCannon_C*>(AB_MountedCannonAthena_InCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


