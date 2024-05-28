#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Melee_CameraShake.Melee_CameraShake_C
// (None)

class UClass* UMelee_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Melee_CameraShake_C");

	return Clss;
}


// Melee_CameraShake_C Melee_CameraShake.Default__Melee_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMelee_CameraShake_C* UMelee_CameraShake_C::GetDefaultObj()
{
	static class UMelee_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMelee_CameraShake_C*>(UMelee_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


