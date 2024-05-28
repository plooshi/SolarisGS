#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Large_Explosion_CameraShake.B_Large_Explosion_CameraShake_C
// (None)

class UClass* UB_Large_Explosion_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Large_Explosion_CameraShake_C");

	return Clss;
}


// B_Large_Explosion_CameraShake_C B_Large_Explosion_CameraShake.Default__B_Large_Explosion_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_Large_Explosion_CameraShake_C* UB_Large_Explosion_CameraShake_C::GetDefaultObj()
{
	static class UB_Large_Explosion_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_Large_Explosion_CameraShake_C*>(UB_Large_Explosion_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


