#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-512-Gold.TextStyle-Header-512-Gold_C
// (None)

class UClass* UTextStyleMinusHeaderMinus512MinusGold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-512-Gold_C");

	return Clss;
}


// TextStyle-Header-512-Gold_C TextStyle-Header-512-Gold.Default__TextStyle-Header-512-Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinus512MinusGold_C* UTextStyleMinusHeaderMinus512MinusGold_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinus512MinusGold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinus512MinusGold_C*>(UTextStyleMinusHeaderMinus512MinusGold_C::StaticClass()->DefaultObject);

	return Default;
}

}


