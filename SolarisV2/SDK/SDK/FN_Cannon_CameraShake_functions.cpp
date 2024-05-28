#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cannon_CameraShake.Cannon_CameraShake_C
// (None)

class UClass* UCannon_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cannon_CameraShake_C");

	return Clss;
}


// Cannon_CameraShake_C Cannon_CameraShake.Default__Cannon_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCannon_CameraShake_C* UCannon_CameraShake_C::GetDefaultObj()
{
	static class UCannon_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCannon_CameraShake_C*>(UCannon_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


