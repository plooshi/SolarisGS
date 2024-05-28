#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C
// (None)

class UClass* UPlayerCameraMode1P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCameraMode1P_C");

	return Clss;
}


// PlayerCameraMode1P_C PlayerCameraMode1P.Default__PlayerCameraMode1P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerCameraMode1P_C* UPlayerCameraMode1P_C::GetDefaultObj()
{
	static class UPlayerCameraMode1P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCameraMode1P_C*>(UPlayerCameraMode1P_C::StaticClass()->DefaultObject);

	return Default;
}

}


