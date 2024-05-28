#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Ostrich_Ground_CameraShake_Heavy.B_Ostrich_Ground_CameraShake_Heavy_C
// (None)

class UClass* UB_Ostrich_Ground_CameraShake_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Ostrich_Ground_CameraShake_Heavy_C");

	return Clss;
}


// B_Ostrich_Ground_CameraShake_Heavy_C B_Ostrich_Ground_CameraShake_Heavy.Default__B_Ostrich_Ground_CameraShake_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_Ostrich_Ground_CameraShake_Heavy_C* UB_Ostrich_Ground_CameraShake_Heavy_C::GetDefaultObj()
{
	static class UB_Ostrich_Ground_CameraShake_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_Ostrich_Ground_CameraShake_Heavy_C*>(UB_Ostrich_Ground_CameraShake_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


