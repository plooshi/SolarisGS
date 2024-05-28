#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Black.TextStyle-Header-L-Black_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Black_C");

	return Clss;
}


// TextStyle-Header-L-Black_C TextStyle-Header-L-Black.Default__TextStyle-Header-L-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusBlack_C* UTextStyleMinusHeaderMinusLMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusBlack_C*>(UTextStyleMinusHeaderMinusLMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


