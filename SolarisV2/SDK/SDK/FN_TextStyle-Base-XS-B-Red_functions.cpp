#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Red.TextStyle-Base-XS-B-Red_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Red_C");

	return Clss;
}


// TextStyle-Base-XS-B-Red_C TextStyle-Base-XS-B-Red.Default__TextStyle-Base-XS-B-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusRed_C* UTextStyleMinusBaseMinusXSMinusBMinusRed_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusRed_C*>(UTextStyleMinusBaseMinusXSMinusBMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


