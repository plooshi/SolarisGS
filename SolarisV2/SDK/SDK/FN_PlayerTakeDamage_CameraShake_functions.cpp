#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
// (None)

class UClass* UPlayerTakeDamage_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTakeDamage_CameraShake_C");

	return Clss;
}


// PlayerTakeDamage_CameraShake_C PlayerTakeDamage_CameraShake.Default__PlayerTakeDamage_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTakeDamage_CameraShake_C* UPlayerTakeDamage_CameraShake_C::GetDefaultObj()
{
	static class UPlayerTakeDamage_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTakeDamage_CameraShake_C*>(UPlayerTakeDamage_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


