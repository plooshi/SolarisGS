#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Yellow.TextStyle-Base-S-B-Yellow_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Yellow_C");

	return Clss;
}


// TextStyle-Base-S-B-Yellow_C TextStyle-Base-S-B-Yellow.Default__TextStyle-Base-S-B-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusYellow_C* UTextStyleMinusBaseMinusSMinusBMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusYellow_C*>(UTextStyleMinusBaseMinusSMinusBMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


