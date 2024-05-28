#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jackal_CameraMode_Sprint.Jackal_CameraMode_Sprint_C
// (None)

class UClass* UJackal_CameraMode_Sprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jackal_CameraMode_Sprint_C");

	return Clss;
}


// Jackal_CameraMode_Sprint_C Jackal_CameraMode_Sprint.Default__Jackal_CameraMode_Sprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJackal_CameraMode_Sprint_C* UJackal_CameraMode_Sprint_C::GetDefaultObj()
{
	static class UJackal_CameraMode_Sprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJackal_CameraMode_Sprint_C*>(UJackal_CameraMode_Sprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


