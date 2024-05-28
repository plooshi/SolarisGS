#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-M-Disabled.TextStyle-Button-Primary-M-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-M-Disabled_C");

	return Clss;
}


// TextStyle-Button-Primary-M-Disabled_C TextStyle-Button-Primary-M-Disabled.Default__TextStyle-Button-Primary-M-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C* UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C*>(UTextStyleMinusButtonMinusPrimaryMinusMMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


