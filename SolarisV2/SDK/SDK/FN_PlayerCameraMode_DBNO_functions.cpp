#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
// (None)

class UClass* UPlayerCameraMode_DBNO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCameraMode_DBNO_C");

	return Clss;
}


// PlayerCameraMode_DBNO_C PlayerCameraMode_DBNO.Default__PlayerCameraMode_DBNO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerCameraMode_DBNO_C* UPlayerCameraMode_DBNO_C::GetDefaultObj()
{
	static class UPlayerCameraMode_DBNO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCameraMode_DBNO_C*>(UPlayerCameraMode_DBNO_C::StaticClass()->DefaultObject);

	return Default;
}

}


