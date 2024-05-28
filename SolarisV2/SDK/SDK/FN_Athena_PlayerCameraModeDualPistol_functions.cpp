#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeDualPistol.Athena_PlayerCameraModeDualPistol_C
// (None)

class UClass* UAthena_PlayerCameraModeDualPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeDualPistol_C");

	return Clss;
}


// Athena_PlayerCameraModeDualPistol_C Athena_PlayerCameraModeDualPistol.Default__Athena_PlayerCameraModeDualPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeDualPistol_C* UAthena_PlayerCameraModeDualPistol_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeDualPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeDualPistol_C*>(UAthena_PlayerCameraModeDualPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


