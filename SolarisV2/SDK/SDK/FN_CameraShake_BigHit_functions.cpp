#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_BigHit.CameraShake_BigHit_C
// (None)

class UClass* UCameraShake_BigHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_BigHit_C");

	return Clss;
}


// CameraShake_BigHit_C CameraShake_BigHit.Default__CameraShake_BigHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_BigHit_C* UCameraShake_BigHit_C::GetDefaultObj()
{
	static class UCameraShake_BigHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_BigHit_C*>(UCameraShake_BigHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


