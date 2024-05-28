#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Ostrich_Shotgun_Fire.B_CameraLens_Ostrich_Shotgun_Fire_C
// (Actor)

class UClass* AB_CameraLens_Ostrich_Shotgun_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Ostrich_Shotgun_Fire_C");

	return Clss;
}


// B_CameraLens_Ostrich_Shotgun_Fire_C B_CameraLens_Ostrich_Shotgun_Fire.Default__B_CameraLens_Ostrich_Shotgun_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Ostrich_Shotgun_Fire_C* AB_CameraLens_Ostrich_Shotgun_Fire_C::GetDefaultObj()
{
	static class AB_CameraLens_Ostrich_Shotgun_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Ostrich_Shotgun_Fire_C*>(AB_CameraLens_Ostrich_Shotgun_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


