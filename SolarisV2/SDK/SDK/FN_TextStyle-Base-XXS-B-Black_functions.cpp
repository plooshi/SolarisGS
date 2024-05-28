#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-B-Black.TextStyle-Base-XXS-B-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-B-Black_C");

	return Clss;
}


// TextStyle-Base-XXS-B-Black_C TextStyle-Base-XXS-B-Black.Default__TextStyle-Base-XXS-B-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C* UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C*>(UTextStyleMinusBaseMinusXXSMinusBMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


