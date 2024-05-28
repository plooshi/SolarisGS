#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_GrenadeCameraShake.B_GrenadeCameraShake_C
// (None)

class UClass* UB_GrenadeCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_GrenadeCameraShake_C");

	return Clss;
}


// B_GrenadeCameraShake_C B_GrenadeCameraShake.Default__B_GrenadeCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_GrenadeCameraShake_C* UB_GrenadeCameraShake_C::GetDefaultObj()
{
	static class UB_GrenadeCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_GrenadeCameraShake_C*>(UB_GrenadeCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


