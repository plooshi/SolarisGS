#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-L-Disabled.TextStyle-Button-Primary-L-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-L-Disabled_C");

	return Clss;
}


// TextStyle-Button-Primary-L-Disabled_C TextStyle-Button-Primary-L-Disabled.Default__TextStyle-Button-Primary-L-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C* UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C*>(UTextStyleMinusButtonMinusPrimaryMinusLMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


