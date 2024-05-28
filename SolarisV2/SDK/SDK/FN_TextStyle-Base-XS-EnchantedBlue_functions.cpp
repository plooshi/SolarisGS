#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-EnchantedBlue.TextStyle-Base-XS-EnchantedBlue_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-EnchantedBlue_C");

	return Clss;
}


// TextStyle-Base-XS-EnchantedBlue_C TextStyle-Base-XS-EnchantedBlue.Default__TextStyle-Base-XS-EnchantedBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C* UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C*>(UTextStyleMinusBaseMinusXSMinusEnchantedBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


