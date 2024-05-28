#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Ostrich_JumpFullCharge.CameraShake_Ostrich_JumpFullCharge_C
// (None)

class UClass* UCameraShake_Ostrich_JumpFullCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Ostrich_JumpFullCharge_C");

	return Clss;
}


// CameraShake_Ostrich_JumpFullCharge_C CameraShake_Ostrich_JumpFullCharge.Default__CameraShake_Ostrich_JumpFullCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Ostrich_JumpFullCharge_C* UCameraShake_Ostrich_JumpFullCharge_C::GetDefaultObj()
{
	static class UCameraShake_Ostrich_JumpFullCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Ostrich_JumpFullCharge_C*>(UCameraShake_Ostrich_JumpFullCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


