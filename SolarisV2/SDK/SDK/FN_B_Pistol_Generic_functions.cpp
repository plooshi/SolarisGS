#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Pistol_Generic.B_Pistol_Generic_C
// (Actor)

class UClass* AB_Pistol_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Pistol_Generic_C");

	return Clss;
}


// B_Pistol_Generic_C B_Pistol_Generic.Default__B_Pistol_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Pistol_Generic_C* AB_Pistol_Generic_C::GetDefaultObj()
{
	static class AB_Pistol_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Pistol_Generic_C*>(AB_Pistol_Generic_C::StaticClass()->DefaultObject);

	return Default;
}

}


