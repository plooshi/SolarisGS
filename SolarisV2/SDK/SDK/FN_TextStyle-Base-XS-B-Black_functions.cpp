#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Black.TextStyle-Base-XS-B-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Black_C");

	return Clss;
}


// TextStyle-Base-XS-B-Black_C TextStyle-Base-XS-B-Black.Default__TextStyle-Base-XS-B-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBlack_C* UTextStyleMinusBaseMinusXSMinusBMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBlack_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


