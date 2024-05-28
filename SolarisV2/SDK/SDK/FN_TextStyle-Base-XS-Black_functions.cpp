#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Black.TextStyle-Base-XS-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Black_C");

	return Clss;
}


// TextStyle-Base-XS-Black_C TextStyle-Base-XS-Black.Default__TextStyle-Base-XS-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBlack_C* UTextStyleMinusBaseMinusXSMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBlack_C*>(UTextStyleMinusBaseMinusXSMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


