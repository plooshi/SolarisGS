#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Pedal.CameraShake_Pedal_C
// (None)

class UClass* UCameraShake_Pedal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Pedal_C");

	return Clss;
}


// CameraShake_Pedal_C CameraShake_Pedal.Default__CameraShake_Pedal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Pedal_C* UCameraShake_Pedal_C::GetDefaultObj()
{
	static class UCameraShake_Pedal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Pedal_C*>(UCameraShake_Pedal_C::StaticClass()->DefaultObject);

	return Default;
}

}


