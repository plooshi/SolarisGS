#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Outline.TextStyle-Button-Outline_C
// (None)

class UClass* UTextStyleMinusButtonMinusOutline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Outline_C");

	return Clss;
}


// TextStyle-Button-Outline_C TextStyle-Button-Outline.Default__TextStyle-Button-Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusOutline_C* UTextStyleMinusButtonMinusOutline_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusOutline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusOutline_C*>(UTextStyleMinusButtonMinusOutline_C::StaticClass()->DefaultObject);

	return Default;
}

}


