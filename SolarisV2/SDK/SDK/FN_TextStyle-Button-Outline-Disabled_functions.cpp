#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Outline-Disabled.TextStyle-Button-Outline-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusOutlineMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Outline-Disabled_C");

	return Clss;
}


// TextStyle-Button-Outline-Disabled_C TextStyle-Button-Outline-Disabled.Default__TextStyle-Button-Outline-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusOutlineMinusDisabled_C* UTextStyleMinusButtonMinusOutlineMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusOutlineMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusOutlineMinusDisabled_C*>(UTextStyleMinusButtonMinusOutlineMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


