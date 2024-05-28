#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_SkytubeVelocity.CameraShake_SkytubeVelocity_C
// (None)

class UClass* UCameraShake_SkytubeVelocity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_SkytubeVelocity_C");

	return Clss;
}


// CameraShake_SkytubeVelocity_C CameraShake_SkytubeVelocity.Default__CameraShake_SkytubeVelocity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_SkytubeVelocity_C* UCameraShake_SkytubeVelocity_C::GetDefaultObj()
{
	static class UCameraShake_SkytubeVelocity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_SkytubeVelocity_C*>(UCameraShake_SkytubeVelocity_C::StaticClass()->DefaultObject);

	return Default;
}

}


