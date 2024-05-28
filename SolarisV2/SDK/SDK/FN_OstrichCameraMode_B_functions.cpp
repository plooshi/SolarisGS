#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OstrichCameraMode_B.OstrichCameraMode_B_C
// (None)

class UClass* UOstrichCameraMode_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OstrichCameraMode_B_C");

	return Clss;
}


// OstrichCameraMode_B_C OstrichCameraMode_B.Default__OstrichCameraMode_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrichCameraMode_B_C* UOstrichCameraMode_B_C::GetDefaultObj()
{
	static class UOstrichCameraMode_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrichCameraMode_B_C*>(UOstrichCameraMode_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


