#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C
// (None)

class UClass* UPlayerCameraMode1P_Targeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCameraMode1P_Targeting_C");

	return Clss;
}


// PlayerCameraMode1P_Targeting_C PlayerCameraMode1P_Targeting.Default__PlayerCameraMode1P_Targeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerCameraMode1P_Targeting_C* UPlayerCameraMode1P_Targeting_C::GetDefaultObj()
{
	static class UPlayerCameraMode1P_Targeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCameraMode1P_Targeting_C*>(UPlayerCameraMode1P_Targeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


