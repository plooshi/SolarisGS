#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mansion_Deco_Statue_02.Mansion_Deco_Statue_02_C
// (Actor)

class UClass* AMansion_Deco_Statue_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mansion_Deco_Statue_02_C");

	return Clss;
}


// Mansion_Deco_Statue_02_C Mansion_Deco_Statue_02.Default__Mansion_Deco_Statue_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMansion_Deco_Statue_02_C* AMansion_Deco_Statue_02_C::GetDefaultObj()
{
	static class AMansion_Deco_Statue_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMansion_Deco_Statue_02_C*>(AMansion_Deco_Statue_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


