#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
// (None)

class UClass* USTW_PlayerCameraModeMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeMelee_C");

	return Clss;
}


// STW_PlayerCameraModeMelee_C STW_PlayerCameraModeMelee.Default__STW_PlayerCameraModeMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeMelee_C* USTW_PlayerCameraModeMelee_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeMelee_C*>(USTW_PlayerCameraModeMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


