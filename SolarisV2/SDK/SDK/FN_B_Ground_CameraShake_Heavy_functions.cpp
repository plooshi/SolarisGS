#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Ground_CameraShake_Heavy.B_Ground_CameraShake_Heavy_C
// (None)

class UClass* UB_Ground_CameraShake_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Ground_CameraShake_Heavy_C");

	return Clss;
}


// B_Ground_CameraShake_Heavy_C B_Ground_CameraShake_Heavy.Default__B_Ground_CameraShake_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_Ground_CameraShake_Heavy_C* UB_Ground_CameraShake_Heavy_C::GetDefaultObj()
{
	static class UB_Ground_CameraShake_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_Ground_CameraShake_Heavy_C*>(UB_Ground_CameraShake_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


