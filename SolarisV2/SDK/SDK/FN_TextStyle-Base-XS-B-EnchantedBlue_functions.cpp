#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-EnchantedBlue.TextStyle-Base-XS-B-EnchantedBlue_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-EnchantedBlue_C");

	return Clss;
}


// TextStyle-Base-XS-B-EnchantedBlue_C TextStyle-Base-XS-B-EnchantedBlue.Default__TextStyle-Base-XS-B-EnchantedBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C* UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C*>(UTextStyleMinusBaseMinusXSMinusBMinusEnchantedBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


