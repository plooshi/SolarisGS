#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-White50.TextStyle-Base-S-White50_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusWhite50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-White50_C");

	return Clss;
}


// TextStyle-Base-S-White50_C TextStyle-Base-S-White50.Default__TextStyle-Base-S-White50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusWhite50_C* UTextStyleMinusBaseMinusSMinusWhite50_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusWhite50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusWhite50_C*>(UTextStyleMinusBaseMinusSMinusWhite50_C::StaticClass()->DefaultObject);

	return Default;
}

}


