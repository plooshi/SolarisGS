#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HoverboardCameraMode.HoverboardCameraMode_C
// (None)

class UClass* UHoverboardCameraMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverboardCameraMode_C");

	return Clss;
}


// HoverboardCameraMode_C HoverboardCameraMode.Default__HoverboardCameraMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHoverboardCameraMode_C* UHoverboardCameraMode_C::GetDefaultObj()
{
	static class UHoverboardCameraMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoverboardCameraMode_C*>(UHoverboardCameraMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


