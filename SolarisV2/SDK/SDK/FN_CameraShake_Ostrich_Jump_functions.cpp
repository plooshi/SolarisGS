#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Ostrich_Jump.CameraShake_Ostrich_Jump_C
// (None)

class UClass* UCameraShake_Ostrich_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Ostrich_Jump_C");

	return Clss;
}


// CameraShake_Ostrich_Jump_C CameraShake_Ostrich_Jump.Default__CameraShake_Ostrich_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Ostrich_Jump_C* UCameraShake_Ostrich_Jump_C::GetDefaultObj()
{
	static class UCameraShake_Ostrich_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Ostrich_Jump_C*>(UCameraShake_Ostrich_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


