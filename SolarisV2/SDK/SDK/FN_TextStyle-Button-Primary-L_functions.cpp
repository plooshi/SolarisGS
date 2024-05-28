#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-L.TextStyle-Button-Primary-L_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-L_C");

	return Clss;
}


// TextStyle-Button-Primary-L_C TextStyle-Button-Primary-L.Default__TextStyle-Button-Primary-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusL_C* UTextStyleMinusButtonMinusPrimaryMinusL_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusL_C*>(UTextStyleMinusButtonMinusPrimaryMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


