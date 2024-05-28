#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_BookPile_01.Prop_BookPile_01_C
// (Actor)

class UClass* AProp_BookPile_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_BookPile_01_C");

	return Clss;
}


// Prop_BookPile_01_C Prop_BookPile_01.Default__Prop_BookPile_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_BookPile_01_C* AProp_BookPile_01_C::GetDefaultObj()
{
	static class AProp_BookPile_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_BookPile_01_C*>(AProp_BookPile_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


