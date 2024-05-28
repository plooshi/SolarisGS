#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-B-Red.TextStyle-Base-XXS-B-Red_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusBMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-B-Red_C");

	return Clss;
}


// TextStyle-Base-XXS-B-Red_C TextStyle-Base-XXS-B-Red.Default__TextStyle-Base-XXS-B-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusBMinusRed_C* UTextStyleMinusBaseMinusXXSMinusBMinusRed_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusBMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusBMinusRed_C*>(UTextStyleMinusBaseMinusXXSMinusBMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


