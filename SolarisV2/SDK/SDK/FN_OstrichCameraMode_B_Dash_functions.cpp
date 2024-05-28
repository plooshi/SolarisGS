#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OstrichCameraMode_B_Dash.OstrichCameraMode_B_Dash_C
// (None)

class UClass* UOstrichCameraMode_B_Dash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OstrichCameraMode_B_Dash_C");

	return Clss;
}


// OstrichCameraMode_B_Dash_C OstrichCameraMode_B_Dash.Default__OstrichCameraMode_B_Dash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrichCameraMode_B_Dash_C* UOstrichCameraMode_B_Dash_C::GetDefaultObj()
{
	static class UOstrichCameraMode_B_Dash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrichCameraMode_B_Dash_C*>(UOstrichCameraMode_B_Dash_C::StaticClass()->DefaultObject);

	return Default;
}

}


