#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Speed_CameraShake.Speed_CameraShake_C
// (None)

class UClass* USpeed_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Speed_CameraShake_C");

	return Clss;
}


// Speed_CameraShake_C Speed_CameraShake.Default__Speed_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpeed_CameraShake_C* USpeed_CameraShake_C::GetDefaultObj()
{
	static class USpeed_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpeed_CameraShake_C*>(USpeed_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


