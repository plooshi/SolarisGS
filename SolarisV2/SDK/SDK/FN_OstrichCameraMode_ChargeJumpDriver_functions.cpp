#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OstrichCameraMode_ChargeJumpDriver.OstrichCameraMode_ChargeJumpDriver_C
// (None)

class UClass* UOstrichCameraMode_ChargeJumpDriver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OstrichCameraMode_ChargeJumpDriver_C");

	return Clss;
}


// OstrichCameraMode_ChargeJumpDriver_C OstrichCameraMode_ChargeJumpDriver.Default__OstrichCameraMode_ChargeJumpDriver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrichCameraMode_ChargeJumpDriver_C* UOstrichCameraMode_ChargeJumpDriver_C::GetDefaultObj()
{
	static class UOstrichCameraMode_ChargeJumpDriver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrichCameraMode_ChargeJumpDriver_C*>(UOstrichCameraMode_ChargeJumpDriver_C::StaticClass()->DefaultObject);

	return Default;
}

}


