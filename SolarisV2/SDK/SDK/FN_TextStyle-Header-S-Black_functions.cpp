#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-Black.TextStyle-Header-S-Black_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-Black_C");

	return Clss;
}


// TextStyle-Header-S-Black_C TextStyle-Header-S-Black.Default__TextStyle-Header-S-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinusBlack_C* UTextStyleMinusHeaderMinusSMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinusBlack_C*>(UTextStyleMinusHeaderMinusSMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


