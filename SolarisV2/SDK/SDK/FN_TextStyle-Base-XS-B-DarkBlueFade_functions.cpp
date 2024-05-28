#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-DarkBlueFade.TextStyle-Base-XS-B-DarkBlueFade_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-DarkBlueFade_C");

	return Clss;
}


// TextStyle-Base-XS-B-DarkBlueFade_C TextStyle-Base-XS-B-DarkBlueFade.Default__TextStyle-Base-XS-B-DarkBlueFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C* UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C*>(UTextStyleMinusBaseMinusXSMinusBMinusDarkBlueFade_C::StaticClass()->DefaultObject);

	return Default;
}

}


