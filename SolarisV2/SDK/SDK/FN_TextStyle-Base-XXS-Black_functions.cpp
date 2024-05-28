#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-Black.TextStyle-Base-XXS-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-Black_C");

	return Clss;
}


// TextStyle-Base-XXS-Black_C TextStyle-Base-XXS-Black.Default__TextStyle-Base-XXS-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusBlack_C* UTextStyleMinusBaseMinusXXSMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusBlack_C*>(UTextStyleMinusBaseMinusXXSMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


