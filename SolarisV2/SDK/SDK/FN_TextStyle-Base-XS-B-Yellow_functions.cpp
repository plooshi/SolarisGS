#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Yellow.TextStyle-Base-XS-B-Yellow_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Yellow_C");

	return Clss;
}


// TextStyle-Base-XS-B-Yellow_C TextStyle-Base-XS-B-Yellow.Default__TextStyle-Base-XS-B-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusYellow_C* UTextStyleMinusBaseMinusXSMinusBMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusYellow_C*>(UTextStyleMinusBaseMinusXSMinusBMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


