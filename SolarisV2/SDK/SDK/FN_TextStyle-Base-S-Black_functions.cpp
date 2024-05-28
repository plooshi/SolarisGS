#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-Black.TextStyle-Base-S-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-Black_C");

	return Clss;
}


// TextStyle-Base-S-Black_C TextStyle-Base-S-Black.Default__TextStyle-Base-S-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBlack_C* UTextStyleMinusBaseMinusSMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBlack_C*>(UTextStyleMinusBaseMinusSMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


