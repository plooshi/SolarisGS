#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-B-Yellow.TextStyle-Base-L-B-Yellow_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusBMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-B-Yellow_C");

	return Clss;
}


// TextStyle-Base-L-B-Yellow_C TextStyle-Base-L-B-Yellow.Default__TextStyle-Base-L-B-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusBMinusYellow_C* UTextStyleMinusBaseMinusLMinusBMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusBMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusBMinusYellow_C*>(UTextStyleMinusBaseMinusLMinusBMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


