#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_ZipLineAttach.CameraShake_ZipLineAttach_C
// (None)

class UClass* UCameraShake_ZipLineAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_ZipLineAttach_C");

	return Clss;
}


// CameraShake_ZipLineAttach_C CameraShake_ZipLineAttach.Default__CameraShake_ZipLineAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_ZipLineAttach_C* UCameraShake_ZipLineAttach_C::GetDefaultObj()
{
	static class UCameraShake_ZipLineAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_ZipLineAttach_C*>(UCameraShake_ZipLineAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}


