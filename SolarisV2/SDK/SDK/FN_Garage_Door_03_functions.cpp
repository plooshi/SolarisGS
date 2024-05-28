#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Garage_Door_03.Garage_Door_03_C
// (Actor)

class UClass* AGarage_Door_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Garage_Door_03_C");

	return Clss;
}


// Garage_Door_03_C Garage_Door_03.Default__Garage_Door_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGarage_Door_03_C* AGarage_Door_03_C::GetDefaultObj()
{
	static class AGarage_Door_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGarage_Door_03_C*>(AGarage_Door_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


