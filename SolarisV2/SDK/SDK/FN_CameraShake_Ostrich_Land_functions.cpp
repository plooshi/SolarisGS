#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Ostrich_Land.CameraShake_Ostrich_Land_C
// (None)

class UClass* UCameraShake_Ostrich_Land_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Ostrich_Land_C");

	return Clss;
}


// CameraShake_Ostrich_Land_C CameraShake_Ostrich_Land.Default__CameraShake_Ostrich_Land_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Ostrich_Land_C* UCameraShake_Ostrich_Land_C::GetDefaultObj()
{
	static class UCameraShake_Ostrich_Land_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Ostrich_Land_C*>(UCameraShake_Ostrich_Land_C::StaticClass()->DefaultObject);

	return Default;
}

}


