#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Red-Outline.TextStyle-Base-XS-B-Red-Outline_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Red-Outline_C");

	return Clss;
}


// TextStyle-Base-XS-B-Red-Outline_C TextStyle-Base-XS-B-Red-Outline.Default__TextStyle-Base-XS-B-Red-Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C* UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C*>(UTextStyleMinusBaseMinusXSMinusBMinusRedMinusOutline_C::StaticClass()->DefaultObject);

	return Default;
}

}


