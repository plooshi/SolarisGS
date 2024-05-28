#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-Picasso.TextStyle-Base-S-Picasso_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusPicasso_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-Picasso_C");

	return Clss;
}


// TextStyle-Base-S-Picasso_C TextStyle-Base-S-Picasso.Default__TextStyle-Base-S-Picasso_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusPicasso_C* UTextStyleMinusBaseMinusSMinusPicasso_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusPicasso_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusPicasso_C*>(UTextStyleMinusBaseMinusSMinusPicasso_C::StaticClass()->DefaultObject);

	return Default;
}

}


