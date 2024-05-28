#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mansion_Rug_03.Mansion_Rug_03_C
// (Actor)

class UClass* AMansion_Rug_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mansion_Rug_03_C");

	return Clss;
}


// Mansion_Rug_03_C Mansion_Rug_03.Default__Mansion_Rug_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMansion_Rug_03_C* AMansion_Rug_03_C::GetDefaultObj()
{
	static class AMansion_Rug_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMansion_Rug_03_C*>(AMansion_Rug_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


