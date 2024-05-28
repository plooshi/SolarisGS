#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Picasso.TextStyle-Base-S-B-Picasso_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusPicasso_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Picasso_C");

	return Clss;
}


// TextStyle-Base-S-B-Picasso_C TextStyle-Base-S-B-Picasso.Default__TextStyle-Base-S-B-Picasso_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusPicasso_C* UTextStyleMinusBaseMinusSMinusBMinusPicasso_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusPicasso_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusPicasso_C*>(UTextStyleMinusBaseMinusSMinusBMinusPicasso_C::StaticClass()->DefaultObject);

	return Default;
}

}


