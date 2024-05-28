#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Spooky_Dive.CamShake_Spooky_Dive_C
// (None)

class UClass* UCamShake_Spooky_Dive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Spooky_Dive_C");

	return Clss;
}


// CamShake_Spooky_Dive_C CamShake_Spooky_Dive.Default__CamShake_Spooky_Dive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Spooky_Dive_C* UCamShake_Spooky_Dive_C::GetDefaultObj()
{
	static class UCamShake_Spooky_Dive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Spooky_Dive_C*>(UCamShake_Spooky_Dive_C::StaticClass()->DefaultObject);

	return Default;
}

}


