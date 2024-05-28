#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Blue.TextStyle-Base-XS-B-Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Blue_C");

	return Clss;
}


// TextStyle-Base-XS-B-Blue_C TextStyle-Base-XS-B-Blue.Default__TextStyle-Base-XS-B-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBlue_C* UTextStyleMinusBaseMinusXSMinusBMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBlue_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


