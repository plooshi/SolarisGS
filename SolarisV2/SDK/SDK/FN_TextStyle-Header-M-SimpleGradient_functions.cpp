#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-SimpleGradient.TextStyle-Header-M-SimpleGradient_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusSimpleGradient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-SimpleGradient_C");

	return Clss;
}


// TextStyle-Header-M-SimpleGradient_C TextStyle-Header-M-SimpleGradient.Default__TextStyle-Header-M-SimpleGradient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusSimpleGradient_C* UTextStyleMinusHeaderMinusMMinusSimpleGradient_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusSimpleGradient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusSimpleGradient_C*>(UTextStyleMinusHeaderMinusMMinusSimpleGradient_C::StaticClass()->DefaultObject);

	return Default;
}

}


