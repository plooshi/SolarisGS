#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Black.TextStyle-Base-S-B-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Black_C");

	return Clss;
}


// TextStyle-Base-S-B-Black_C TextStyle-Base-S-B-Black.Default__TextStyle-Base-S-B-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusBlack_C* UTextStyleMinusBaseMinusSMinusBMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusBlack_C*>(UTextStyleMinusBaseMinusSMinusBMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


